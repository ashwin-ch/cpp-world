import sys, datetime, os, os.path

# helper for showing help information
def ShowHelp():
    print ('create.py - A helper for generating C++ code files.')
    # print '  Usage: python create.py [class/file name] [options]'
    # print '  Options:'
    # print '    --creator [name]     - Specifies the copyright holder for the file headers.'
    # print '    --directory [dir]    - The directory in which to create the files.'
    # print '    --namespace [name]   - Specifies the namespace of the type. Can be nested, i.e. Foo::Bar.'
    # print '  Examples:'
    # print '    python create.py MyClass'
    # print '    python create.py SomeClass --namespace SomeNamespace'
    # print '    python create.py Sprite --creator "Nick Gravelyn" --namespace "MyGame::Graphics"'

# helper for writing the copyright notice on top of the files
def WriteCopyright(theFile, filename, creator):
    theFile.write('//\n//  ' + filename + '\n//  Copyright ' + str(datetime.datetime.now().year))
    if (creator != ''):
        theFile.write(' ' + creator)
    theFile.write('. All rights reserved.\n//\n\n')

# checks for an option in the arguments. returns false if the option isn't given.
def GetOption(option):
    if (option in sys.argv):
        index = sys.argv.index(option)
        if (len(sys.argv) < index + 1):
            print ('ERROR: Missing value for ' + option)
            ShowHelp()
            sys.exit()
        return sys.argv[index + 1]
    else:
        return False

# we need at least the name
if (len(sys.argv) < 2):
    ShowHelp()
    sys.exit()

# get the item name
itemName = sys.argv[1]

# get the creator's name
creator = GetOption('--creator')
if (creator == False):
    creator = ''

# get the directory for the files
directory = GetOption('--directory')
if (directory == False):
    directory = '.'

# get the namespace list
namespaces = GetOption('--namespace')
if (namespaces == False):
    namespaces = []
else:
    namespaces = namespaces.split('::')

# get our file paths
headerPath = os.path.join(directory, itemName + '.hpp')
implPath = os.path.join(directory, itemName + '.cpp')

# create our header file first
defineGuard = itemName.upper() + '_HPP_INCLUDED'
print ('Creating ' + headerPath)
with open(headerPath, 'w') as headerFile:

  headerFile.write("\n\n // Subscription declaration ..... \n\n\n")

  for n in range(0,50):
    # std::unique_ptr<csp::afw::core::Subscription> m_subscription_detn0to7;
    group_id =  str(n * 8) + 'to' + str(n * 8 + 7)
    headerFile.write("std::unique_ptr<csp::afw::core::Subscription> m_subscription_detn" + group_id + ";\n")

  headerFile.write("\n\n // signal declaration ..... \n\n\n")

  for n in range(0,50):
    # std::unique_ptr<csp::afw::core::Subscription> m_subscription_detn0to7;
    group_id =  str(n * 8) + 'to' + str(n * 8 + 7)
    headerFile.write("initialflrmonitorhal::types::FLR2RdrDetn0To7" + group_id + " m_signal_detn_" + group_id +";\n")


