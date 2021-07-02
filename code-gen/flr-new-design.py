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
  min_index = 0
  max_index = 8

  for n in range(0,50):
    group_id =  str(n * 8) + 'to' + str(n * 8 + 7)
    headerFile.write( "void UpdateDetection" + group_id + "();\n")
    for m in range( min_index, max_index):
        # flrmonitorhal::RadarDetection TranslateDetection0(const initialflrmonitorhal::types::FLR2RdrDetn0To7& detectionGroup) const;
      detection_id = str(( n * 8 ) + m )
      headerFile.write("flrmonitorhal::RadarDetection TranslateDetection" + str(detection_id) + "  \\\n( const initialflrmonitorhal::types::FLR2RdrDetn" + group_id + "& detectionGroup) const;\n" )
    headerFile.write( "\n\n" )
  # headerFile.write("\n\n // signal declaration ..... \n\n\n")

  # for n in range(0,50):
  #   # std::unique_ptr<csp::afw::core::Subscription> m_subscription_detn0to7;
  #   headerFile.write("initialflrmonitorhal::types::FLR2RdrDetn0To7" + group_id + " m_signal_detn_" + group_id +";\n")


# now write out the implementation file
print ('Creating ' + implPath)
with open(implPath, 'w') as implFile:

    # flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::TranslateDetection0(const initialflrmonitorhal::types::FLR2RdrDetn0To7& detectionGroup) const
    # {
    #   flrmonitorhal::RadarDetection detection;

    #   detection.snr = detectionGroup.flr2rdr_detn0to7snr0;                        // change in yaml to double instead of float
    #   detection.azimuth = detectionGroup.flr2rdr_detn0to7azi_ag0;                 // change in yaml to double instead of float
    #   detection.elevation = detectionGroup.flr2rdr_detn0to7elevn_ag0;             // change in yaml to double instead of float
    #   detection.range = detectionGroup.flr2rdr_detn0to7rnge0;                     // change in yaml to double instead of float
    #   detection.range_rate = detectionGroup.flr2rdr_detn0to7rng_rate0;            // change in yaml to double instead of float
    #   detection.is_dynamic = detectionGroup.flr2rdr_detn0to7dyn_prpty0;           // cast uint8_t to bool
    #   detection.mode = static_cast<flrmonitorhal::Mode>(detectionGroup.flr2rdr_detn0to7mode0);
    #   detection.quality_aggregated = flrmonitorhal::QualityAggregated::kLow;      // default value, set it in constructor to save set opperations?
    #   detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup.flr2rdr_detn0to7rng_qlty0);
    #   detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup.flr2rdr_detn0to7rng_rt_qlty0);
    #   detection.quality_azimuth = flrmonitorhal::QualitySpecific::kNotReliable;   // default value, set it in constructor to save set opperations?

    #   return detection;
    # }

    #function header
    function_template_start = "flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::TranslateDetection"
    function_template_end1 = "( const initialflrmonitorhal::types::FLR2RdrDetn"
    function_template_end2 = "& detectionGroup ) const"

    detection_declaration = "  flrmonitorhal::RadarDetection detection;"

    #properties
    detection_snr = "  detection.snr = "
    detection_azimuth = "  detection.azimuth = "
    detection_elevation = "  detection.elevation = "
    detection_range = "  detection.range = "
    detection_range_rate = "  detection.range_rate = "
    detection_isdynamic = "  detection.is_dynamic = "
    detection_mode = "  detection.mode = "
    detection_quality_range = "  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>( "
    detection_quality_range_rate = "  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>( "
    detection_azimuth_quality = "  detection.quality_azimuth = flrmonitorhal::QualitySpecific::kNotReliable;"
    detection_aggregated_quality = "  detection.quality_aggregated = flrmonitorhal::QualityAggregated::kLow;"

    # generic
    detection_group = "detectionGroup"
    detection_scan_id = ".flr2rdr_detn"

    min_detection = 0
    max_detection = 50
    min_index = 0
    max_index = 8

    #comments
    implFile.write("\n\n // Subscription definition ..... \n\n\n")


    for n in range(min_detection, max_detection):
      # m_subscription_detn0to7 = m_sig_adapter->flr2rdr_detn0to7()->Subscribe(std::bind(&InitialFLRMonitorHal::Impl::UpdateDetn0to7, this), &notification_configuration);
      group_id =  str(n * 8) + 'to' + str(n * 8 + 7)
      implFile.write("m_subscription_detn" + group_id + " = m_sig_adapter->flr2rdr_detn" + group_id + "()->Subscribe(std::bind(&InitialFLRMonitorHal::Impl::UpdateDetections" + group_id + ", this), &notification_configuration);\n")

    # comments
    implFile.write("\n\n // Update functions ..... \n\n\n")

    for n in range( min_detection, max_detection ):
      group_id =  str(n * 8) + 'to' + str(n * 8 + 7)
      a = n *8
      b = n * 8 + 8


      update_function = "void InitialFLRMonitorHal::Impl::UpdateDetections" + group_id + "()\n{\n"
      update_function_line = "  initialflrmonitorhal::types::FLR2RdrDetn" + group_id + " signal_detections_" + group_id + ";\n"
      update_function_line1 = "  csp::afw::core::ErrorCode error_code = m_sig_adapter->flr2rdr_detn" + group_id + "()->get( &m_signal_detn_" + group_id + " );\n"
      update_function_line2 = "  if( csp::afw::core::Status::is_failure( error_code ) )\n  {\n    std::cout << \"Failed to read from signal database\" << std::endl;\n  }\n  else {\n"
      recurrsiveline = ""
      for x in range(a, b):
        recurrsiveline += "    StoreDetection( TranslateDetection" + str(x) + "( signal_detections_" + group_id + " ), signal_detections_" + group_id + ".flr2rdr_detn" + group_id + "scan_id" + group_id + ", " + str(x) +" );\n"

      update_function_line3 = "  }\n}\n\n"

      implFile.write( update_function + update_function_line + update_function_line1 + update_function_line2 + recurrsiveline + update_function_line3 )




    for n in range(min_detection, max_detection):

      group_id =  str(n * 8) + 'to' + str(n * 8 + 7)
      # store_function = "flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::TranslateDetection" + group_id + "(const initialflrmonitorhal::types::FLR2RdrDetn" + group_id + " detectionGroup, const uint8_t& scanID)\n{\n"

      implFile.write("\n\n // Translate functions  for frame ..... " + str(n) + "\n\n\n" )

      for m in range(min_index, max_index):
        detection_id = str(( n * 8 ) + m )
        implFile.write(function_template_start + str( detection_id ) + function_template_end1 + group_id + function_template_end2 + ' {\n')
        implFile.write(detection_declaration + "\n\n")

        #unique assignment for detection
        implFile.write(detection_snr + detection_group + detection_scan_id + group_id + 'snr' + detection_id + ';\n')
        implFile.write(detection_azimuth + detection_group  + detection_scan_id + group_id + 'azi' + detection_id + ';\n')
        implFile.write(detection_elevation + detection_group + detection_scan_id + group_id + 'elevn' + detection_id + ';\n')
        implFile.write(detection_range + detection_group + detection_scan_id + group_id + 'rnge' + detection_id + ';\n')
        implFile.write(detection_range_rate + detection_group + detection_scan_id + group_id + 'rng_rate' + detection_id + ';\n')
        implFile.write(detection_isdynamic + detection_group + detection_scan_id + group_id + 'dyn_prpty' + detection_id + ';\n')
        implFile.write(detection_mode + detection_group + detection_scan_id + group_id + 'mode' + detection_id + ';\n')
        implFile.write(detection_quality_range + detection_group + detection_scan_id + group_id + 'rng_qlty' + detection_id + ' );\n')
        implFile.write(detection_quality_range_rate + detection_group  + detection_scan_id + group_id + 'rng_rt_qlty' + detection_id + ' );\n')
        implFile.write(detection_azimuth_quality + '\n')
        implFile.write(detection_aggregated_quality + '\n')

        implFile.write('\n')
        implFile.write('  return detection;' + '\n}\n\n')