# now write out the implementation file
print ('Creating ' + implPath)
with open(implPath, 'w') as implFile:

    # detection.snr = detectionGroup_0to7[scanID].flr2rdr_detn0to7snr0;                // change in yaml to double instead of float
    # detection.azimuth = detectionGroup_0to7[scanID].flr2rdr_detn0to7azi_ag0;         // change in yaml to double instead of float
    # detection.elevation = detectionGroup_0to7[scanID].flr2rdr_detn0to7elevn_ag0;     // change in yaml to double instead of float
    # detection.range = detectionGroup_0to7[scanID].flr2rdr_detn0to7rnge0;             // change in yaml to double instead of float
    # detection.range_rate = detectionGroup_0to7[scanID].flr2rdr_detn0to7rng_rate0;    // change in yaml to double instead of float
    # detection.is_dynamic = detectionGroup_0to7[scanID].flr2rdr_detn0to7dyn_prpty0;   // cast uint8_t to bool
    # detection.mode = static_cast<flrmonitorhal::Mode>(detectionGroup_0to7[scanID].flr2rdr_detn0to7mode0);              // cast to our type of enum
    # //detection.quality_aggregated                                                                this attribute does not exist in the generated signal types
    # detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_0to7[scanID].flr2rdr_detn0to7rng_qlty0); // cast to our type of enum
    # detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_0to7[scanID].flr2rdr_detn0to7rng_rt_qlty0); // cast to our type of enum
    # //detection.quality_azimuth


    # void InitialFLRMonitorHal::Impl::store_detection_data_0to7(const initialflrmonitorhal::types::FLR2RdrDetn0To7 detectionGroup, const uint8_t& scanID)
    # {
    #     if ( !detectionGroup_0to7.count(scanID) )
    #     {
    #         detectionGroup_0to7.emplace(std::pair<uint8_t, initialflrmonitorhal::types::FLR2RdrDetn0To7>(scanID, detectionGroup));
    #         scan_id_counter[scanID]++;
    #     }
    # }

    #function header
    function_template_start = "flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection"
    function_template_end = "(const uint8_t& scanID) const"
    detection_declaration = "  flrmonitorhal::RadarDetection detection;"

    #properties
    detection_snr = "  detection.snr = "
    detection_azimuth = "  detection.azimuth = "
    detection_elevation = "  detection.elevation = "
    detection_range = "  detection.range = "
    detection_range_rate = "  detection.range_rate = "
    detection_isdynamic = "  detection.is_dynamic = "
    detection_mode = "  detection.mode = "
    detection_quality_range = "  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>("
    detection_quality_range_rate = "  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>("

    # generic
    detection_group = "detectionGroup_"
    detection_scan_id = "[scanID].flr2rdr_detn"

    min_detection = 0
    max_detection = 50
    min_index = 0
    max_index = 8

    implFile.write("\n\n // Subscription definition ..... \n\n\n")


    for n in range(min_detection, max_detection):
      # m_subscription_detn0to7 = m_sig_adapter->flr2rdr_detn0to7()->Subscribe(std::bind(&InitialFLRMonitorHal::Impl::UpdateDetn0to7, this), &notification_configuration);
      group_id =  str(n * 8) + 'to' + str(n * 8 + 7)
      implFile.write("m_subscription_detn" + group_id + " = m_sig_adapter->flr2rdr_detn" + group_id + "()->Subscribe(std::bind(&InitialFLRMonitorHal::Impl::UpdateDetn" + group_id + ", this), &notification_configuration);\n")


    implFile.write("\n\n // Update functions ..... \n\n\n")

    # void InitialFLRMonitorHal::Impl::UpdateDetn0to7()
    # {
    #     // Move initialflrmonitorhal::types::FLR2RdrDetn0To7 m_signal_detn_0to7; to here from the hpp file.
    #     csp::afw::core::ErrorCode error_code = m_sig_adapter->flr2rdr_detn0to7()->get(&m_signal_detn_0to7);

    #     if ( csp::afw::core::Status::is_failure(error_code) )
    #         std::cout << "Failed to read from signal database" << std::endl;
    #     else
    #     {
    #         store_detection_data_0to7(m_signal_detn_0to7, m_signal_detn_0to7.flr2rdr_detn0to7scan_id0to7);
    #     }
    # }

    for n in range( min_detection, max_detection ):
      group_id =  str(n * 8) + 'to' + str(n * 8 + 7)
      update_function = "void InitialFLRMonitorHal::Impl::UpdateDetn" + group_id + "()\n{\n"
      update_function_line1 = "  csp::afw::core::ErrorCode error_code = m_sig_adapter->flr2rdr_detn" + group_id + "()->get(&m_signal_detn_" + group_id + ");\n"
      update_function_line2 = "  if( csp::afw::core::Status::is_failure(error_code) )\n    std::cout << \"Failed to read from signal database\" << std::endl;\n    else {\n"
      update_function_line3 = "    store_detection_data_" + group_id + "(m_signal_detn_" + group_id + ", m_signal_detn_" + group_id + ".flr2rdr_detn" + group_id + "scan_id" + group_id + ");\n  }\n}\n\n"

      implFile.write( update_function + update_function_line1 + update_function_line2 + update_function_line3 )

    implFile.write("\n\n // store function ..... \n\n\n")



    for n in range(min_detection, max_detection):

      group_id =  str(n * 8) + 'to' + str(n * 8 + 7)
      store_function = "void InitialFLRMonitorHal::Impl::store_detection_data_" + group_id + "(const initialflrmonitorhal::types::FLR2RdrDetn" + group_id + " detectionGroup, const uint8_t& scanID)\n{\n"
      store_function_line2 = "  if( !detectionGroup_" + group_id + ".count(scanID) )\n  {\n"
      store_function_line3 = "      detectionGroup_" + group_id + ".emplace(std::pair<uint8_t, initialflrmonitorhal::types::FLR2RdrDetn" + group_id + ">(scanID, detectionGroup));\n"
      store_function_line4 = "      scan_id_counter[scanID]++;\n  }\n}\n"

      implFile.write( store_function + store_function_line2 + store_function_line3 + store_function_line4 + '\n' )

      implFile.write("\n\n // Get detection function  for detection ..... " + str(n) + "\n\n\n" )

      for m in range(min_index, max_index):
        detection_id = str(( n * 8 ) + m )
        implFile.write(function_template_start + str( detection_id ) + function_template_end + '{\n')
        implFile.write(detection_declaration+ '\n\n')

        #unique assignment for detection

        implFile.write(detection_snr + detection_group + group_id + detection_scan_id + group_id + 'snr' + detection_id + ';\n')
        implFile.write(detection_azimuth + detection_group + group_id + detection_scan_id + group_id + 'azi' + detection_id + ';\n')
        implFile.write(detection_elevation + detection_group + group_id + detection_scan_id + group_id + 'elevn' + detection_id + ';\n')
        implFile.write(detection_range + detection_group + group_id + detection_scan_id + group_id + 'rnge' + detection_id + ';\n')
        implFile.write(detection_range_rate + detection_group + group_id + detection_scan_id + group_id + 'rng_rate' + detection_id + ';\n')
        implFile.write(detection_isdynamic + detection_group + group_id + detection_scan_id + group_id + 'dyn_prpty' + detection_id + ';\n')
        implFile.write(detection_mode + detection_group + group_id + detection_scan_id + group_id + 'mode' + detection_id + ';\n')
        implFile.write(detection_quality_range + detection_group + group_id + detection_scan_id + group_id + 'rng_qlty' + detection_id + ');\n')
        implFile.write(detection_quality_range_rate + detection_group + group_id + detection_scan_id + group_id + 'rng_rt_qlty' + detection_id + ');\n')

        implFile.write('\n')
        implFile.write('  return detection;' + '\n}\n\n')



