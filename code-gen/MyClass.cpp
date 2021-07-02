//
//  MyClass.cpp
//  Copyright 2021. All rights reserved.
//



 // Subscription declaration .....


m_subscription_detn0to7 = m_sig_adapter->flr2rdr_detn0to7()->Subscribe(std::bind(&InitialFLRMonitorHal::Impl::UpdateDetn0to7, this), &notification_configuration);
m_subscription_detn8to15 = m_sig_adapter->flr2rdr_detn8to15()->Subscribe(std::bind(&InitialFLRMonitorHal::Impl::UpdateDetn8to15, this), &notification_configuration);
m_subscription_detn16to23 = m_sig_adapter->flr2rdr_detn16to23()->Subscribe(std::bind(&InitialFLRMonitorHal::Impl::UpdateDetn16to23, this), &notification_configuration);
m_subscription_detn24to31 = m_sig_adapter->flr2rdr_detn24to31()->Subscribe(std::bind(&InitialFLRMonitorHal::Impl::UpdateDetn24to31, this), &notification_configuration);
m_subscription_detn32to39 = m_sig_adapter->flr2rdr_detn32to39()->Subscribe(std::bind(&InitialFLRMonitorHal::Impl::UpdateDetn32to39, this), &notification_configuration);
m_subscription_detn40to47 = m_sig_adapter->flr2rdr_detn40to47()->Subscribe(std::bind(&InitialFLRMonitorHal::Impl::UpdateDetn40to47, this), &notification_configuration);
m_subscription_detn48to55 = m_sig_adapter->flr2rdr_detn48to55()->Subscribe(std::bind(&InitialFLRMonitorHal::Impl::UpdateDetn48to55, this), &notification_configuration);
m_subscription_detn56to63 = m_sig_adapter->flr2rdr_detn56to63()->Subscribe(std::bind(&InitialFLRMonitorHal::Impl::UpdateDetn56to63, this), &notification_configuration);
m_subscription_detn64to71 = m_sig_adapter->flr2rdr_detn64to71()->Subscribe(std::bind(&InitialFLRMonitorHal::Impl::UpdateDetn64to71, this), &notification_configuration);
m_subscription_detn72to79 = m_sig_adapter->flr2rdr_detn72to79()->Subscribe(std::bind(&InitialFLRMonitorHal::Impl::UpdateDetn72to79, this), &notification_configuration);
m_subscription_detn80to87 = m_sig_adapter->flr2rdr_detn80to87()->Subscribe(std::bind(&InitialFLRMonitorHal::Impl::UpdateDetn80to87, this), &notification_configuration);
m_subscription_detn88to95 = m_sig_adapter->flr2rdr_detn88to95()->Subscribe(std::bind(&InitialFLRMonitorHal::Impl::UpdateDetn88to95, this), &notification_configuration);
m_subscription_detn96to103 = m_sig_adapter->flr2rdr_detn96to103()->Subscribe(std::bind(&InitialFLRMonitorHal::Impl::UpdateDetn96to103, this), &notification_configuration);
m_subscription_detn104to111 = m_sig_adapter->flr2rdr_detn104to111()->Subscribe(std::bind(&InitialFLRMonitorHal::Impl::UpdateDetn104to111, this), &notification_configuration);
m_subscription_detn112to119 = m_sig_adapter->flr2rdr_detn112to119()->Subscribe(std::bind(&InitialFLRMonitorHal::Impl::UpdateDetn112to119, this), &notification_configuration);
m_subscription_detn120to127 = m_sig_adapter->flr2rdr_detn120to127()->Subscribe(std::bind(&InitialFLRMonitorHal::Impl::UpdateDetn120to127, this), &notification_configuration);
m_subscription_detn128to135 = m_sig_adapter->flr2rdr_detn128to135()->Subscribe(std::bind(&InitialFLRMonitorHal::Impl::UpdateDetn128to135, this), &notification_configuration);
m_subscription_detn136to143 = m_sig_adapter->flr2rdr_detn136to143()->Subscribe(std::bind(&InitialFLRMonitorHal::Impl::UpdateDetn136to143, this), &notification_configuration);
m_subscription_detn144to151 = m_sig_adapter->flr2rdr_detn144to151()->Subscribe(std::bind(&InitialFLRMonitorHal::Impl::UpdateDetn144to151, this), &notification_configuration);
m_subscription_detn152to159 = m_sig_adapter->flr2rdr_detn152to159()->Subscribe(std::bind(&InitialFLRMonitorHal::Impl::UpdateDetn152to159, this), &notification_configuration);
m_subscription_detn160to167 = m_sig_adapter->flr2rdr_detn160to167()->Subscribe(std::bind(&InitialFLRMonitorHal::Impl::UpdateDetn160to167, this), &notification_configuration);
m_subscription_detn168to175 = m_sig_adapter->flr2rdr_detn168to175()->Subscribe(std::bind(&InitialFLRMonitorHal::Impl::UpdateDetn168to175, this), &notification_configuration);
m_subscription_detn176to183 = m_sig_adapter->flr2rdr_detn176to183()->Subscribe(std::bind(&InitialFLRMonitorHal::Impl::UpdateDetn176to183, this), &notification_configuration);
m_subscription_detn184to191 = m_sig_adapter->flr2rdr_detn184to191()->Subscribe(std::bind(&InitialFLRMonitorHal::Impl::UpdateDetn184to191, this), &notification_configuration);
m_subscription_detn192to199 = m_sig_adapter->flr2rdr_detn192to199()->Subscribe(std::bind(&InitialFLRMonitorHal::Impl::UpdateDetn192to199, this), &notification_configuration);
m_subscription_detn200to207 = m_sig_adapter->flr2rdr_detn200to207()->Subscribe(std::bind(&InitialFLRMonitorHal::Impl::UpdateDetn200to207, this), &notification_configuration);
m_subscription_detn208to215 = m_sig_adapter->flr2rdr_detn208to215()->Subscribe(std::bind(&InitialFLRMonitorHal::Impl::UpdateDetn208to215, this), &notification_configuration);
m_subscription_detn216to223 = m_sig_adapter->flr2rdr_detn216to223()->Subscribe(std::bind(&InitialFLRMonitorHal::Impl::UpdateDetn216to223, this), &notification_configuration);
m_subscription_detn224to231 = m_sig_adapter->flr2rdr_detn224to231()->Subscribe(std::bind(&InitialFLRMonitorHal::Impl::UpdateDetn224to231, this), &notification_configuration);
m_subscription_detn232to239 = m_sig_adapter->flr2rdr_detn232to239()->Subscribe(std::bind(&InitialFLRMonitorHal::Impl::UpdateDetn232to239, this), &notification_configuration);
m_subscription_detn240to247 = m_sig_adapter->flr2rdr_detn240to247()->Subscribe(std::bind(&InitialFLRMonitorHal::Impl::UpdateDetn240to247, this), &notification_configuration);
m_subscription_detn248to255 = m_sig_adapter->flr2rdr_detn248to255()->Subscribe(std::bind(&InitialFLRMonitorHal::Impl::UpdateDetn248to255, this), &notification_configuration);
m_subscription_detn256to263 = m_sig_adapter->flr2rdr_detn256to263()->Subscribe(std::bind(&InitialFLRMonitorHal::Impl::UpdateDetn256to263, this), &notification_configuration);
m_subscription_detn264to271 = m_sig_adapter->flr2rdr_detn264to271()->Subscribe(std::bind(&InitialFLRMonitorHal::Impl::UpdateDetn264to271, this), &notification_configuration);
m_subscription_detn272to279 = m_sig_adapter->flr2rdr_detn272to279()->Subscribe(std::bind(&InitialFLRMonitorHal::Impl::UpdateDetn272to279, this), &notification_configuration);
m_subscription_detn280to287 = m_sig_adapter->flr2rdr_detn280to287()->Subscribe(std::bind(&InitialFLRMonitorHal::Impl::UpdateDetn280to287, this), &notification_configuration);
m_subscription_detn288to295 = m_sig_adapter->flr2rdr_detn288to295()->Subscribe(std::bind(&InitialFLRMonitorHal::Impl::UpdateDetn288to295, this), &notification_configuration);
m_subscription_detn296to303 = m_sig_adapter->flr2rdr_detn296to303()->Subscribe(std::bind(&InitialFLRMonitorHal::Impl::UpdateDetn296to303, this), &notification_configuration);
m_subscription_detn304to311 = m_sig_adapter->flr2rdr_detn304to311()->Subscribe(std::bind(&InitialFLRMonitorHal::Impl::UpdateDetn304to311, this), &notification_configuration);
m_subscription_detn312to319 = m_sig_adapter->flr2rdr_detn312to319()->Subscribe(std::bind(&InitialFLRMonitorHal::Impl::UpdateDetn312to319, this), &notification_configuration);
m_subscription_detn320to327 = m_sig_adapter->flr2rdr_detn320to327()->Subscribe(std::bind(&InitialFLRMonitorHal::Impl::UpdateDetn320to327, this), &notification_configuration);
m_subscription_detn328to335 = m_sig_adapter->flr2rdr_detn328to335()->Subscribe(std::bind(&InitialFLRMonitorHal::Impl::UpdateDetn328to335, this), &notification_configuration);
m_subscription_detn336to343 = m_sig_adapter->flr2rdr_detn336to343()->Subscribe(std::bind(&InitialFLRMonitorHal::Impl::UpdateDetn336to343, this), &notification_configuration);
m_subscription_detn344to351 = m_sig_adapter->flr2rdr_detn344to351()->Subscribe(std::bind(&InitialFLRMonitorHal::Impl::UpdateDetn344to351, this), &notification_configuration);
m_subscription_detn352to359 = m_sig_adapter->flr2rdr_detn352to359()->Subscribe(std::bind(&InitialFLRMonitorHal::Impl::UpdateDetn352to359, this), &notification_configuration);
m_subscription_detn360to367 = m_sig_adapter->flr2rdr_detn360to367()->Subscribe(std::bind(&InitialFLRMonitorHal::Impl::UpdateDetn360to367, this), &notification_configuration);
m_subscription_detn368to375 = m_sig_adapter->flr2rdr_detn368to375()->Subscribe(std::bind(&InitialFLRMonitorHal::Impl::UpdateDetn368to375, this), &notification_configuration);
m_subscription_detn376to383 = m_sig_adapter->flr2rdr_detn376to383()->Subscribe(std::bind(&InitialFLRMonitorHal::Impl::UpdateDetn376to383, this), &notification_configuration);
m_subscription_detn384to391 = m_sig_adapter->flr2rdr_detn384to391()->Subscribe(std::bind(&InitialFLRMonitorHal::Impl::UpdateDetn384to391, this), &notification_configuration);
m_subscription_detn392to399 = m_sig_adapter->flr2rdr_detn392to399()->Subscribe(std::bind(&InitialFLRMonitorHal::Impl::UpdateDetn392to399, this), &notification_configuration);


 // Update functions .....


void InitialFLRMonitorHal::Impl::UpdateDetn0to7()
{
  csp::afw::core::ErrorCode error_code = m_sig_adapter->flr2rdr_detn0to7()->get(&m_signal_detn_0to7);
  if( csp::afw::core::Status::is_failure(error_code) )
    std::cout << "Failed to read from signal database" << std::endl;
    else {
    store_detection_data_0to7(m_signal_detn_0to7, m_signal_detn_0to7.flr2rdr_detn0to7scan_id0to7);
  }
}

void InitialFLRMonitorHal::Impl::UpdateDetn8to15()
{
  csp::afw::core::ErrorCode error_code = m_sig_adapter->flr2rdr_detn8to15()->get(&m_signal_detn_8to15);
  if( csp::afw::core::Status::is_failure(error_code) )
    std::cout << "Failed to read from signal database" << std::endl;
    else {
    store_detection_data_8to15(m_signal_detn_8to15, m_signal_detn_8to15.flr2rdr_detn8to15scan_id8to15);
  }
}

void InitialFLRMonitorHal::Impl::UpdateDetn16to23()
{
  csp::afw::core::ErrorCode error_code = m_sig_adapter->flr2rdr_detn16to23()->get(&m_signal_detn_16to23);
  if( csp::afw::core::Status::is_failure(error_code) )
    std::cout << "Failed to read from signal database" << std::endl;
    else {
    store_detection_data_16to23(m_signal_detn_16to23, m_signal_detn_16to23.flr2rdr_detn16to23scan_id16to23);
  }
}

void InitialFLRMonitorHal::Impl::UpdateDetn24to31()
{
  csp::afw::core::ErrorCode error_code = m_sig_adapter->flr2rdr_detn24to31()->get(&m_signal_detn_24to31);
  if( csp::afw::core::Status::is_failure(error_code) )
    std::cout << "Failed to read from signal database" << std::endl;
    else {
    store_detection_data_24to31(m_signal_detn_24to31, m_signal_detn_24to31.flr2rdr_detn24to31scan_id24to31);
  }
}

void InitialFLRMonitorHal::Impl::UpdateDetn32to39()
{
  csp::afw::core::ErrorCode error_code = m_sig_adapter->flr2rdr_detn32to39()->get(&m_signal_detn_32to39);
  if( csp::afw::core::Status::is_failure(error_code) )
    std::cout << "Failed to read from signal database" << std::endl;
    else {
    store_detection_data_32to39(m_signal_detn_32to39, m_signal_detn_32to39.flr2rdr_detn32to39scan_id32to39);
  }
}

void InitialFLRMonitorHal::Impl::UpdateDetn40to47()
{
  csp::afw::core::ErrorCode error_code = m_sig_adapter->flr2rdr_detn40to47()->get(&m_signal_detn_40to47);
  if( csp::afw::core::Status::is_failure(error_code) )
    std::cout << "Failed to read from signal database" << std::endl;
    else {
    store_detection_data_40to47(m_signal_detn_40to47, m_signal_detn_40to47.flr2rdr_detn40to47scan_id40to47);
  }
}

void InitialFLRMonitorHal::Impl::UpdateDetn48to55()
{
  csp::afw::core::ErrorCode error_code = m_sig_adapter->flr2rdr_detn48to55()->get(&m_signal_detn_48to55);
  if( csp::afw::core::Status::is_failure(error_code) )
    std::cout << "Failed to read from signal database" << std::endl;
    else {
    store_detection_data_48to55(m_signal_detn_48to55, m_signal_detn_48to55.flr2rdr_detn48to55scan_id48to55);
  }
}

void InitialFLRMonitorHal::Impl::UpdateDetn56to63()
{
  csp::afw::core::ErrorCode error_code = m_sig_adapter->flr2rdr_detn56to63()->get(&m_signal_detn_56to63);
  if( csp::afw::core::Status::is_failure(error_code) )
    std::cout << "Failed to read from signal database" << std::endl;
    else {
    store_detection_data_56to63(m_signal_detn_56to63, m_signal_detn_56to63.flr2rdr_detn56to63scan_id56to63);
  }
}

void InitialFLRMonitorHal::Impl::UpdateDetn64to71()
{
  csp::afw::core::ErrorCode error_code = m_sig_adapter->flr2rdr_detn64to71()->get(&m_signal_detn_64to71);
  if( csp::afw::core::Status::is_failure(error_code) )
    std::cout << "Failed to read from signal database" << std::endl;
    else {
    store_detection_data_64to71(m_signal_detn_64to71, m_signal_detn_64to71.flr2rdr_detn64to71scan_id64to71);
  }
}

void InitialFLRMonitorHal::Impl::UpdateDetn72to79()
{
  csp::afw::core::ErrorCode error_code = m_sig_adapter->flr2rdr_detn72to79()->get(&m_signal_detn_72to79);
  if( csp::afw::core::Status::is_failure(error_code) )
    std::cout << "Failed to read from signal database" << std::endl;
    else {
    store_detection_data_72to79(m_signal_detn_72to79, m_signal_detn_72to79.flr2rdr_detn72to79scan_id72to79);
  }
}

void InitialFLRMonitorHal::Impl::UpdateDetn80to87()
{
  csp::afw::core::ErrorCode error_code = m_sig_adapter->flr2rdr_detn80to87()->get(&m_signal_detn_80to87);
  if( csp::afw::core::Status::is_failure(error_code) )
    std::cout << "Failed to read from signal database" << std::endl;
    else {
    store_detection_data_80to87(m_signal_detn_80to87, m_signal_detn_80to87.flr2rdr_detn80to87scan_id80to87);
  }
}

void InitialFLRMonitorHal::Impl::UpdateDetn88to95()
{
  csp::afw::core::ErrorCode error_code = m_sig_adapter->flr2rdr_detn88to95()->get(&m_signal_detn_88to95);
  if( csp::afw::core::Status::is_failure(error_code) )
    std::cout << "Failed to read from signal database" << std::endl;
    else {
    store_detection_data_88to95(m_signal_detn_88to95, m_signal_detn_88to95.flr2rdr_detn88to95scan_id88to95);
  }
}

void InitialFLRMonitorHal::Impl::UpdateDetn96to103()
{
  csp::afw::core::ErrorCode error_code = m_sig_adapter->flr2rdr_detn96to103()->get(&m_signal_detn_96to103);
  if( csp::afw::core::Status::is_failure(error_code) )
    std::cout << "Failed to read from signal database" << std::endl;
    else {
    store_detection_data_96to103(m_signal_detn_96to103, m_signal_detn_96to103.flr2rdr_detn96to103scan_id96to103);
  }
}

void InitialFLRMonitorHal::Impl::UpdateDetn104to111()
{
  csp::afw::core::ErrorCode error_code = m_sig_adapter->flr2rdr_detn104to111()->get(&m_signal_detn_104to111);
  if( csp::afw::core::Status::is_failure(error_code) )
    std::cout << "Failed to read from signal database" << std::endl;
    else {
    store_detection_data_104to111(m_signal_detn_104to111, m_signal_detn_104to111.flr2rdr_detn104to111scan_id104to111);
  }
}

void InitialFLRMonitorHal::Impl::UpdateDetn112to119()
{
  csp::afw::core::ErrorCode error_code = m_sig_adapter->flr2rdr_detn112to119()->get(&m_signal_detn_112to119);
  if( csp::afw::core::Status::is_failure(error_code) )
    std::cout << "Failed to read from signal database" << std::endl;
    else {
    store_detection_data_112to119(m_signal_detn_112to119, m_signal_detn_112to119.flr2rdr_detn112to119scan_id112to119);
  }
}

void InitialFLRMonitorHal::Impl::UpdateDetn120to127()
{
  csp::afw::core::ErrorCode error_code = m_sig_adapter->flr2rdr_detn120to127()->get(&m_signal_detn_120to127);
  if( csp::afw::core::Status::is_failure(error_code) )
    std::cout << "Failed to read from signal database" << std::endl;
    else {
    store_detection_data_120to127(m_signal_detn_120to127, m_signal_detn_120to127.flr2rdr_detn120to127scan_id120to127);
  }
}

void InitialFLRMonitorHal::Impl::UpdateDetn128to135()
{
  csp::afw::core::ErrorCode error_code = m_sig_adapter->flr2rdr_detn128to135()->get(&m_signal_detn_128to135);
  if( csp::afw::core::Status::is_failure(error_code) )
    std::cout << "Failed to read from signal database" << std::endl;
    else {
    store_detection_data_128to135(m_signal_detn_128to135, m_signal_detn_128to135.flr2rdr_detn128to135scan_id128to135);
  }
}

void InitialFLRMonitorHal::Impl::UpdateDetn136to143()
{
  csp::afw::core::ErrorCode error_code = m_sig_adapter->flr2rdr_detn136to143()->get(&m_signal_detn_136to143);
  if( csp::afw::core::Status::is_failure(error_code) )
    std::cout << "Failed to read from signal database" << std::endl;
    else {
    store_detection_data_136to143(m_signal_detn_136to143, m_signal_detn_136to143.flr2rdr_detn136to143scan_id136to143);
  }
}

void InitialFLRMonitorHal::Impl::UpdateDetn144to151()
{
  csp::afw::core::ErrorCode error_code = m_sig_adapter->flr2rdr_detn144to151()->get(&m_signal_detn_144to151);
  if( csp::afw::core::Status::is_failure(error_code) )
    std::cout << "Failed to read from signal database" << std::endl;
    else {
    store_detection_data_144to151(m_signal_detn_144to151, m_signal_detn_144to151.flr2rdr_detn144to151scan_id144to151);
  }
}

void InitialFLRMonitorHal::Impl::UpdateDetn152to159()
{
  csp::afw::core::ErrorCode error_code = m_sig_adapter->flr2rdr_detn152to159()->get(&m_signal_detn_152to159);
  if( csp::afw::core::Status::is_failure(error_code) )
    std::cout << "Failed to read from signal database" << std::endl;
    else {
    store_detection_data_152to159(m_signal_detn_152to159, m_signal_detn_152to159.flr2rdr_detn152to159scan_id152to159);
  }
}

void InitialFLRMonitorHal::Impl::UpdateDetn160to167()
{
  csp::afw::core::ErrorCode error_code = m_sig_adapter->flr2rdr_detn160to167()->get(&m_signal_detn_160to167);
  if( csp::afw::core::Status::is_failure(error_code) )
    std::cout << "Failed to read from signal database" << std::endl;
    else {
    store_detection_data_160to167(m_signal_detn_160to167, m_signal_detn_160to167.flr2rdr_detn160to167scan_id160to167);
  }
}

void InitialFLRMonitorHal::Impl::UpdateDetn168to175()
{
  csp::afw::core::ErrorCode error_code = m_sig_adapter->flr2rdr_detn168to175()->get(&m_signal_detn_168to175);
  if( csp::afw::core::Status::is_failure(error_code) )
    std::cout << "Failed to read from signal database" << std::endl;
    else {
    store_detection_data_168to175(m_signal_detn_168to175, m_signal_detn_168to175.flr2rdr_detn168to175scan_id168to175);
  }
}

void InitialFLRMonitorHal::Impl::UpdateDetn176to183()
{
  csp::afw::core::ErrorCode error_code = m_sig_adapter->flr2rdr_detn176to183()->get(&m_signal_detn_176to183);
  if( csp::afw::core::Status::is_failure(error_code) )
    std::cout << "Failed to read from signal database" << std::endl;
    else {
    store_detection_data_176to183(m_signal_detn_176to183, m_signal_detn_176to183.flr2rdr_detn176to183scan_id176to183);
  }
}

void InitialFLRMonitorHal::Impl::UpdateDetn184to191()
{
  csp::afw::core::ErrorCode error_code = m_sig_adapter->flr2rdr_detn184to191()->get(&m_signal_detn_184to191);
  if( csp::afw::core::Status::is_failure(error_code) )
    std::cout << "Failed to read from signal database" << std::endl;
    else {
    store_detection_data_184to191(m_signal_detn_184to191, m_signal_detn_184to191.flr2rdr_detn184to191scan_id184to191);
  }
}

void InitialFLRMonitorHal::Impl::UpdateDetn192to199()
{
  csp::afw::core::ErrorCode error_code = m_sig_adapter->flr2rdr_detn192to199()->get(&m_signal_detn_192to199);
  if( csp::afw::core::Status::is_failure(error_code) )
    std::cout << "Failed to read from signal database" << std::endl;
    else {
    store_detection_data_192to199(m_signal_detn_192to199, m_signal_detn_192to199.flr2rdr_detn192to199scan_id192to199);
  }
}

void InitialFLRMonitorHal::Impl::UpdateDetn200to207()
{
  csp::afw::core::ErrorCode error_code = m_sig_adapter->flr2rdr_detn200to207()->get(&m_signal_detn_200to207);
  if( csp::afw::core::Status::is_failure(error_code) )
    std::cout << "Failed to read from signal database" << std::endl;
    else {
    store_detection_data_200to207(m_signal_detn_200to207, m_signal_detn_200to207.flr2rdr_detn200to207scan_id200to207);
  }
}

void InitialFLRMonitorHal::Impl::UpdateDetn208to215()
{
  csp::afw::core::ErrorCode error_code = m_sig_adapter->flr2rdr_detn208to215()->get(&m_signal_detn_208to215);
  if( csp::afw::core::Status::is_failure(error_code) )
    std::cout << "Failed to read from signal database" << std::endl;
    else {
    store_detection_data_208to215(m_signal_detn_208to215, m_signal_detn_208to215.flr2rdr_detn208to215scan_id208to215);
  }
}

void InitialFLRMonitorHal::Impl::UpdateDetn216to223()
{
  csp::afw::core::ErrorCode error_code = m_sig_adapter->flr2rdr_detn216to223()->get(&m_signal_detn_216to223);
  if( csp::afw::core::Status::is_failure(error_code) )
    std::cout << "Failed to read from signal database" << std::endl;
    else {
    store_detection_data_216to223(m_signal_detn_216to223, m_signal_detn_216to223.flr2rdr_detn216to223scan_id216to223);
  }
}

void InitialFLRMonitorHal::Impl::UpdateDetn224to231()
{
  csp::afw::core::ErrorCode error_code = m_sig_adapter->flr2rdr_detn224to231()->get(&m_signal_detn_224to231);
  if( csp::afw::core::Status::is_failure(error_code) )
    std::cout << "Failed to read from signal database" << std::endl;
    else {
    store_detection_data_224to231(m_signal_detn_224to231, m_signal_detn_224to231.flr2rdr_detn224to231scan_id224to231);
  }
}

void InitialFLRMonitorHal::Impl::UpdateDetn232to239()
{
  csp::afw::core::ErrorCode error_code = m_sig_adapter->flr2rdr_detn232to239()->get(&m_signal_detn_232to239);
  if( csp::afw::core::Status::is_failure(error_code) )
    std::cout << "Failed to read from signal database" << std::endl;
    else {
    store_detection_data_232to239(m_signal_detn_232to239, m_signal_detn_232to239.flr2rdr_detn232to239scan_id232to239);
  }
}

void InitialFLRMonitorHal::Impl::UpdateDetn240to247()
{
  csp::afw::core::ErrorCode error_code = m_sig_adapter->flr2rdr_detn240to247()->get(&m_signal_detn_240to247);
  if( csp::afw::core::Status::is_failure(error_code) )
    std::cout << "Failed to read from signal database" << std::endl;
    else {
    store_detection_data_240to247(m_signal_detn_240to247, m_signal_detn_240to247.flr2rdr_detn240to247scan_id240to247);
  }
}

void InitialFLRMonitorHal::Impl::UpdateDetn248to255()
{
  csp::afw::core::ErrorCode error_code = m_sig_adapter->flr2rdr_detn248to255()->get(&m_signal_detn_248to255);
  if( csp::afw::core::Status::is_failure(error_code) )
    std::cout << "Failed to read from signal database" << std::endl;
    else {
    store_detection_data_248to255(m_signal_detn_248to255, m_signal_detn_248to255.flr2rdr_detn248to255scan_id248to255);
  }
}

void InitialFLRMonitorHal::Impl::UpdateDetn256to263()
{
  csp::afw::core::ErrorCode error_code = m_sig_adapter->flr2rdr_detn256to263()->get(&m_signal_detn_256to263);
  if( csp::afw::core::Status::is_failure(error_code) )
    std::cout << "Failed to read from signal database" << std::endl;
    else {
    store_detection_data_256to263(m_signal_detn_256to263, m_signal_detn_256to263.flr2rdr_detn256to263scan_id256to263);
  }
}

void InitialFLRMonitorHal::Impl::UpdateDetn264to271()
{
  csp::afw::core::ErrorCode error_code = m_sig_adapter->flr2rdr_detn264to271()->get(&m_signal_detn_264to271);
  if( csp::afw::core::Status::is_failure(error_code) )
    std::cout << "Failed to read from signal database" << std::endl;
    else {
    store_detection_data_264to271(m_signal_detn_264to271, m_signal_detn_264to271.flr2rdr_detn264to271scan_id264to271);
  }
}

void InitialFLRMonitorHal::Impl::UpdateDetn272to279()
{
  csp::afw::core::ErrorCode error_code = m_sig_adapter->flr2rdr_detn272to279()->get(&m_signal_detn_272to279);
  if( csp::afw::core::Status::is_failure(error_code) )
    std::cout << "Failed to read from signal database" << std::endl;
    else {
    store_detection_data_272to279(m_signal_detn_272to279, m_signal_detn_272to279.flr2rdr_detn272to279scan_id272to279);
  }
}

void InitialFLRMonitorHal::Impl::UpdateDetn280to287()
{
  csp::afw::core::ErrorCode error_code = m_sig_adapter->flr2rdr_detn280to287()->get(&m_signal_detn_280to287);
  if( csp::afw::core::Status::is_failure(error_code) )
    std::cout << "Failed to read from signal database" << std::endl;
    else {
    store_detection_data_280to287(m_signal_detn_280to287, m_signal_detn_280to287.flr2rdr_detn280to287scan_id280to287);
  }
}

void InitialFLRMonitorHal::Impl::UpdateDetn288to295()
{
  csp::afw::core::ErrorCode error_code = m_sig_adapter->flr2rdr_detn288to295()->get(&m_signal_detn_288to295);
  if( csp::afw::core::Status::is_failure(error_code) )
    std::cout << "Failed to read from signal database" << std::endl;
    else {
    store_detection_data_288to295(m_signal_detn_288to295, m_signal_detn_288to295.flr2rdr_detn288to295scan_id288to295);
  }
}

void InitialFLRMonitorHal::Impl::UpdateDetn296to303()
{
  csp::afw::core::ErrorCode error_code = m_sig_adapter->flr2rdr_detn296to303()->get(&m_signal_detn_296to303);
  if( csp::afw::core::Status::is_failure(error_code) )
    std::cout << "Failed to read from signal database" << std::endl;
    else {
    store_detection_data_296to303(m_signal_detn_296to303, m_signal_detn_296to303.flr2rdr_detn296to303scan_id296to303);
  }
}

void InitialFLRMonitorHal::Impl::UpdateDetn304to311()
{
  csp::afw::core::ErrorCode error_code = m_sig_adapter->flr2rdr_detn304to311()->get(&m_signal_detn_304to311);
  if( csp::afw::core::Status::is_failure(error_code) )
    std::cout << "Failed to read from signal database" << std::endl;
    else {
    store_detection_data_304to311(m_signal_detn_304to311, m_signal_detn_304to311.flr2rdr_detn304to311scan_id304to311);
  }
}

void InitialFLRMonitorHal::Impl::UpdateDetn312to319()
{
  csp::afw::core::ErrorCode error_code = m_sig_adapter->flr2rdr_detn312to319()->get(&m_signal_detn_312to319);
  if( csp::afw::core::Status::is_failure(error_code) )
    std::cout << "Failed to read from signal database" << std::endl;
    else {
    store_detection_data_312to319(m_signal_detn_312to319, m_signal_detn_312to319.flr2rdr_detn312to319scan_id312to319);
  }
}

void InitialFLRMonitorHal::Impl::UpdateDetn320to327()
{
  csp::afw::core::ErrorCode error_code = m_sig_adapter->flr2rdr_detn320to327()->get(&m_signal_detn_320to327);
  if( csp::afw::core::Status::is_failure(error_code) )
    std::cout << "Failed to read from signal database" << std::endl;
    else {
    store_detection_data_320to327(m_signal_detn_320to327, m_signal_detn_320to327.flr2rdr_detn320to327scan_id320to327);
  }
}

void InitialFLRMonitorHal::Impl::UpdateDetn328to335()
{
  csp::afw::core::ErrorCode error_code = m_sig_adapter->flr2rdr_detn328to335()->get(&m_signal_detn_328to335);
  if( csp::afw::core::Status::is_failure(error_code) )
    std::cout << "Failed to read from signal database" << std::endl;
    else {
    store_detection_data_328to335(m_signal_detn_328to335, m_signal_detn_328to335.flr2rdr_detn328to335scan_id328to335);
  }
}

void InitialFLRMonitorHal::Impl::UpdateDetn336to343()
{
  csp::afw::core::ErrorCode error_code = m_sig_adapter->flr2rdr_detn336to343()->get(&m_signal_detn_336to343);
  if( csp::afw::core::Status::is_failure(error_code) )
    std::cout << "Failed to read from signal database" << std::endl;
    else {
    store_detection_data_336to343(m_signal_detn_336to343, m_signal_detn_336to343.flr2rdr_detn336to343scan_id336to343);
  }
}

void InitialFLRMonitorHal::Impl::UpdateDetn344to351()
{
  csp::afw::core::ErrorCode error_code = m_sig_adapter->flr2rdr_detn344to351()->get(&m_signal_detn_344to351);
  if( csp::afw::core::Status::is_failure(error_code) )
    std::cout << "Failed to read from signal database" << std::endl;
    else {
    store_detection_data_344to351(m_signal_detn_344to351, m_signal_detn_344to351.flr2rdr_detn344to351scan_id344to351);
  }
}

void InitialFLRMonitorHal::Impl::UpdateDetn352to359()
{
  csp::afw::core::ErrorCode error_code = m_sig_adapter->flr2rdr_detn352to359()->get(&m_signal_detn_352to359);
  if( csp::afw::core::Status::is_failure(error_code) )
    std::cout << "Failed to read from signal database" << std::endl;
    else {
    store_detection_data_352to359(m_signal_detn_352to359, m_signal_detn_352to359.flr2rdr_detn352to359scan_id352to359);
  }
}

void InitialFLRMonitorHal::Impl::UpdateDetn360to367()
{
  csp::afw::core::ErrorCode error_code = m_sig_adapter->flr2rdr_detn360to367()->get(&m_signal_detn_360to367);
  if( csp::afw::core::Status::is_failure(error_code) )
    std::cout << "Failed to read from signal database" << std::endl;
    else {
    store_detection_data_360to367(m_signal_detn_360to367, m_signal_detn_360to367.flr2rdr_detn360to367scan_id360to367);
  }
}

void InitialFLRMonitorHal::Impl::UpdateDetn368to375()
{
  csp::afw::core::ErrorCode error_code = m_sig_adapter->flr2rdr_detn368to375()->get(&m_signal_detn_368to375);
  if( csp::afw::core::Status::is_failure(error_code) )
    std::cout << "Failed to read from signal database" << std::endl;
    else {
    store_detection_data_368to375(m_signal_detn_368to375, m_signal_detn_368to375.flr2rdr_detn368to375scan_id368to375);
  }
}

void InitialFLRMonitorHal::Impl::UpdateDetn376to383()
{
  csp::afw::core::ErrorCode error_code = m_sig_adapter->flr2rdr_detn376to383()->get(&m_signal_detn_376to383);
  if( csp::afw::core::Status::is_failure(error_code) )
    std::cout << "Failed to read from signal database" << std::endl;
    else {
    store_detection_data_376to383(m_signal_detn_376to383, m_signal_detn_376to383.flr2rdr_detn376to383scan_id376to383);
  }
}

void InitialFLRMonitorHal::Impl::UpdateDetn384to391()
{
  csp::afw::core::ErrorCode error_code = m_sig_adapter->flr2rdr_detn384to391()->get(&m_signal_detn_384to391);
  if( csp::afw::core::Status::is_failure(error_code) )
    std::cout << "Failed to read from signal database" << std::endl;
    else {
    store_detection_data_384to391(m_signal_detn_384to391, m_signal_detn_384to391.flr2rdr_detn384to391scan_id384to391);
  }
}

void InitialFLRMonitorHal::Impl::UpdateDetn392to399()
{
  csp::afw::core::ErrorCode error_code = m_sig_adapter->flr2rdr_detn392to399()->get(&m_signal_detn_392to399);
  if( csp::afw::core::Status::is_failure(error_code) )
    std::cout << "Failed to read from signal database" << std::endl;
    else {
    store_detection_data_392to399(m_signal_detn_392to399, m_signal_detn_392to399.flr2rdr_detn392to399scan_id392to399);
  }
}



 // store function .....


void InitialFLRMonitorHal::Impl::store_detection_data_0to7(const initialflrmonitorhal::types::FLR2RdrDetn0to7 detectionGroup, const uint8_t& scanID)
{
  if( !detectionGroup_0to7.count(scanID) )
  {
      detectionGroup_0to7.emplace(std::pair<uint8_t, initialflrmonitorhal::types::FLR2RdrDetn0to7>(scanID, detectionGroup));
      scan_id_counter[scanID]++;
  }
}



 // Get detection function  for detection ..... 0


flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection0(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_0to7[scanID].flr2rdr_detn0to7snr0;
  detection.azimuth = detectionGroup_0to7[scanID].flr2rdr_detn0to7azi0;
  detection.elevation = detectionGroup_0to7[scanID].flr2rdr_detn0to7elevn0;
  detection.range = detectionGroup_0to7[scanID].flr2rdr_detn0to7rnge0;
  detection.range_rate = detectionGroup_0to7[scanID].flr2rdr_detn0to7rng_rate0;
  detection.is_dynamic = detectionGroup_0to7[scanID].flr2rdr_detn0to7dyn_prpty0;
  detection.mode = detectionGroup_0to7[scanID].flr2rdr_detn0to7mode0;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_0to7[scanID].flr2rdr_detn0to7rng_qlty0);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_0to7[scanID].flr2rdr_detn0to7rng_rt_qlty0);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection1(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_0to7[scanID].flr2rdr_detn0to7snr1;
  detection.azimuth = detectionGroup_0to7[scanID].flr2rdr_detn0to7azi1;
  detection.elevation = detectionGroup_0to7[scanID].flr2rdr_detn0to7elevn1;
  detection.range = detectionGroup_0to7[scanID].flr2rdr_detn0to7rnge1;
  detection.range_rate = detectionGroup_0to7[scanID].flr2rdr_detn0to7rng_rate1;
  detection.is_dynamic = detectionGroup_0to7[scanID].flr2rdr_detn0to7dyn_prpty1;
  detection.mode = detectionGroup_0to7[scanID].flr2rdr_detn0to7mode1;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_0to7[scanID].flr2rdr_detn0to7rng_qlty1);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_0to7[scanID].flr2rdr_detn0to7rng_rt_qlty1);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection2(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_0to7[scanID].flr2rdr_detn0to7snr2;
  detection.azimuth = detectionGroup_0to7[scanID].flr2rdr_detn0to7azi2;
  detection.elevation = detectionGroup_0to7[scanID].flr2rdr_detn0to7elevn2;
  detection.range = detectionGroup_0to7[scanID].flr2rdr_detn0to7rnge2;
  detection.range_rate = detectionGroup_0to7[scanID].flr2rdr_detn0to7rng_rate2;
  detection.is_dynamic = detectionGroup_0to7[scanID].flr2rdr_detn0to7dyn_prpty2;
  detection.mode = detectionGroup_0to7[scanID].flr2rdr_detn0to7mode2;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_0to7[scanID].flr2rdr_detn0to7rng_qlty2);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_0to7[scanID].flr2rdr_detn0to7rng_rt_qlty2);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection3(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_0to7[scanID].flr2rdr_detn0to7snr3;
  detection.azimuth = detectionGroup_0to7[scanID].flr2rdr_detn0to7azi3;
  detection.elevation = detectionGroup_0to7[scanID].flr2rdr_detn0to7elevn3;
  detection.range = detectionGroup_0to7[scanID].flr2rdr_detn0to7rnge3;
  detection.range_rate = detectionGroup_0to7[scanID].flr2rdr_detn0to7rng_rate3;
  detection.is_dynamic = detectionGroup_0to7[scanID].flr2rdr_detn0to7dyn_prpty3;
  detection.mode = detectionGroup_0to7[scanID].flr2rdr_detn0to7mode3;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_0to7[scanID].flr2rdr_detn0to7rng_qlty3);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_0to7[scanID].flr2rdr_detn0to7rng_rt_qlty3);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection4(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_0to7[scanID].flr2rdr_detn0to7snr4;
  detection.azimuth = detectionGroup_0to7[scanID].flr2rdr_detn0to7azi4;
  detection.elevation = detectionGroup_0to7[scanID].flr2rdr_detn0to7elevn4;
  detection.range = detectionGroup_0to7[scanID].flr2rdr_detn0to7rnge4;
  detection.range_rate = detectionGroup_0to7[scanID].flr2rdr_detn0to7rng_rate4;
  detection.is_dynamic = detectionGroup_0to7[scanID].flr2rdr_detn0to7dyn_prpty4;
  detection.mode = detectionGroup_0to7[scanID].flr2rdr_detn0to7mode4;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_0to7[scanID].flr2rdr_detn0to7rng_qlty4);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_0to7[scanID].flr2rdr_detn0to7rng_rt_qlty4);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection5(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_0to7[scanID].flr2rdr_detn0to7snr5;
  detection.azimuth = detectionGroup_0to7[scanID].flr2rdr_detn0to7azi5;
  detection.elevation = detectionGroup_0to7[scanID].flr2rdr_detn0to7elevn5;
  detection.range = detectionGroup_0to7[scanID].flr2rdr_detn0to7rnge5;
  detection.range_rate = detectionGroup_0to7[scanID].flr2rdr_detn0to7rng_rate5;
  detection.is_dynamic = detectionGroup_0to7[scanID].flr2rdr_detn0to7dyn_prpty5;
  detection.mode = detectionGroup_0to7[scanID].flr2rdr_detn0to7mode5;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_0to7[scanID].flr2rdr_detn0to7rng_qlty5);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_0to7[scanID].flr2rdr_detn0to7rng_rt_qlty5);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection6(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_0to7[scanID].flr2rdr_detn0to7snr6;
  detection.azimuth = detectionGroup_0to7[scanID].flr2rdr_detn0to7azi6;
  detection.elevation = detectionGroup_0to7[scanID].flr2rdr_detn0to7elevn6;
  detection.range = detectionGroup_0to7[scanID].flr2rdr_detn0to7rnge6;
  detection.range_rate = detectionGroup_0to7[scanID].flr2rdr_detn0to7rng_rate6;
  detection.is_dynamic = detectionGroup_0to7[scanID].flr2rdr_detn0to7dyn_prpty6;
  detection.mode = detectionGroup_0to7[scanID].flr2rdr_detn0to7mode6;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_0to7[scanID].flr2rdr_detn0to7rng_qlty6);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_0to7[scanID].flr2rdr_detn0to7rng_rt_qlty6);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection7(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_0to7[scanID].flr2rdr_detn0to7snr7;
  detection.azimuth = detectionGroup_0to7[scanID].flr2rdr_detn0to7azi7;
  detection.elevation = detectionGroup_0to7[scanID].flr2rdr_detn0to7elevn7;
  detection.range = detectionGroup_0to7[scanID].flr2rdr_detn0to7rnge7;
  detection.range_rate = detectionGroup_0to7[scanID].flr2rdr_detn0to7rng_rate7;
  detection.is_dynamic = detectionGroup_0to7[scanID].flr2rdr_detn0to7dyn_prpty7;
  detection.mode = detectionGroup_0to7[scanID].flr2rdr_detn0to7mode7;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_0to7[scanID].flr2rdr_detn0to7rng_qlty7);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_0to7[scanID].flr2rdr_detn0to7rng_rt_qlty7);

  return detection;
}

void InitialFLRMonitorHal::Impl::store_detection_data_8to15(const initialflrmonitorhal::types::FLR2RdrDetn8to15 detectionGroup, const uint8_t& scanID)
{
  if( !detectionGroup_8to15.count(scanID) )
  {
      detectionGroup_8to15.emplace(std::pair<uint8_t, initialflrmonitorhal::types::FLR2RdrDetn8to15>(scanID, detectionGroup));
      scan_id_counter[scanID]++;
  }
}



 // Get detection function  for detection ..... 1


flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection8(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_8to15[scanID].flr2rdr_detn8to15snr8;
  detection.azimuth = detectionGroup_8to15[scanID].flr2rdr_detn8to15azi8;
  detection.elevation = detectionGroup_8to15[scanID].flr2rdr_detn8to15elevn8;
  detection.range = detectionGroup_8to15[scanID].flr2rdr_detn8to15rnge8;
  detection.range_rate = detectionGroup_8to15[scanID].flr2rdr_detn8to15rng_rate8;
  detection.is_dynamic = detectionGroup_8to15[scanID].flr2rdr_detn8to15dyn_prpty8;
  detection.mode = detectionGroup_8to15[scanID].flr2rdr_detn8to15mode8;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_8to15[scanID].flr2rdr_detn8to15rng_qlty8);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_8to15[scanID].flr2rdr_detn8to15rng_rt_qlty8);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection9(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_8to15[scanID].flr2rdr_detn8to15snr9;
  detection.azimuth = detectionGroup_8to15[scanID].flr2rdr_detn8to15azi9;
  detection.elevation = detectionGroup_8to15[scanID].flr2rdr_detn8to15elevn9;
  detection.range = detectionGroup_8to15[scanID].flr2rdr_detn8to15rnge9;
  detection.range_rate = detectionGroup_8to15[scanID].flr2rdr_detn8to15rng_rate9;
  detection.is_dynamic = detectionGroup_8to15[scanID].flr2rdr_detn8to15dyn_prpty9;
  detection.mode = detectionGroup_8to15[scanID].flr2rdr_detn8to15mode9;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_8to15[scanID].flr2rdr_detn8to15rng_qlty9);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_8to15[scanID].flr2rdr_detn8to15rng_rt_qlty9);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection10(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_8to15[scanID].flr2rdr_detn8to15snr10;
  detection.azimuth = detectionGroup_8to15[scanID].flr2rdr_detn8to15azi10;
  detection.elevation = detectionGroup_8to15[scanID].flr2rdr_detn8to15elevn10;
  detection.range = detectionGroup_8to15[scanID].flr2rdr_detn8to15rnge10;
  detection.range_rate = detectionGroup_8to15[scanID].flr2rdr_detn8to15rng_rate10;
  detection.is_dynamic = detectionGroup_8to15[scanID].flr2rdr_detn8to15dyn_prpty10;
  detection.mode = detectionGroup_8to15[scanID].flr2rdr_detn8to15mode10;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_8to15[scanID].flr2rdr_detn8to15rng_qlty10);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_8to15[scanID].flr2rdr_detn8to15rng_rt_qlty10);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection11(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_8to15[scanID].flr2rdr_detn8to15snr11;
  detection.azimuth = detectionGroup_8to15[scanID].flr2rdr_detn8to15azi11;
  detection.elevation = detectionGroup_8to15[scanID].flr2rdr_detn8to15elevn11;
  detection.range = detectionGroup_8to15[scanID].flr2rdr_detn8to15rnge11;
  detection.range_rate = detectionGroup_8to15[scanID].flr2rdr_detn8to15rng_rate11;
  detection.is_dynamic = detectionGroup_8to15[scanID].flr2rdr_detn8to15dyn_prpty11;
  detection.mode = detectionGroup_8to15[scanID].flr2rdr_detn8to15mode11;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_8to15[scanID].flr2rdr_detn8to15rng_qlty11);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_8to15[scanID].flr2rdr_detn8to15rng_rt_qlty11);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection12(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_8to15[scanID].flr2rdr_detn8to15snr12;
  detection.azimuth = detectionGroup_8to15[scanID].flr2rdr_detn8to15azi12;
  detection.elevation = detectionGroup_8to15[scanID].flr2rdr_detn8to15elevn12;
  detection.range = detectionGroup_8to15[scanID].flr2rdr_detn8to15rnge12;
  detection.range_rate = detectionGroup_8to15[scanID].flr2rdr_detn8to15rng_rate12;
  detection.is_dynamic = detectionGroup_8to15[scanID].flr2rdr_detn8to15dyn_prpty12;
  detection.mode = detectionGroup_8to15[scanID].flr2rdr_detn8to15mode12;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_8to15[scanID].flr2rdr_detn8to15rng_qlty12);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_8to15[scanID].flr2rdr_detn8to15rng_rt_qlty12);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection13(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_8to15[scanID].flr2rdr_detn8to15snr13;
  detection.azimuth = detectionGroup_8to15[scanID].flr2rdr_detn8to15azi13;
  detection.elevation = detectionGroup_8to15[scanID].flr2rdr_detn8to15elevn13;
  detection.range = detectionGroup_8to15[scanID].flr2rdr_detn8to15rnge13;
  detection.range_rate = detectionGroup_8to15[scanID].flr2rdr_detn8to15rng_rate13;
  detection.is_dynamic = detectionGroup_8to15[scanID].flr2rdr_detn8to15dyn_prpty13;
  detection.mode = detectionGroup_8to15[scanID].flr2rdr_detn8to15mode13;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_8to15[scanID].flr2rdr_detn8to15rng_qlty13);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_8to15[scanID].flr2rdr_detn8to15rng_rt_qlty13);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection14(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_8to15[scanID].flr2rdr_detn8to15snr14;
  detection.azimuth = detectionGroup_8to15[scanID].flr2rdr_detn8to15azi14;
  detection.elevation = detectionGroup_8to15[scanID].flr2rdr_detn8to15elevn14;
  detection.range = detectionGroup_8to15[scanID].flr2rdr_detn8to15rnge14;
  detection.range_rate = detectionGroup_8to15[scanID].flr2rdr_detn8to15rng_rate14;
  detection.is_dynamic = detectionGroup_8to15[scanID].flr2rdr_detn8to15dyn_prpty14;
  detection.mode = detectionGroup_8to15[scanID].flr2rdr_detn8to15mode14;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_8to15[scanID].flr2rdr_detn8to15rng_qlty14);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_8to15[scanID].flr2rdr_detn8to15rng_rt_qlty14);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection15(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_8to15[scanID].flr2rdr_detn8to15snr15;
  detection.azimuth = detectionGroup_8to15[scanID].flr2rdr_detn8to15azi15;
  detection.elevation = detectionGroup_8to15[scanID].flr2rdr_detn8to15elevn15;
  detection.range = detectionGroup_8to15[scanID].flr2rdr_detn8to15rnge15;
  detection.range_rate = detectionGroup_8to15[scanID].flr2rdr_detn8to15rng_rate15;
  detection.is_dynamic = detectionGroup_8to15[scanID].flr2rdr_detn8to15dyn_prpty15;
  detection.mode = detectionGroup_8to15[scanID].flr2rdr_detn8to15mode15;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_8to15[scanID].flr2rdr_detn8to15rng_qlty15);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_8to15[scanID].flr2rdr_detn8to15rng_rt_qlty15);

  return detection;
}

void InitialFLRMonitorHal::Impl::store_detection_data_16to23(const initialflrmonitorhal::types::FLR2RdrDetn16to23 detectionGroup, const uint8_t& scanID)
{
  if( !detectionGroup_16to23.count(scanID) )
  {
      detectionGroup_16to23.emplace(std::pair<uint8_t, initialflrmonitorhal::types::FLR2RdrDetn16to23>(scanID, detectionGroup));
      scan_id_counter[scanID]++;
  }
}



 // Get detection function  for detection ..... 2


flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection16(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_16to23[scanID].flr2rdr_detn16to23snr16;
  detection.azimuth = detectionGroup_16to23[scanID].flr2rdr_detn16to23azi16;
  detection.elevation = detectionGroup_16to23[scanID].flr2rdr_detn16to23elevn16;
  detection.range = detectionGroup_16to23[scanID].flr2rdr_detn16to23rnge16;
  detection.range_rate = detectionGroup_16to23[scanID].flr2rdr_detn16to23rng_rate16;
  detection.is_dynamic = detectionGroup_16to23[scanID].flr2rdr_detn16to23dyn_prpty16;
  detection.mode = detectionGroup_16to23[scanID].flr2rdr_detn16to23mode16;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_16to23[scanID].flr2rdr_detn16to23rng_qlty16);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_16to23[scanID].flr2rdr_detn16to23rng_rt_qlty16);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection17(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_16to23[scanID].flr2rdr_detn16to23snr17;
  detection.azimuth = detectionGroup_16to23[scanID].flr2rdr_detn16to23azi17;
  detection.elevation = detectionGroup_16to23[scanID].flr2rdr_detn16to23elevn17;
  detection.range = detectionGroup_16to23[scanID].flr2rdr_detn16to23rnge17;
  detection.range_rate = detectionGroup_16to23[scanID].flr2rdr_detn16to23rng_rate17;
  detection.is_dynamic = detectionGroup_16to23[scanID].flr2rdr_detn16to23dyn_prpty17;
  detection.mode = detectionGroup_16to23[scanID].flr2rdr_detn16to23mode17;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_16to23[scanID].flr2rdr_detn16to23rng_qlty17);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_16to23[scanID].flr2rdr_detn16to23rng_rt_qlty17);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection18(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_16to23[scanID].flr2rdr_detn16to23snr18;
  detection.azimuth = detectionGroup_16to23[scanID].flr2rdr_detn16to23azi18;
  detection.elevation = detectionGroup_16to23[scanID].flr2rdr_detn16to23elevn18;
  detection.range = detectionGroup_16to23[scanID].flr2rdr_detn16to23rnge18;
  detection.range_rate = detectionGroup_16to23[scanID].flr2rdr_detn16to23rng_rate18;
  detection.is_dynamic = detectionGroup_16to23[scanID].flr2rdr_detn16to23dyn_prpty18;
  detection.mode = detectionGroup_16to23[scanID].flr2rdr_detn16to23mode18;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_16to23[scanID].flr2rdr_detn16to23rng_qlty18);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_16to23[scanID].flr2rdr_detn16to23rng_rt_qlty18);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection19(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_16to23[scanID].flr2rdr_detn16to23snr19;
  detection.azimuth = detectionGroup_16to23[scanID].flr2rdr_detn16to23azi19;
  detection.elevation = detectionGroup_16to23[scanID].flr2rdr_detn16to23elevn19;
  detection.range = detectionGroup_16to23[scanID].flr2rdr_detn16to23rnge19;
  detection.range_rate = detectionGroup_16to23[scanID].flr2rdr_detn16to23rng_rate19;
  detection.is_dynamic = detectionGroup_16to23[scanID].flr2rdr_detn16to23dyn_prpty19;
  detection.mode = detectionGroup_16to23[scanID].flr2rdr_detn16to23mode19;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_16to23[scanID].flr2rdr_detn16to23rng_qlty19);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_16to23[scanID].flr2rdr_detn16to23rng_rt_qlty19);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection20(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_16to23[scanID].flr2rdr_detn16to23snr20;
  detection.azimuth = detectionGroup_16to23[scanID].flr2rdr_detn16to23azi20;
  detection.elevation = detectionGroup_16to23[scanID].flr2rdr_detn16to23elevn20;
  detection.range = detectionGroup_16to23[scanID].flr2rdr_detn16to23rnge20;
  detection.range_rate = detectionGroup_16to23[scanID].flr2rdr_detn16to23rng_rate20;
  detection.is_dynamic = detectionGroup_16to23[scanID].flr2rdr_detn16to23dyn_prpty20;
  detection.mode = detectionGroup_16to23[scanID].flr2rdr_detn16to23mode20;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_16to23[scanID].flr2rdr_detn16to23rng_qlty20);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_16to23[scanID].flr2rdr_detn16to23rng_rt_qlty20);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection21(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_16to23[scanID].flr2rdr_detn16to23snr21;
  detection.azimuth = detectionGroup_16to23[scanID].flr2rdr_detn16to23azi21;
  detection.elevation = detectionGroup_16to23[scanID].flr2rdr_detn16to23elevn21;
  detection.range = detectionGroup_16to23[scanID].flr2rdr_detn16to23rnge21;
  detection.range_rate = detectionGroup_16to23[scanID].flr2rdr_detn16to23rng_rate21;
  detection.is_dynamic = detectionGroup_16to23[scanID].flr2rdr_detn16to23dyn_prpty21;
  detection.mode = detectionGroup_16to23[scanID].flr2rdr_detn16to23mode21;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_16to23[scanID].flr2rdr_detn16to23rng_qlty21);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_16to23[scanID].flr2rdr_detn16to23rng_rt_qlty21);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection22(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_16to23[scanID].flr2rdr_detn16to23snr22;
  detection.azimuth = detectionGroup_16to23[scanID].flr2rdr_detn16to23azi22;
  detection.elevation = detectionGroup_16to23[scanID].flr2rdr_detn16to23elevn22;
  detection.range = detectionGroup_16to23[scanID].flr2rdr_detn16to23rnge22;
  detection.range_rate = detectionGroup_16to23[scanID].flr2rdr_detn16to23rng_rate22;
  detection.is_dynamic = detectionGroup_16to23[scanID].flr2rdr_detn16to23dyn_prpty22;
  detection.mode = detectionGroup_16to23[scanID].flr2rdr_detn16to23mode22;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_16to23[scanID].flr2rdr_detn16to23rng_qlty22);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_16to23[scanID].flr2rdr_detn16to23rng_rt_qlty22);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection23(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_16to23[scanID].flr2rdr_detn16to23snr23;
  detection.azimuth = detectionGroup_16to23[scanID].flr2rdr_detn16to23azi23;
  detection.elevation = detectionGroup_16to23[scanID].flr2rdr_detn16to23elevn23;
  detection.range = detectionGroup_16to23[scanID].flr2rdr_detn16to23rnge23;
  detection.range_rate = detectionGroup_16to23[scanID].flr2rdr_detn16to23rng_rate23;
  detection.is_dynamic = detectionGroup_16to23[scanID].flr2rdr_detn16to23dyn_prpty23;
  detection.mode = detectionGroup_16to23[scanID].flr2rdr_detn16to23mode23;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_16to23[scanID].flr2rdr_detn16to23rng_qlty23);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_16to23[scanID].flr2rdr_detn16to23rng_rt_qlty23);

  return detection;
}

void InitialFLRMonitorHal::Impl::store_detection_data_24to31(const initialflrmonitorhal::types::FLR2RdrDetn24to31 detectionGroup, const uint8_t& scanID)
{
  if( !detectionGroup_24to31.count(scanID) )
  {
      detectionGroup_24to31.emplace(std::pair<uint8_t, initialflrmonitorhal::types::FLR2RdrDetn24to31>(scanID, detectionGroup));
      scan_id_counter[scanID]++;
  }
}



 // Get detection function  for detection ..... 3


flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection24(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_24to31[scanID].flr2rdr_detn24to31snr24;
  detection.azimuth = detectionGroup_24to31[scanID].flr2rdr_detn24to31azi24;
  detection.elevation = detectionGroup_24to31[scanID].flr2rdr_detn24to31elevn24;
  detection.range = detectionGroup_24to31[scanID].flr2rdr_detn24to31rnge24;
  detection.range_rate = detectionGroup_24to31[scanID].flr2rdr_detn24to31rng_rate24;
  detection.is_dynamic = detectionGroup_24to31[scanID].flr2rdr_detn24to31dyn_prpty24;
  detection.mode = detectionGroup_24to31[scanID].flr2rdr_detn24to31mode24;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_24to31[scanID].flr2rdr_detn24to31rng_qlty24);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_24to31[scanID].flr2rdr_detn24to31rng_rt_qlty24);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection25(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_24to31[scanID].flr2rdr_detn24to31snr25;
  detection.azimuth = detectionGroup_24to31[scanID].flr2rdr_detn24to31azi25;
  detection.elevation = detectionGroup_24to31[scanID].flr2rdr_detn24to31elevn25;
  detection.range = detectionGroup_24to31[scanID].flr2rdr_detn24to31rnge25;
  detection.range_rate = detectionGroup_24to31[scanID].flr2rdr_detn24to31rng_rate25;
  detection.is_dynamic = detectionGroup_24to31[scanID].flr2rdr_detn24to31dyn_prpty25;
  detection.mode = detectionGroup_24to31[scanID].flr2rdr_detn24to31mode25;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_24to31[scanID].flr2rdr_detn24to31rng_qlty25);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_24to31[scanID].flr2rdr_detn24to31rng_rt_qlty25);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection26(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_24to31[scanID].flr2rdr_detn24to31snr26;
  detection.azimuth = detectionGroup_24to31[scanID].flr2rdr_detn24to31azi26;
  detection.elevation = detectionGroup_24to31[scanID].flr2rdr_detn24to31elevn26;
  detection.range = detectionGroup_24to31[scanID].flr2rdr_detn24to31rnge26;
  detection.range_rate = detectionGroup_24to31[scanID].flr2rdr_detn24to31rng_rate26;
  detection.is_dynamic = detectionGroup_24to31[scanID].flr2rdr_detn24to31dyn_prpty26;
  detection.mode = detectionGroup_24to31[scanID].flr2rdr_detn24to31mode26;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_24to31[scanID].flr2rdr_detn24to31rng_qlty26);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_24to31[scanID].flr2rdr_detn24to31rng_rt_qlty26);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection27(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_24to31[scanID].flr2rdr_detn24to31snr27;
  detection.azimuth = detectionGroup_24to31[scanID].flr2rdr_detn24to31azi27;
  detection.elevation = detectionGroup_24to31[scanID].flr2rdr_detn24to31elevn27;
  detection.range = detectionGroup_24to31[scanID].flr2rdr_detn24to31rnge27;
  detection.range_rate = detectionGroup_24to31[scanID].flr2rdr_detn24to31rng_rate27;
  detection.is_dynamic = detectionGroup_24to31[scanID].flr2rdr_detn24to31dyn_prpty27;
  detection.mode = detectionGroup_24to31[scanID].flr2rdr_detn24to31mode27;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_24to31[scanID].flr2rdr_detn24to31rng_qlty27);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_24to31[scanID].flr2rdr_detn24to31rng_rt_qlty27);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection28(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_24to31[scanID].flr2rdr_detn24to31snr28;
  detection.azimuth = detectionGroup_24to31[scanID].flr2rdr_detn24to31azi28;
  detection.elevation = detectionGroup_24to31[scanID].flr2rdr_detn24to31elevn28;
  detection.range = detectionGroup_24to31[scanID].flr2rdr_detn24to31rnge28;
  detection.range_rate = detectionGroup_24to31[scanID].flr2rdr_detn24to31rng_rate28;
  detection.is_dynamic = detectionGroup_24to31[scanID].flr2rdr_detn24to31dyn_prpty28;
  detection.mode = detectionGroup_24to31[scanID].flr2rdr_detn24to31mode28;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_24to31[scanID].flr2rdr_detn24to31rng_qlty28);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_24to31[scanID].flr2rdr_detn24to31rng_rt_qlty28);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection29(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_24to31[scanID].flr2rdr_detn24to31snr29;
  detection.azimuth = detectionGroup_24to31[scanID].flr2rdr_detn24to31azi29;
  detection.elevation = detectionGroup_24to31[scanID].flr2rdr_detn24to31elevn29;
  detection.range = detectionGroup_24to31[scanID].flr2rdr_detn24to31rnge29;
  detection.range_rate = detectionGroup_24to31[scanID].flr2rdr_detn24to31rng_rate29;
  detection.is_dynamic = detectionGroup_24to31[scanID].flr2rdr_detn24to31dyn_prpty29;
  detection.mode = detectionGroup_24to31[scanID].flr2rdr_detn24to31mode29;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_24to31[scanID].flr2rdr_detn24to31rng_qlty29);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_24to31[scanID].flr2rdr_detn24to31rng_rt_qlty29);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection30(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_24to31[scanID].flr2rdr_detn24to31snr30;
  detection.azimuth = detectionGroup_24to31[scanID].flr2rdr_detn24to31azi30;
  detection.elevation = detectionGroup_24to31[scanID].flr2rdr_detn24to31elevn30;
  detection.range = detectionGroup_24to31[scanID].flr2rdr_detn24to31rnge30;
  detection.range_rate = detectionGroup_24to31[scanID].flr2rdr_detn24to31rng_rate30;
  detection.is_dynamic = detectionGroup_24to31[scanID].flr2rdr_detn24to31dyn_prpty30;
  detection.mode = detectionGroup_24to31[scanID].flr2rdr_detn24to31mode30;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_24to31[scanID].flr2rdr_detn24to31rng_qlty30);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_24to31[scanID].flr2rdr_detn24to31rng_rt_qlty30);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection31(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_24to31[scanID].flr2rdr_detn24to31snr31;
  detection.azimuth = detectionGroup_24to31[scanID].flr2rdr_detn24to31azi31;
  detection.elevation = detectionGroup_24to31[scanID].flr2rdr_detn24to31elevn31;
  detection.range = detectionGroup_24to31[scanID].flr2rdr_detn24to31rnge31;
  detection.range_rate = detectionGroup_24to31[scanID].flr2rdr_detn24to31rng_rate31;
  detection.is_dynamic = detectionGroup_24to31[scanID].flr2rdr_detn24to31dyn_prpty31;
  detection.mode = detectionGroup_24to31[scanID].flr2rdr_detn24to31mode31;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_24to31[scanID].flr2rdr_detn24to31rng_qlty31);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_24to31[scanID].flr2rdr_detn24to31rng_rt_qlty31);

  return detection;
}

void InitialFLRMonitorHal::Impl::store_detection_data_32to39(const initialflrmonitorhal::types::FLR2RdrDetn32to39 detectionGroup, const uint8_t& scanID)
{
  if( !detectionGroup_32to39.count(scanID) )
  {
      detectionGroup_32to39.emplace(std::pair<uint8_t, initialflrmonitorhal::types::FLR2RdrDetn32to39>(scanID, detectionGroup));
      scan_id_counter[scanID]++;
  }
}



 // Get detection function  for detection ..... 4


flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection32(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_32to39[scanID].flr2rdr_detn32to39snr32;
  detection.azimuth = detectionGroup_32to39[scanID].flr2rdr_detn32to39azi32;
  detection.elevation = detectionGroup_32to39[scanID].flr2rdr_detn32to39elevn32;
  detection.range = detectionGroup_32to39[scanID].flr2rdr_detn32to39rnge32;
  detection.range_rate = detectionGroup_32to39[scanID].flr2rdr_detn32to39rng_rate32;
  detection.is_dynamic = detectionGroup_32to39[scanID].flr2rdr_detn32to39dyn_prpty32;
  detection.mode = detectionGroup_32to39[scanID].flr2rdr_detn32to39mode32;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_32to39[scanID].flr2rdr_detn32to39rng_qlty32);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_32to39[scanID].flr2rdr_detn32to39rng_rt_qlty32);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection33(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_32to39[scanID].flr2rdr_detn32to39snr33;
  detection.azimuth = detectionGroup_32to39[scanID].flr2rdr_detn32to39azi33;
  detection.elevation = detectionGroup_32to39[scanID].flr2rdr_detn32to39elevn33;
  detection.range = detectionGroup_32to39[scanID].flr2rdr_detn32to39rnge33;
  detection.range_rate = detectionGroup_32to39[scanID].flr2rdr_detn32to39rng_rate33;
  detection.is_dynamic = detectionGroup_32to39[scanID].flr2rdr_detn32to39dyn_prpty33;
  detection.mode = detectionGroup_32to39[scanID].flr2rdr_detn32to39mode33;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_32to39[scanID].flr2rdr_detn32to39rng_qlty33);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_32to39[scanID].flr2rdr_detn32to39rng_rt_qlty33);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection34(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_32to39[scanID].flr2rdr_detn32to39snr34;
  detection.azimuth = detectionGroup_32to39[scanID].flr2rdr_detn32to39azi34;
  detection.elevation = detectionGroup_32to39[scanID].flr2rdr_detn32to39elevn34;
  detection.range = detectionGroup_32to39[scanID].flr2rdr_detn32to39rnge34;
  detection.range_rate = detectionGroup_32to39[scanID].flr2rdr_detn32to39rng_rate34;
  detection.is_dynamic = detectionGroup_32to39[scanID].flr2rdr_detn32to39dyn_prpty34;
  detection.mode = detectionGroup_32to39[scanID].flr2rdr_detn32to39mode34;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_32to39[scanID].flr2rdr_detn32to39rng_qlty34);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_32to39[scanID].flr2rdr_detn32to39rng_rt_qlty34);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection35(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_32to39[scanID].flr2rdr_detn32to39snr35;
  detection.azimuth = detectionGroup_32to39[scanID].flr2rdr_detn32to39azi35;
  detection.elevation = detectionGroup_32to39[scanID].flr2rdr_detn32to39elevn35;
  detection.range = detectionGroup_32to39[scanID].flr2rdr_detn32to39rnge35;
  detection.range_rate = detectionGroup_32to39[scanID].flr2rdr_detn32to39rng_rate35;
  detection.is_dynamic = detectionGroup_32to39[scanID].flr2rdr_detn32to39dyn_prpty35;
  detection.mode = detectionGroup_32to39[scanID].flr2rdr_detn32to39mode35;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_32to39[scanID].flr2rdr_detn32to39rng_qlty35);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_32to39[scanID].flr2rdr_detn32to39rng_rt_qlty35);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection36(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_32to39[scanID].flr2rdr_detn32to39snr36;
  detection.azimuth = detectionGroup_32to39[scanID].flr2rdr_detn32to39azi36;
  detection.elevation = detectionGroup_32to39[scanID].flr2rdr_detn32to39elevn36;
  detection.range = detectionGroup_32to39[scanID].flr2rdr_detn32to39rnge36;
  detection.range_rate = detectionGroup_32to39[scanID].flr2rdr_detn32to39rng_rate36;
  detection.is_dynamic = detectionGroup_32to39[scanID].flr2rdr_detn32to39dyn_prpty36;
  detection.mode = detectionGroup_32to39[scanID].flr2rdr_detn32to39mode36;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_32to39[scanID].flr2rdr_detn32to39rng_qlty36);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_32to39[scanID].flr2rdr_detn32to39rng_rt_qlty36);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection37(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_32to39[scanID].flr2rdr_detn32to39snr37;
  detection.azimuth = detectionGroup_32to39[scanID].flr2rdr_detn32to39azi37;
  detection.elevation = detectionGroup_32to39[scanID].flr2rdr_detn32to39elevn37;
  detection.range = detectionGroup_32to39[scanID].flr2rdr_detn32to39rnge37;
  detection.range_rate = detectionGroup_32to39[scanID].flr2rdr_detn32to39rng_rate37;
  detection.is_dynamic = detectionGroup_32to39[scanID].flr2rdr_detn32to39dyn_prpty37;
  detection.mode = detectionGroup_32to39[scanID].flr2rdr_detn32to39mode37;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_32to39[scanID].flr2rdr_detn32to39rng_qlty37);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_32to39[scanID].flr2rdr_detn32to39rng_rt_qlty37);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection38(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_32to39[scanID].flr2rdr_detn32to39snr38;
  detection.azimuth = detectionGroup_32to39[scanID].flr2rdr_detn32to39azi38;
  detection.elevation = detectionGroup_32to39[scanID].flr2rdr_detn32to39elevn38;
  detection.range = detectionGroup_32to39[scanID].flr2rdr_detn32to39rnge38;
  detection.range_rate = detectionGroup_32to39[scanID].flr2rdr_detn32to39rng_rate38;
  detection.is_dynamic = detectionGroup_32to39[scanID].flr2rdr_detn32to39dyn_prpty38;
  detection.mode = detectionGroup_32to39[scanID].flr2rdr_detn32to39mode38;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_32to39[scanID].flr2rdr_detn32to39rng_qlty38);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_32to39[scanID].flr2rdr_detn32to39rng_rt_qlty38);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection39(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_32to39[scanID].flr2rdr_detn32to39snr39;
  detection.azimuth = detectionGroup_32to39[scanID].flr2rdr_detn32to39azi39;
  detection.elevation = detectionGroup_32to39[scanID].flr2rdr_detn32to39elevn39;
  detection.range = detectionGroup_32to39[scanID].flr2rdr_detn32to39rnge39;
  detection.range_rate = detectionGroup_32to39[scanID].flr2rdr_detn32to39rng_rate39;
  detection.is_dynamic = detectionGroup_32to39[scanID].flr2rdr_detn32to39dyn_prpty39;
  detection.mode = detectionGroup_32to39[scanID].flr2rdr_detn32to39mode39;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_32to39[scanID].flr2rdr_detn32to39rng_qlty39);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_32to39[scanID].flr2rdr_detn32to39rng_rt_qlty39);

  return detection;
}

void InitialFLRMonitorHal::Impl::store_detection_data_40to47(const initialflrmonitorhal::types::FLR2RdrDetn40to47 detectionGroup, const uint8_t& scanID)
{
  if( !detectionGroup_40to47.count(scanID) )
  {
      detectionGroup_40to47.emplace(std::pair<uint8_t, initialflrmonitorhal::types::FLR2RdrDetn40to47>(scanID, detectionGroup));
      scan_id_counter[scanID]++;
  }
}



 // Get detection function  for detection ..... 5


flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection40(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_40to47[scanID].flr2rdr_detn40to47snr40;
  detection.azimuth = detectionGroup_40to47[scanID].flr2rdr_detn40to47azi40;
  detection.elevation = detectionGroup_40to47[scanID].flr2rdr_detn40to47elevn40;
  detection.range = detectionGroup_40to47[scanID].flr2rdr_detn40to47rnge40;
  detection.range_rate = detectionGroup_40to47[scanID].flr2rdr_detn40to47rng_rate40;
  detection.is_dynamic = detectionGroup_40to47[scanID].flr2rdr_detn40to47dyn_prpty40;
  detection.mode = detectionGroup_40to47[scanID].flr2rdr_detn40to47mode40;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_40to47[scanID].flr2rdr_detn40to47rng_qlty40);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_40to47[scanID].flr2rdr_detn40to47rng_rt_qlty40);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection41(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_40to47[scanID].flr2rdr_detn40to47snr41;
  detection.azimuth = detectionGroup_40to47[scanID].flr2rdr_detn40to47azi41;
  detection.elevation = detectionGroup_40to47[scanID].flr2rdr_detn40to47elevn41;
  detection.range = detectionGroup_40to47[scanID].flr2rdr_detn40to47rnge41;
  detection.range_rate = detectionGroup_40to47[scanID].flr2rdr_detn40to47rng_rate41;
  detection.is_dynamic = detectionGroup_40to47[scanID].flr2rdr_detn40to47dyn_prpty41;
  detection.mode = detectionGroup_40to47[scanID].flr2rdr_detn40to47mode41;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_40to47[scanID].flr2rdr_detn40to47rng_qlty41);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_40to47[scanID].flr2rdr_detn40to47rng_rt_qlty41);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection42(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_40to47[scanID].flr2rdr_detn40to47snr42;
  detection.azimuth = detectionGroup_40to47[scanID].flr2rdr_detn40to47azi42;
  detection.elevation = detectionGroup_40to47[scanID].flr2rdr_detn40to47elevn42;
  detection.range = detectionGroup_40to47[scanID].flr2rdr_detn40to47rnge42;
  detection.range_rate = detectionGroup_40to47[scanID].flr2rdr_detn40to47rng_rate42;
  detection.is_dynamic = detectionGroup_40to47[scanID].flr2rdr_detn40to47dyn_prpty42;
  detection.mode = detectionGroup_40to47[scanID].flr2rdr_detn40to47mode42;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_40to47[scanID].flr2rdr_detn40to47rng_qlty42);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_40to47[scanID].flr2rdr_detn40to47rng_rt_qlty42);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection43(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_40to47[scanID].flr2rdr_detn40to47snr43;
  detection.azimuth = detectionGroup_40to47[scanID].flr2rdr_detn40to47azi43;
  detection.elevation = detectionGroup_40to47[scanID].flr2rdr_detn40to47elevn43;
  detection.range = detectionGroup_40to47[scanID].flr2rdr_detn40to47rnge43;
  detection.range_rate = detectionGroup_40to47[scanID].flr2rdr_detn40to47rng_rate43;
  detection.is_dynamic = detectionGroup_40to47[scanID].flr2rdr_detn40to47dyn_prpty43;
  detection.mode = detectionGroup_40to47[scanID].flr2rdr_detn40to47mode43;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_40to47[scanID].flr2rdr_detn40to47rng_qlty43);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_40to47[scanID].flr2rdr_detn40to47rng_rt_qlty43);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection44(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_40to47[scanID].flr2rdr_detn40to47snr44;
  detection.azimuth = detectionGroup_40to47[scanID].flr2rdr_detn40to47azi44;
  detection.elevation = detectionGroup_40to47[scanID].flr2rdr_detn40to47elevn44;
  detection.range = detectionGroup_40to47[scanID].flr2rdr_detn40to47rnge44;
  detection.range_rate = detectionGroup_40to47[scanID].flr2rdr_detn40to47rng_rate44;
  detection.is_dynamic = detectionGroup_40to47[scanID].flr2rdr_detn40to47dyn_prpty44;
  detection.mode = detectionGroup_40to47[scanID].flr2rdr_detn40to47mode44;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_40to47[scanID].flr2rdr_detn40to47rng_qlty44);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_40to47[scanID].flr2rdr_detn40to47rng_rt_qlty44);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection45(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_40to47[scanID].flr2rdr_detn40to47snr45;
  detection.azimuth = detectionGroup_40to47[scanID].flr2rdr_detn40to47azi45;
  detection.elevation = detectionGroup_40to47[scanID].flr2rdr_detn40to47elevn45;
  detection.range = detectionGroup_40to47[scanID].flr2rdr_detn40to47rnge45;
  detection.range_rate = detectionGroup_40to47[scanID].flr2rdr_detn40to47rng_rate45;
  detection.is_dynamic = detectionGroup_40to47[scanID].flr2rdr_detn40to47dyn_prpty45;
  detection.mode = detectionGroup_40to47[scanID].flr2rdr_detn40to47mode45;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_40to47[scanID].flr2rdr_detn40to47rng_qlty45);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_40to47[scanID].flr2rdr_detn40to47rng_rt_qlty45);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection46(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_40to47[scanID].flr2rdr_detn40to47snr46;
  detection.azimuth = detectionGroup_40to47[scanID].flr2rdr_detn40to47azi46;
  detection.elevation = detectionGroup_40to47[scanID].flr2rdr_detn40to47elevn46;
  detection.range = detectionGroup_40to47[scanID].flr2rdr_detn40to47rnge46;
  detection.range_rate = detectionGroup_40to47[scanID].flr2rdr_detn40to47rng_rate46;
  detection.is_dynamic = detectionGroup_40to47[scanID].flr2rdr_detn40to47dyn_prpty46;
  detection.mode = detectionGroup_40to47[scanID].flr2rdr_detn40to47mode46;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_40to47[scanID].flr2rdr_detn40to47rng_qlty46);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_40to47[scanID].flr2rdr_detn40to47rng_rt_qlty46);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection47(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_40to47[scanID].flr2rdr_detn40to47snr47;
  detection.azimuth = detectionGroup_40to47[scanID].flr2rdr_detn40to47azi47;
  detection.elevation = detectionGroup_40to47[scanID].flr2rdr_detn40to47elevn47;
  detection.range = detectionGroup_40to47[scanID].flr2rdr_detn40to47rnge47;
  detection.range_rate = detectionGroup_40to47[scanID].flr2rdr_detn40to47rng_rate47;
  detection.is_dynamic = detectionGroup_40to47[scanID].flr2rdr_detn40to47dyn_prpty47;
  detection.mode = detectionGroup_40to47[scanID].flr2rdr_detn40to47mode47;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_40to47[scanID].flr2rdr_detn40to47rng_qlty47);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_40to47[scanID].flr2rdr_detn40to47rng_rt_qlty47);

  return detection;
}

void InitialFLRMonitorHal::Impl::store_detection_data_48to55(const initialflrmonitorhal::types::FLR2RdrDetn48to55 detectionGroup, const uint8_t& scanID)
{
  if( !detectionGroup_48to55.count(scanID) )
  {
      detectionGroup_48to55.emplace(std::pair<uint8_t, initialflrmonitorhal::types::FLR2RdrDetn48to55>(scanID, detectionGroup));
      scan_id_counter[scanID]++;
  }
}



 // Get detection function  for detection ..... 6


flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection48(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_48to55[scanID].flr2rdr_detn48to55snr48;
  detection.azimuth = detectionGroup_48to55[scanID].flr2rdr_detn48to55azi48;
  detection.elevation = detectionGroup_48to55[scanID].flr2rdr_detn48to55elevn48;
  detection.range = detectionGroup_48to55[scanID].flr2rdr_detn48to55rnge48;
  detection.range_rate = detectionGroup_48to55[scanID].flr2rdr_detn48to55rng_rate48;
  detection.is_dynamic = detectionGroup_48to55[scanID].flr2rdr_detn48to55dyn_prpty48;
  detection.mode = detectionGroup_48to55[scanID].flr2rdr_detn48to55mode48;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_48to55[scanID].flr2rdr_detn48to55rng_qlty48);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_48to55[scanID].flr2rdr_detn48to55rng_rt_qlty48);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection49(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_48to55[scanID].flr2rdr_detn48to55snr49;
  detection.azimuth = detectionGroup_48to55[scanID].flr2rdr_detn48to55azi49;
  detection.elevation = detectionGroup_48to55[scanID].flr2rdr_detn48to55elevn49;
  detection.range = detectionGroup_48to55[scanID].flr2rdr_detn48to55rnge49;
  detection.range_rate = detectionGroup_48to55[scanID].flr2rdr_detn48to55rng_rate49;
  detection.is_dynamic = detectionGroup_48to55[scanID].flr2rdr_detn48to55dyn_prpty49;
  detection.mode = detectionGroup_48to55[scanID].flr2rdr_detn48to55mode49;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_48to55[scanID].flr2rdr_detn48to55rng_qlty49);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_48to55[scanID].flr2rdr_detn48to55rng_rt_qlty49);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection50(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_48to55[scanID].flr2rdr_detn48to55snr50;
  detection.azimuth = detectionGroup_48to55[scanID].flr2rdr_detn48to55azi50;
  detection.elevation = detectionGroup_48to55[scanID].flr2rdr_detn48to55elevn50;
  detection.range = detectionGroup_48to55[scanID].flr2rdr_detn48to55rnge50;
  detection.range_rate = detectionGroup_48to55[scanID].flr2rdr_detn48to55rng_rate50;
  detection.is_dynamic = detectionGroup_48to55[scanID].flr2rdr_detn48to55dyn_prpty50;
  detection.mode = detectionGroup_48to55[scanID].flr2rdr_detn48to55mode50;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_48to55[scanID].flr2rdr_detn48to55rng_qlty50);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_48to55[scanID].flr2rdr_detn48to55rng_rt_qlty50);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection51(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_48to55[scanID].flr2rdr_detn48to55snr51;
  detection.azimuth = detectionGroup_48to55[scanID].flr2rdr_detn48to55azi51;
  detection.elevation = detectionGroup_48to55[scanID].flr2rdr_detn48to55elevn51;
  detection.range = detectionGroup_48to55[scanID].flr2rdr_detn48to55rnge51;
  detection.range_rate = detectionGroup_48to55[scanID].flr2rdr_detn48to55rng_rate51;
  detection.is_dynamic = detectionGroup_48to55[scanID].flr2rdr_detn48to55dyn_prpty51;
  detection.mode = detectionGroup_48to55[scanID].flr2rdr_detn48to55mode51;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_48to55[scanID].flr2rdr_detn48to55rng_qlty51);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_48to55[scanID].flr2rdr_detn48to55rng_rt_qlty51);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection52(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_48to55[scanID].flr2rdr_detn48to55snr52;
  detection.azimuth = detectionGroup_48to55[scanID].flr2rdr_detn48to55azi52;
  detection.elevation = detectionGroup_48to55[scanID].flr2rdr_detn48to55elevn52;
  detection.range = detectionGroup_48to55[scanID].flr2rdr_detn48to55rnge52;
  detection.range_rate = detectionGroup_48to55[scanID].flr2rdr_detn48to55rng_rate52;
  detection.is_dynamic = detectionGroup_48to55[scanID].flr2rdr_detn48to55dyn_prpty52;
  detection.mode = detectionGroup_48to55[scanID].flr2rdr_detn48to55mode52;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_48to55[scanID].flr2rdr_detn48to55rng_qlty52);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_48to55[scanID].flr2rdr_detn48to55rng_rt_qlty52);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection53(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_48to55[scanID].flr2rdr_detn48to55snr53;
  detection.azimuth = detectionGroup_48to55[scanID].flr2rdr_detn48to55azi53;
  detection.elevation = detectionGroup_48to55[scanID].flr2rdr_detn48to55elevn53;
  detection.range = detectionGroup_48to55[scanID].flr2rdr_detn48to55rnge53;
  detection.range_rate = detectionGroup_48to55[scanID].flr2rdr_detn48to55rng_rate53;
  detection.is_dynamic = detectionGroup_48to55[scanID].flr2rdr_detn48to55dyn_prpty53;
  detection.mode = detectionGroup_48to55[scanID].flr2rdr_detn48to55mode53;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_48to55[scanID].flr2rdr_detn48to55rng_qlty53);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_48to55[scanID].flr2rdr_detn48to55rng_rt_qlty53);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection54(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_48to55[scanID].flr2rdr_detn48to55snr54;
  detection.azimuth = detectionGroup_48to55[scanID].flr2rdr_detn48to55azi54;
  detection.elevation = detectionGroup_48to55[scanID].flr2rdr_detn48to55elevn54;
  detection.range = detectionGroup_48to55[scanID].flr2rdr_detn48to55rnge54;
  detection.range_rate = detectionGroup_48to55[scanID].flr2rdr_detn48to55rng_rate54;
  detection.is_dynamic = detectionGroup_48to55[scanID].flr2rdr_detn48to55dyn_prpty54;
  detection.mode = detectionGroup_48to55[scanID].flr2rdr_detn48to55mode54;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_48to55[scanID].flr2rdr_detn48to55rng_qlty54);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_48to55[scanID].flr2rdr_detn48to55rng_rt_qlty54);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection55(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_48to55[scanID].flr2rdr_detn48to55snr55;
  detection.azimuth = detectionGroup_48to55[scanID].flr2rdr_detn48to55azi55;
  detection.elevation = detectionGroup_48to55[scanID].flr2rdr_detn48to55elevn55;
  detection.range = detectionGroup_48to55[scanID].flr2rdr_detn48to55rnge55;
  detection.range_rate = detectionGroup_48to55[scanID].flr2rdr_detn48to55rng_rate55;
  detection.is_dynamic = detectionGroup_48to55[scanID].flr2rdr_detn48to55dyn_prpty55;
  detection.mode = detectionGroup_48to55[scanID].flr2rdr_detn48to55mode55;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_48to55[scanID].flr2rdr_detn48to55rng_qlty55);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_48to55[scanID].flr2rdr_detn48to55rng_rt_qlty55);

  return detection;
}

void InitialFLRMonitorHal::Impl::store_detection_data_56to63(const initialflrmonitorhal::types::FLR2RdrDetn56to63 detectionGroup, const uint8_t& scanID)
{
  if( !detectionGroup_56to63.count(scanID) )
  {
      detectionGroup_56to63.emplace(std::pair<uint8_t, initialflrmonitorhal::types::FLR2RdrDetn56to63>(scanID, detectionGroup));
      scan_id_counter[scanID]++;
  }
}



 // Get detection function  for detection ..... 7


flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection56(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_56to63[scanID].flr2rdr_detn56to63snr56;
  detection.azimuth = detectionGroup_56to63[scanID].flr2rdr_detn56to63azi56;
  detection.elevation = detectionGroup_56to63[scanID].flr2rdr_detn56to63elevn56;
  detection.range = detectionGroup_56to63[scanID].flr2rdr_detn56to63rnge56;
  detection.range_rate = detectionGroup_56to63[scanID].flr2rdr_detn56to63rng_rate56;
  detection.is_dynamic = detectionGroup_56to63[scanID].flr2rdr_detn56to63dyn_prpty56;
  detection.mode = detectionGroup_56to63[scanID].flr2rdr_detn56to63mode56;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_56to63[scanID].flr2rdr_detn56to63rng_qlty56);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_56to63[scanID].flr2rdr_detn56to63rng_rt_qlty56);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection57(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_56to63[scanID].flr2rdr_detn56to63snr57;
  detection.azimuth = detectionGroup_56to63[scanID].flr2rdr_detn56to63azi57;
  detection.elevation = detectionGroup_56to63[scanID].flr2rdr_detn56to63elevn57;
  detection.range = detectionGroup_56to63[scanID].flr2rdr_detn56to63rnge57;
  detection.range_rate = detectionGroup_56to63[scanID].flr2rdr_detn56to63rng_rate57;
  detection.is_dynamic = detectionGroup_56to63[scanID].flr2rdr_detn56to63dyn_prpty57;
  detection.mode = detectionGroup_56to63[scanID].flr2rdr_detn56to63mode57;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_56to63[scanID].flr2rdr_detn56to63rng_qlty57);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_56to63[scanID].flr2rdr_detn56to63rng_rt_qlty57);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection58(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_56to63[scanID].flr2rdr_detn56to63snr58;
  detection.azimuth = detectionGroup_56to63[scanID].flr2rdr_detn56to63azi58;
  detection.elevation = detectionGroup_56to63[scanID].flr2rdr_detn56to63elevn58;
  detection.range = detectionGroup_56to63[scanID].flr2rdr_detn56to63rnge58;
  detection.range_rate = detectionGroup_56to63[scanID].flr2rdr_detn56to63rng_rate58;
  detection.is_dynamic = detectionGroup_56to63[scanID].flr2rdr_detn56to63dyn_prpty58;
  detection.mode = detectionGroup_56to63[scanID].flr2rdr_detn56to63mode58;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_56to63[scanID].flr2rdr_detn56to63rng_qlty58);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_56to63[scanID].flr2rdr_detn56to63rng_rt_qlty58);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection59(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_56to63[scanID].flr2rdr_detn56to63snr59;
  detection.azimuth = detectionGroup_56to63[scanID].flr2rdr_detn56to63azi59;
  detection.elevation = detectionGroup_56to63[scanID].flr2rdr_detn56to63elevn59;
  detection.range = detectionGroup_56to63[scanID].flr2rdr_detn56to63rnge59;
  detection.range_rate = detectionGroup_56to63[scanID].flr2rdr_detn56to63rng_rate59;
  detection.is_dynamic = detectionGroup_56to63[scanID].flr2rdr_detn56to63dyn_prpty59;
  detection.mode = detectionGroup_56to63[scanID].flr2rdr_detn56to63mode59;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_56to63[scanID].flr2rdr_detn56to63rng_qlty59);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_56to63[scanID].flr2rdr_detn56to63rng_rt_qlty59);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection60(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_56to63[scanID].flr2rdr_detn56to63snr60;
  detection.azimuth = detectionGroup_56to63[scanID].flr2rdr_detn56to63azi60;
  detection.elevation = detectionGroup_56to63[scanID].flr2rdr_detn56to63elevn60;
  detection.range = detectionGroup_56to63[scanID].flr2rdr_detn56to63rnge60;
  detection.range_rate = detectionGroup_56to63[scanID].flr2rdr_detn56to63rng_rate60;
  detection.is_dynamic = detectionGroup_56to63[scanID].flr2rdr_detn56to63dyn_prpty60;
  detection.mode = detectionGroup_56to63[scanID].flr2rdr_detn56to63mode60;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_56to63[scanID].flr2rdr_detn56to63rng_qlty60);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_56to63[scanID].flr2rdr_detn56to63rng_rt_qlty60);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection61(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_56to63[scanID].flr2rdr_detn56to63snr61;
  detection.azimuth = detectionGroup_56to63[scanID].flr2rdr_detn56to63azi61;
  detection.elevation = detectionGroup_56to63[scanID].flr2rdr_detn56to63elevn61;
  detection.range = detectionGroup_56to63[scanID].flr2rdr_detn56to63rnge61;
  detection.range_rate = detectionGroup_56to63[scanID].flr2rdr_detn56to63rng_rate61;
  detection.is_dynamic = detectionGroup_56to63[scanID].flr2rdr_detn56to63dyn_prpty61;
  detection.mode = detectionGroup_56to63[scanID].flr2rdr_detn56to63mode61;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_56to63[scanID].flr2rdr_detn56to63rng_qlty61);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_56to63[scanID].flr2rdr_detn56to63rng_rt_qlty61);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection62(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_56to63[scanID].flr2rdr_detn56to63snr62;
  detection.azimuth = detectionGroup_56to63[scanID].flr2rdr_detn56to63azi62;
  detection.elevation = detectionGroup_56to63[scanID].flr2rdr_detn56to63elevn62;
  detection.range = detectionGroup_56to63[scanID].flr2rdr_detn56to63rnge62;
  detection.range_rate = detectionGroup_56to63[scanID].flr2rdr_detn56to63rng_rate62;
  detection.is_dynamic = detectionGroup_56to63[scanID].flr2rdr_detn56to63dyn_prpty62;
  detection.mode = detectionGroup_56to63[scanID].flr2rdr_detn56to63mode62;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_56to63[scanID].flr2rdr_detn56to63rng_qlty62);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_56to63[scanID].flr2rdr_detn56to63rng_rt_qlty62);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection63(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_56to63[scanID].flr2rdr_detn56to63snr63;
  detection.azimuth = detectionGroup_56to63[scanID].flr2rdr_detn56to63azi63;
  detection.elevation = detectionGroup_56to63[scanID].flr2rdr_detn56to63elevn63;
  detection.range = detectionGroup_56to63[scanID].flr2rdr_detn56to63rnge63;
  detection.range_rate = detectionGroup_56to63[scanID].flr2rdr_detn56to63rng_rate63;
  detection.is_dynamic = detectionGroup_56to63[scanID].flr2rdr_detn56to63dyn_prpty63;
  detection.mode = detectionGroup_56to63[scanID].flr2rdr_detn56to63mode63;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_56to63[scanID].flr2rdr_detn56to63rng_qlty63);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_56to63[scanID].flr2rdr_detn56to63rng_rt_qlty63);

  return detection;
}

void InitialFLRMonitorHal::Impl::store_detection_data_64to71(const initialflrmonitorhal::types::FLR2RdrDetn64to71 detectionGroup, const uint8_t& scanID)
{
  if( !detectionGroup_64to71.count(scanID) )
  {
      detectionGroup_64to71.emplace(std::pair<uint8_t, initialflrmonitorhal::types::FLR2RdrDetn64to71>(scanID, detectionGroup));
      scan_id_counter[scanID]++;
  }
}



 // Get detection function  for detection ..... 8


flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection64(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_64to71[scanID].flr2rdr_detn64to71snr64;
  detection.azimuth = detectionGroup_64to71[scanID].flr2rdr_detn64to71azi64;
  detection.elevation = detectionGroup_64to71[scanID].flr2rdr_detn64to71elevn64;
  detection.range = detectionGroup_64to71[scanID].flr2rdr_detn64to71rnge64;
  detection.range_rate = detectionGroup_64to71[scanID].flr2rdr_detn64to71rng_rate64;
  detection.is_dynamic = detectionGroup_64to71[scanID].flr2rdr_detn64to71dyn_prpty64;
  detection.mode = detectionGroup_64to71[scanID].flr2rdr_detn64to71mode64;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_64to71[scanID].flr2rdr_detn64to71rng_qlty64);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_64to71[scanID].flr2rdr_detn64to71rng_rt_qlty64);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection65(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_64to71[scanID].flr2rdr_detn64to71snr65;
  detection.azimuth = detectionGroup_64to71[scanID].flr2rdr_detn64to71azi65;
  detection.elevation = detectionGroup_64to71[scanID].flr2rdr_detn64to71elevn65;
  detection.range = detectionGroup_64to71[scanID].flr2rdr_detn64to71rnge65;
  detection.range_rate = detectionGroup_64to71[scanID].flr2rdr_detn64to71rng_rate65;
  detection.is_dynamic = detectionGroup_64to71[scanID].flr2rdr_detn64to71dyn_prpty65;
  detection.mode = detectionGroup_64to71[scanID].flr2rdr_detn64to71mode65;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_64to71[scanID].flr2rdr_detn64to71rng_qlty65);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_64to71[scanID].flr2rdr_detn64to71rng_rt_qlty65);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection66(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_64to71[scanID].flr2rdr_detn64to71snr66;
  detection.azimuth = detectionGroup_64to71[scanID].flr2rdr_detn64to71azi66;
  detection.elevation = detectionGroup_64to71[scanID].flr2rdr_detn64to71elevn66;
  detection.range = detectionGroup_64to71[scanID].flr2rdr_detn64to71rnge66;
  detection.range_rate = detectionGroup_64to71[scanID].flr2rdr_detn64to71rng_rate66;
  detection.is_dynamic = detectionGroup_64to71[scanID].flr2rdr_detn64to71dyn_prpty66;
  detection.mode = detectionGroup_64to71[scanID].flr2rdr_detn64to71mode66;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_64to71[scanID].flr2rdr_detn64to71rng_qlty66);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_64to71[scanID].flr2rdr_detn64to71rng_rt_qlty66);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection67(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_64to71[scanID].flr2rdr_detn64to71snr67;
  detection.azimuth = detectionGroup_64to71[scanID].flr2rdr_detn64to71azi67;
  detection.elevation = detectionGroup_64to71[scanID].flr2rdr_detn64to71elevn67;
  detection.range = detectionGroup_64to71[scanID].flr2rdr_detn64to71rnge67;
  detection.range_rate = detectionGroup_64to71[scanID].flr2rdr_detn64to71rng_rate67;
  detection.is_dynamic = detectionGroup_64to71[scanID].flr2rdr_detn64to71dyn_prpty67;
  detection.mode = detectionGroup_64to71[scanID].flr2rdr_detn64to71mode67;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_64to71[scanID].flr2rdr_detn64to71rng_qlty67);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_64to71[scanID].flr2rdr_detn64to71rng_rt_qlty67);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection68(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_64to71[scanID].flr2rdr_detn64to71snr68;
  detection.azimuth = detectionGroup_64to71[scanID].flr2rdr_detn64to71azi68;
  detection.elevation = detectionGroup_64to71[scanID].flr2rdr_detn64to71elevn68;
  detection.range = detectionGroup_64to71[scanID].flr2rdr_detn64to71rnge68;
  detection.range_rate = detectionGroup_64to71[scanID].flr2rdr_detn64to71rng_rate68;
  detection.is_dynamic = detectionGroup_64to71[scanID].flr2rdr_detn64to71dyn_prpty68;
  detection.mode = detectionGroup_64to71[scanID].flr2rdr_detn64to71mode68;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_64to71[scanID].flr2rdr_detn64to71rng_qlty68);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_64to71[scanID].flr2rdr_detn64to71rng_rt_qlty68);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection69(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_64to71[scanID].flr2rdr_detn64to71snr69;
  detection.azimuth = detectionGroup_64to71[scanID].flr2rdr_detn64to71azi69;
  detection.elevation = detectionGroup_64to71[scanID].flr2rdr_detn64to71elevn69;
  detection.range = detectionGroup_64to71[scanID].flr2rdr_detn64to71rnge69;
  detection.range_rate = detectionGroup_64to71[scanID].flr2rdr_detn64to71rng_rate69;
  detection.is_dynamic = detectionGroup_64to71[scanID].flr2rdr_detn64to71dyn_prpty69;
  detection.mode = detectionGroup_64to71[scanID].flr2rdr_detn64to71mode69;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_64to71[scanID].flr2rdr_detn64to71rng_qlty69);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_64to71[scanID].flr2rdr_detn64to71rng_rt_qlty69);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection70(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_64to71[scanID].flr2rdr_detn64to71snr70;
  detection.azimuth = detectionGroup_64to71[scanID].flr2rdr_detn64to71azi70;
  detection.elevation = detectionGroup_64to71[scanID].flr2rdr_detn64to71elevn70;
  detection.range = detectionGroup_64to71[scanID].flr2rdr_detn64to71rnge70;
  detection.range_rate = detectionGroup_64to71[scanID].flr2rdr_detn64to71rng_rate70;
  detection.is_dynamic = detectionGroup_64to71[scanID].flr2rdr_detn64to71dyn_prpty70;
  detection.mode = detectionGroup_64to71[scanID].flr2rdr_detn64to71mode70;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_64to71[scanID].flr2rdr_detn64to71rng_qlty70);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_64to71[scanID].flr2rdr_detn64to71rng_rt_qlty70);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection71(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_64to71[scanID].flr2rdr_detn64to71snr71;
  detection.azimuth = detectionGroup_64to71[scanID].flr2rdr_detn64to71azi71;
  detection.elevation = detectionGroup_64to71[scanID].flr2rdr_detn64to71elevn71;
  detection.range = detectionGroup_64to71[scanID].flr2rdr_detn64to71rnge71;
  detection.range_rate = detectionGroup_64to71[scanID].flr2rdr_detn64to71rng_rate71;
  detection.is_dynamic = detectionGroup_64to71[scanID].flr2rdr_detn64to71dyn_prpty71;
  detection.mode = detectionGroup_64to71[scanID].flr2rdr_detn64to71mode71;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_64to71[scanID].flr2rdr_detn64to71rng_qlty71);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_64to71[scanID].flr2rdr_detn64to71rng_rt_qlty71);

  return detection;
}

void InitialFLRMonitorHal::Impl::store_detection_data_72to79(const initialflrmonitorhal::types::FLR2RdrDetn72to79 detectionGroup, const uint8_t& scanID)
{
  if( !detectionGroup_72to79.count(scanID) )
  {
      detectionGroup_72to79.emplace(std::pair<uint8_t, initialflrmonitorhal::types::FLR2RdrDetn72to79>(scanID, detectionGroup));
      scan_id_counter[scanID]++;
  }
}



 // Get detection function  for detection ..... 9


flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection72(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_72to79[scanID].flr2rdr_detn72to79snr72;
  detection.azimuth = detectionGroup_72to79[scanID].flr2rdr_detn72to79azi72;
  detection.elevation = detectionGroup_72to79[scanID].flr2rdr_detn72to79elevn72;
  detection.range = detectionGroup_72to79[scanID].flr2rdr_detn72to79rnge72;
  detection.range_rate = detectionGroup_72to79[scanID].flr2rdr_detn72to79rng_rate72;
  detection.is_dynamic = detectionGroup_72to79[scanID].flr2rdr_detn72to79dyn_prpty72;
  detection.mode = detectionGroup_72to79[scanID].flr2rdr_detn72to79mode72;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_72to79[scanID].flr2rdr_detn72to79rng_qlty72);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_72to79[scanID].flr2rdr_detn72to79rng_rt_qlty72);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection73(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_72to79[scanID].flr2rdr_detn72to79snr73;
  detection.azimuth = detectionGroup_72to79[scanID].flr2rdr_detn72to79azi73;
  detection.elevation = detectionGroup_72to79[scanID].flr2rdr_detn72to79elevn73;
  detection.range = detectionGroup_72to79[scanID].flr2rdr_detn72to79rnge73;
  detection.range_rate = detectionGroup_72to79[scanID].flr2rdr_detn72to79rng_rate73;
  detection.is_dynamic = detectionGroup_72to79[scanID].flr2rdr_detn72to79dyn_prpty73;
  detection.mode = detectionGroup_72to79[scanID].flr2rdr_detn72to79mode73;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_72to79[scanID].flr2rdr_detn72to79rng_qlty73);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_72to79[scanID].flr2rdr_detn72to79rng_rt_qlty73);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection74(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_72to79[scanID].flr2rdr_detn72to79snr74;
  detection.azimuth = detectionGroup_72to79[scanID].flr2rdr_detn72to79azi74;
  detection.elevation = detectionGroup_72to79[scanID].flr2rdr_detn72to79elevn74;
  detection.range = detectionGroup_72to79[scanID].flr2rdr_detn72to79rnge74;
  detection.range_rate = detectionGroup_72to79[scanID].flr2rdr_detn72to79rng_rate74;
  detection.is_dynamic = detectionGroup_72to79[scanID].flr2rdr_detn72to79dyn_prpty74;
  detection.mode = detectionGroup_72to79[scanID].flr2rdr_detn72to79mode74;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_72to79[scanID].flr2rdr_detn72to79rng_qlty74);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_72to79[scanID].flr2rdr_detn72to79rng_rt_qlty74);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection75(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_72to79[scanID].flr2rdr_detn72to79snr75;
  detection.azimuth = detectionGroup_72to79[scanID].flr2rdr_detn72to79azi75;
  detection.elevation = detectionGroup_72to79[scanID].flr2rdr_detn72to79elevn75;
  detection.range = detectionGroup_72to79[scanID].flr2rdr_detn72to79rnge75;
  detection.range_rate = detectionGroup_72to79[scanID].flr2rdr_detn72to79rng_rate75;
  detection.is_dynamic = detectionGroup_72to79[scanID].flr2rdr_detn72to79dyn_prpty75;
  detection.mode = detectionGroup_72to79[scanID].flr2rdr_detn72to79mode75;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_72to79[scanID].flr2rdr_detn72to79rng_qlty75);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_72to79[scanID].flr2rdr_detn72to79rng_rt_qlty75);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection76(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_72to79[scanID].flr2rdr_detn72to79snr76;
  detection.azimuth = detectionGroup_72to79[scanID].flr2rdr_detn72to79azi76;
  detection.elevation = detectionGroup_72to79[scanID].flr2rdr_detn72to79elevn76;
  detection.range = detectionGroup_72to79[scanID].flr2rdr_detn72to79rnge76;
  detection.range_rate = detectionGroup_72to79[scanID].flr2rdr_detn72to79rng_rate76;
  detection.is_dynamic = detectionGroup_72to79[scanID].flr2rdr_detn72to79dyn_prpty76;
  detection.mode = detectionGroup_72to79[scanID].flr2rdr_detn72to79mode76;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_72to79[scanID].flr2rdr_detn72to79rng_qlty76);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_72to79[scanID].flr2rdr_detn72to79rng_rt_qlty76);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection77(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_72to79[scanID].flr2rdr_detn72to79snr77;
  detection.azimuth = detectionGroup_72to79[scanID].flr2rdr_detn72to79azi77;
  detection.elevation = detectionGroup_72to79[scanID].flr2rdr_detn72to79elevn77;
  detection.range = detectionGroup_72to79[scanID].flr2rdr_detn72to79rnge77;
  detection.range_rate = detectionGroup_72to79[scanID].flr2rdr_detn72to79rng_rate77;
  detection.is_dynamic = detectionGroup_72to79[scanID].flr2rdr_detn72to79dyn_prpty77;
  detection.mode = detectionGroup_72to79[scanID].flr2rdr_detn72to79mode77;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_72to79[scanID].flr2rdr_detn72to79rng_qlty77);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_72to79[scanID].flr2rdr_detn72to79rng_rt_qlty77);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection78(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_72to79[scanID].flr2rdr_detn72to79snr78;
  detection.azimuth = detectionGroup_72to79[scanID].flr2rdr_detn72to79azi78;
  detection.elevation = detectionGroup_72to79[scanID].flr2rdr_detn72to79elevn78;
  detection.range = detectionGroup_72to79[scanID].flr2rdr_detn72to79rnge78;
  detection.range_rate = detectionGroup_72to79[scanID].flr2rdr_detn72to79rng_rate78;
  detection.is_dynamic = detectionGroup_72to79[scanID].flr2rdr_detn72to79dyn_prpty78;
  detection.mode = detectionGroup_72to79[scanID].flr2rdr_detn72to79mode78;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_72to79[scanID].flr2rdr_detn72to79rng_qlty78);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_72to79[scanID].flr2rdr_detn72to79rng_rt_qlty78);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection79(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_72to79[scanID].flr2rdr_detn72to79snr79;
  detection.azimuth = detectionGroup_72to79[scanID].flr2rdr_detn72to79azi79;
  detection.elevation = detectionGroup_72to79[scanID].flr2rdr_detn72to79elevn79;
  detection.range = detectionGroup_72to79[scanID].flr2rdr_detn72to79rnge79;
  detection.range_rate = detectionGroup_72to79[scanID].flr2rdr_detn72to79rng_rate79;
  detection.is_dynamic = detectionGroup_72to79[scanID].flr2rdr_detn72to79dyn_prpty79;
  detection.mode = detectionGroup_72to79[scanID].flr2rdr_detn72to79mode79;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_72to79[scanID].flr2rdr_detn72to79rng_qlty79);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_72to79[scanID].flr2rdr_detn72to79rng_rt_qlty79);

  return detection;
}

void InitialFLRMonitorHal::Impl::store_detection_data_80to87(const initialflrmonitorhal::types::FLR2RdrDetn80to87 detectionGroup, const uint8_t& scanID)
{
  if( !detectionGroup_80to87.count(scanID) )
  {
      detectionGroup_80to87.emplace(std::pair<uint8_t, initialflrmonitorhal::types::FLR2RdrDetn80to87>(scanID, detectionGroup));
      scan_id_counter[scanID]++;
  }
}



 // Get detection function  for detection ..... 10


flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection80(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_80to87[scanID].flr2rdr_detn80to87snr80;
  detection.azimuth = detectionGroup_80to87[scanID].flr2rdr_detn80to87azi80;
  detection.elevation = detectionGroup_80to87[scanID].flr2rdr_detn80to87elevn80;
  detection.range = detectionGroup_80to87[scanID].flr2rdr_detn80to87rnge80;
  detection.range_rate = detectionGroup_80to87[scanID].flr2rdr_detn80to87rng_rate80;
  detection.is_dynamic = detectionGroup_80to87[scanID].flr2rdr_detn80to87dyn_prpty80;
  detection.mode = detectionGroup_80to87[scanID].flr2rdr_detn80to87mode80;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_80to87[scanID].flr2rdr_detn80to87rng_qlty80);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_80to87[scanID].flr2rdr_detn80to87rng_rt_qlty80);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection81(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_80to87[scanID].flr2rdr_detn80to87snr81;
  detection.azimuth = detectionGroup_80to87[scanID].flr2rdr_detn80to87azi81;
  detection.elevation = detectionGroup_80to87[scanID].flr2rdr_detn80to87elevn81;
  detection.range = detectionGroup_80to87[scanID].flr2rdr_detn80to87rnge81;
  detection.range_rate = detectionGroup_80to87[scanID].flr2rdr_detn80to87rng_rate81;
  detection.is_dynamic = detectionGroup_80to87[scanID].flr2rdr_detn80to87dyn_prpty81;
  detection.mode = detectionGroup_80to87[scanID].flr2rdr_detn80to87mode81;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_80to87[scanID].flr2rdr_detn80to87rng_qlty81);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_80to87[scanID].flr2rdr_detn80to87rng_rt_qlty81);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection82(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_80to87[scanID].flr2rdr_detn80to87snr82;
  detection.azimuth = detectionGroup_80to87[scanID].flr2rdr_detn80to87azi82;
  detection.elevation = detectionGroup_80to87[scanID].flr2rdr_detn80to87elevn82;
  detection.range = detectionGroup_80to87[scanID].flr2rdr_detn80to87rnge82;
  detection.range_rate = detectionGroup_80to87[scanID].flr2rdr_detn80to87rng_rate82;
  detection.is_dynamic = detectionGroup_80to87[scanID].flr2rdr_detn80to87dyn_prpty82;
  detection.mode = detectionGroup_80to87[scanID].flr2rdr_detn80to87mode82;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_80to87[scanID].flr2rdr_detn80to87rng_qlty82);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_80to87[scanID].flr2rdr_detn80to87rng_rt_qlty82);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection83(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_80to87[scanID].flr2rdr_detn80to87snr83;
  detection.azimuth = detectionGroup_80to87[scanID].flr2rdr_detn80to87azi83;
  detection.elevation = detectionGroup_80to87[scanID].flr2rdr_detn80to87elevn83;
  detection.range = detectionGroup_80to87[scanID].flr2rdr_detn80to87rnge83;
  detection.range_rate = detectionGroup_80to87[scanID].flr2rdr_detn80to87rng_rate83;
  detection.is_dynamic = detectionGroup_80to87[scanID].flr2rdr_detn80to87dyn_prpty83;
  detection.mode = detectionGroup_80to87[scanID].flr2rdr_detn80to87mode83;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_80to87[scanID].flr2rdr_detn80to87rng_qlty83);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_80to87[scanID].flr2rdr_detn80to87rng_rt_qlty83);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection84(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_80to87[scanID].flr2rdr_detn80to87snr84;
  detection.azimuth = detectionGroup_80to87[scanID].flr2rdr_detn80to87azi84;
  detection.elevation = detectionGroup_80to87[scanID].flr2rdr_detn80to87elevn84;
  detection.range = detectionGroup_80to87[scanID].flr2rdr_detn80to87rnge84;
  detection.range_rate = detectionGroup_80to87[scanID].flr2rdr_detn80to87rng_rate84;
  detection.is_dynamic = detectionGroup_80to87[scanID].flr2rdr_detn80to87dyn_prpty84;
  detection.mode = detectionGroup_80to87[scanID].flr2rdr_detn80to87mode84;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_80to87[scanID].flr2rdr_detn80to87rng_qlty84);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_80to87[scanID].flr2rdr_detn80to87rng_rt_qlty84);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection85(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_80to87[scanID].flr2rdr_detn80to87snr85;
  detection.azimuth = detectionGroup_80to87[scanID].flr2rdr_detn80to87azi85;
  detection.elevation = detectionGroup_80to87[scanID].flr2rdr_detn80to87elevn85;
  detection.range = detectionGroup_80to87[scanID].flr2rdr_detn80to87rnge85;
  detection.range_rate = detectionGroup_80to87[scanID].flr2rdr_detn80to87rng_rate85;
  detection.is_dynamic = detectionGroup_80to87[scanID].flr2rdr_detn80to87dyn_prpty85;
  detection.mode = detectionGroup_80to87[scanID].flr2rdr_detn80to87mode85;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_80to87[scanID].flr2rdr_detn80to87rng_qlty85);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_80to87[scanID].flr2rdr_detn80to87rng_rt_qlty85);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection86(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_80to87[scanID].flr2rdr_detn80to87snr86;
  detection.azimuth = detectionGroup_80to87[scanID].flr2rdr_detn80to87azi86;
  detection.elevation = detectionGroup_80to87[scanID].flr2rdr_detn80to87elevn86;
  detection.range = detectionGroup_80to87[scanID].flr2rdr_detn80to87rnge86;
  detection.range_rate = detectionGroup_80to87[scanID].flr2rdr_detn80to87rng_rate86;
  detection.is_dynamic = detectionGroup_80to87[scanID].flr2rdr_detn80to87dyn_prpty86;
  detection.mode = detectionGroup_80to87[scanID].flr2rdr_detn80to87mode86;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_80to87[scanID].flr2rdr_detn80to87rng_qlty86);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_80to87[scanID].flr2rdr_detn80to87rng_rt_qlty86);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection87(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_80to87[scanID].flr2rdr_detn80to87snr87;
  detection.azimuth = detectionGroup_80to87[scanID].flr2rdr_detn80to87azi87;
  detection.elevation = detectionGroup_80to87[scanID].flr2rdr_detn80to87elevn87;
  detection.range = detectionGroup_80to87[scanID].flr2rdr_detn80to87rnge87;
  detection.range_rate = detectionGroup_80to87[scanID].flr2rdr_detn80to87rng_rate87;
  detection.is_dynamic = detectionGroup_80to87[scanID].flr2rdr_detn80to87dyn_prpty87;
  detection.mode = detectionGroup_80to87[scanID].flr2rdr_detn80to87mode87;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_80to87[scanID].flr2rdr_detn80to87rng_qlty87);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_80to87[scanID].flr2rdr_detn80to87rng_rt_qlty87);

  return detection;
}

void InitialFLRMonitorHal::Impl::store_detection_data_88to95(const initialflrmonitorhal::types::FLR2RdrDetn88to95 detectionGroup, const uint8_t& scanID)
{
  if( !detectionGroup_88to95.count(scanID) )
  {
      detectionGroup_88to95.emplace(std::pair<uint8_t, initialflrmonitorhal::types::FLR2RdrDetn88to95>(scanID, detectionGroup));
      scan_id_counter[scanID]++;
  }
}



 // Get detection function  for detection ..... 11


flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection88(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_88to95[scanID].flr2rdr_detn88to95snr88;
  detection.azimuth = detectionGroup_88to95[scanID].flr2rdr_detn88to95azi88;
  detection.elevation = detectionGroup_88to95[scanID].flr2rdr_detn88to95elevn88;
  detection.range = detectionGroup_88to95[scanID].flr2rdr_detn88to95rnge88;
  detection.range_rate = detectionGroup_88to95[scanID].flr2rdr_detn88to95rng_rate88;
  detection.is_dynamic = detectionGroup_88to95[scanID].flr2rdr_detn88to95dyn_prpty88;
  detection.mode = detectionGroup_88to95[scanID].flr2rdr_detn88to95mode88;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_88to95[scanID].flr2rdr_detn88to95rng_qlty88);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_88to95[scanID].flr2rdr_detn88to95rng_rt_qlty88);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection89(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_88to95[scanID].flr2rdr_detn88to95snr89;
  detection.azimuth = detectionGroup_88to95[scanID].flr2rdr_detn88to95azi89;
  detection.elevation = detectionGroup_88to95[scanID].flr2rdr_detn88to95elevn89;
  detection.range = detectionGroup_88to95[scanID].flr2rdr_detn88to95rnge89;
  detection.range_rate = detectionGroup_88to95[scanID].flr2rdr_detn88to95rng_rate89;
  detection.is_dynamic = detectionGroup_88to95[scanID].flr2rdr_detn88to95dyn_prpty89;
  detection.mode = detectionGroup_88to95[scanID].flr2rdr_detn88to95mode89;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_88to95[scanID].flr2rdr_detn88to95rng_qlty89);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_88to95[scanID].flr2rdr_detn88to95rng_rt_qlty89);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection90(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_88to95[scanID].flr2rdr_detn88to95snr90;
  detection.azimuth = detectionGroup_88to95[scanID].flr2rdr_detn88to95azi90;
  detection.elevation = detectionGroup_88to95[scanID].flr2rdr_detn88to95elevn90;
  detection.range = detectionGroup_88to95[scanID].flr2rdr_detn88to95rnge90;
  detection.range_rate = detectionGroup_88to95[scanID].flr2rdr_detn88to95rng_rate90;
  detection.is_dynamic = detectionGroup_88to95[scanID].flr2rdr_detn88to95dyn_prpty90;
  detection.mode = detectionGroup_88to95[scanID].flr2rdr_detn88to95mode90;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_88to95[scanID].flr2rdr_detn88to95rng_qlty90);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_88to95[scanID].flr2rdr_detn88to95rng_rt_qlty90);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection91(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_88to95[scanID].flr2rdr_detn88to95snr91;
  detection.azimuth = detectionGroup_88to95[scanID].flr2rdr_detn88to95azi91;
  detection.elevation = detectionGroup_88to95[scanID].flr2rdr_detn88to95elevn91;
  detection.range = detectionGroup_88to95[scanID].flr2rdr_detn88to95rnge91;
  detection.range_rate = detectionGroup_88to95[scanID].flr2rdr_detn88to95rng_rate91;
  detection.is_dynamic = detectionGroup_88to95[scanID].flr2rdr_detn88to95dyn_prpty91;
  detection.mode = detectionGroup_88to95[scanID].flr2rdr_detn88to95mode91;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_88to95[scanID].flr2rdr_detn88to95rng_qlty91);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_88to95[scanID].flr2rdr_detn88to95rng_rt_qlty91);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection92(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_88to95[scanID].flr2rdr_detn88to95snr92;
  detection.azimuth = detectionGroup_88to95[scanID].flr2rdr_detn88to95azi92;
  detection.elevation = detectionGroup_88to95[scanID].flr2rdr_detn88to95elevn92;
  detection.range = detectionGroup_88to95[scanID].flr2rdr_detn88to95rnge92;
  detection.range_rate = detectionGroup_88to95[scanID].flr2rdr_detn88to95rng_rate92;
  detection.is_dynamic = detectionGroup_88to95[scanID].flr2rdr_detn88to95dyn_prpty92;
  detection.mode = detectionGroup_88to95[scanID].flr2rdr_detn88to95mode92;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_88to95[scanID].flr2rdr_detn88to95rng_qlty92);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_88to95[scanID].flr2rdr_detn88to95rng_rt_qlty92);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection93(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_88to95[scanID].flr2rdr_detn88to95snr93;
  detection.azimuth = detectionGroup_88to95[scanID].flr2rdr_detn88to95azi93;
  detection.elevation = detectionGroup_88to95[scanID].flr2rdr_detn88to95elevn93;
  detection.range = detectionGroup_88to95[scanID].flr2rdr_detn88to95rnge93;
  detection.range_rate = detectionGroup_88to95[scanID].flr2rdr_detn88to95rng_rate93;
  detection.is_dynamic = detectionGroup_88to95[scanID].flr2rdr_detn88to95dyn_prpty93;
  detection.mode = detectionGroup_88to95[scanID].flr2rdr_detn88to95mode93;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_88to95[scanID].flr2rdr_detn88to95rng_qlty93);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_88to95[scanID].flr2rdr_detn88to95rng_rt_qlty93);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection94(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_88to95[scanID].flr2rdr_detn88to95snr94;
  detection.azimuth = detectionGroup_88to95[scanID].flr2rdr_detn88to95azi94;
  detection.elevation = detectionGroup_88to95[scanID].flr2rdr_detn88to95elevn94;
  detection.range = detectionGroup_88to95[scanID].flr2rdr_detn88to95rnge94;
  detection.range_rate = detectionGroup_88to95[scanID].flr2rdr_detn88to95rng_rate94;
  detection.is_dynamic = detectionGroup_88to95[scanID].flr2rdr_detn88to95dyn_prpty94;
  detection.mode = detectionGroup_88to95[scanID].flr2rdr_detn88to95mode94;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_88to95[scanID].flr2rdr_detn88to95rng_qlty94);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_88to95[scanID].flr2rdr_detn88to95rng_rt_qlty94);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection95(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_88to95[scanID].flr2rdr_detn88to95snr95;
  detection.azimuth = detectionGroup_88to95[scanID].flr2rdr_detn88to95azi95;
  detection.elevation = detectionGroup_88to95[scanID].flr2rdr_detn88to95elevn95;
  detection.range = detectionGroup_88to95[scanID].flr2rdr_detn88to95rnge95;
  detection.range_rate = detectionGroup_88to95[scanID].flr2rdr_detn88to95rng_rate95;
  detection.is_dynamic = detectionGroup_88to95[scanID].flr2rdr_detn88to95dyn_prpty95;
  detection.mode = detectionGroup_88to95[scanID].flr2rdr_detn88to95mode95;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_88to95[scanID].flr2rdr_detn88to95rng_qlty95);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_88to95[scanID].flr2rdr_detn88to95rng_rt_qlty95);

  return detection;
}

void InitialFLRMonitorHal::Impl::store_detection_data_96to103(const initialflrmonitorhal::types::FLR2RdrDetn96to103 detectionGroup, const uint8_t& scanID)
{
  if( !detectionGroup_96to103.count(scanID) )
  {
      detectionGroup_96to103.emplace(std::pair<uint8_t, initialflrmonitorhal::types::FLR2RdrDetn96to103>(scanID, detectionGroup));
      scan_id_counter[scanID]++;
  }
}



 // Get detection function  for detection ..... 12


flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection96(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_96to103[scanID].flr2rdr_detn96to103snr96;
  detection.azimuth = detectionGroup_96to103[scanID].flr2rdr_detn96to103azi96;
  detection.elevation = detectionGroup_96to103[scanID].flr2rdr_detn96to103elevn96;
  detection.range = detectionGroup_96to103[scanID].flr2rdr_detn96to103rnge96;
  detection.range_rate = detectionGroup_96to103[scanID].flr2rdr_detn96to103rng_rate96;
  detection.is_dynamic = detectionGroup_96to103[scanID].flr2rdr_detn96to103dyn_prpty96;
  detection.mode = detectionGroup_96to103[scanID].flr2rdr_detn96to103mode96;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_96to103[scanID].flr2rdr_detn96to103rng_qlty96);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_96to103[scanID].flr2rdr_detn96to103rng_rt_qlty96);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection97(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_96to103[scanID].flr2rdr_detn96to103snr97;
  detection.azimuth = detectionGroup_96to103[scanID].flr2rdr_detn96to103azi97;
  detection.elevation = detectionGroup_96to103[scanID].flr2rdr_detn96to103elevn97;
  detection.range = detectionGroup_96to103[scanID].flr2rdr_detn96to103rnge97;
  detection.range_rate = detectionGroup_96to103[scanID].flr2rdr_detn96to103rng_rate97;
  detection.is_dynamic = detectionGroup_96to103[scanID].flr2rdr_detn96to103dyn_prpty97;
  detection.mode = detectionGroup_96to103[scanID].flr2rdr_detn96to103mode97;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_96to103[scanID].flr2rdr_detn96to103rng_qlty97);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_96to103[scanID].flr2rdr_detn96to103rng_rt_qlty97);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection98(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_96to103[scanID].flr2rdr_detn96to103snr98;
  detection.azimuth = detectionGroup_96to103[scanID].flr2rdr_detn96to103azi98;
  detection.elevation = detectionGroup_96to103[scanID].flr2rdr_detn96to103elevn98;
  detection.range = detectionGroup_96to103[scanID].flr2rdr_detn96to103rnge98;
  detection.range_rate = detectionGroup_96to103[scanID].flr2rdr_detn96to103rng_rate98;
  detection.is_dynamic = detectionGroup_96to103[scanID].flr2rdr_detn96to103dyn_prpty98;
  detection.mode = detectionGroup_96to103[scanID].flr2rdr_detn96to103mode98;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_96to103[scanID].flr2rdr_detn96to103rng_qlty98);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_96to103[scanID].flr2rdr_detn96to103rng_rt_qlty98);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection99(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_96to103[scanID].flr2rdr_detn96to103snr99;
  detection.azimuth = detectionGroup_96to103[scanID].flr2rdr_detn96to103azi99;
  detection.elevation = detectionGroup_96to103[scanID].flr2rdr_detn96to103elevn99;
  detection.range = detectionGroup_96to103[scanID].flr2rdr_detn96to103rnge99;
  detection.range_rate = detectionGroup_96to103[scanID].flr2rdr_detn96to103rng_rate99;
  detection.is_dynamic = detectionGroup_96to103[scanID].flr2rdr_detn96to103dyn_prpty99;
  detection.mode = detectionGroup_96to103[scanID].flr2rdr_detn96to103mode99;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_96to103[scanID].flr2rdr_detn96to103rng_qlty99);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_96to103[scanID].flr2rdr_detn96to103rng_rt_qlty99);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection100(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_96to103[scanID].flr2rdr_detn96to103snr100;
  detection.azimuth = detectionGroup_96to103[scanID].flr2rdr_detn96to103azi100;
  detection.elevation = detectionGroup_96to103[scanID].flr2rdr_detn96to103elevn100;
  detection.range = detectionGroup_96to103[scanID].flr2rdr_detn96to103rnge100;
  detection.range_rate = detectionGroup_96to103[scanID].flr2rdr_detn96to103rng_rate100;
  detection.is_dynamic = detectionGroup_96to103[scanID].flr2rdr_detn96to103dyn_prpty100;
  detection.mode = detectionGroup_96to103[scanID].flr2rdr_detn96to103mode100;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_96to103[scanID].flr2rdr_detn96to103rng_qlty100);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_96to103[scanID].flr2rdr_detn96to103rng_rt_qlty100);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection101(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_96to103[scanID].flr2rdr_detn96to103snr101;
  detection.azimuth = detectionGroup_96to103[scanID].flr2rdr_detn96to103azi101;
  detection.elevation = detectionGroup_96to103[scanID].flr2rdr_detn96to103elevn101;
  detection.range = detectionGroup_96to103[scanID].flr2rdr_detn96to103rnge101;
  detection.range_rate = detectionGroup_96to103[scanID].flr2rdr_detn96to103rng_rate101;
  detection.is_dynamic = detectionGroup_96to103[scanID].flr2rdr_detn96to103dyn_prpty101;
  detection.mode = detectionGroup_96to103[scanID].flr2rdr_detn96to103mode101;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_96to103[scanID].flr2rdr_detn96to103rng_qlty101);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_96to103[scanID].flr2rdr_detn96to103rng_rt_qlty101);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection102(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_96to103[scanID].flr2rdr_detn96to103snr102;
  detection.azimuth = detectionGroup_96to103[scanID].flr2rdr_detn96to103azi102;
  detection.elevation = detectionGroup_96to103[scanID].flr2rdr_detn96to103elevn102;
  detection.range = detectionGroup_96to103[scanID].flr2rdr_detn96to103rnge102;
  detection.range_rate = detectionGroup_96to103[scanID].flr2rdr_detn96to103rng_rate102;
  detection.is_dynamic = detectionGroup_96to103[scanID].flr2rdr_detn96to103dyn_prpty102;
  detection.mode = detectionGroup_96to103[scanID].flr2rdr_detn96to103mode102;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_96to103[scanID].flr2rdr_detn96to103rng_qlty102);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_96to103[scanID].flr2rdr_detn96to103rng_rt_qlty102);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection103(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_96to103[scanID].flr2rdr_detn96to103snr103;
  detection.azimuth = detectionGroup_96to103[scanID].flr2rdr_detn96to103azi103;
  detection.elevation = detectionGroup_96to103[scanID].flr2rdr_detn96to103elevn103;
  detection.range = detectionGroup_96to103[scanID].flr2rdr_detn96to103rnge103;
  detection.range_rate = detectionGroup_96to103[scanID].flr2rdr_detn96to103rng_rate103;
  detection.is_dynamic = detectionGroup_96to103[scanID].flr2rdr_detn96to103dyn_prpty103;
  detection.mode = detectionGroup_96to103[scanID].flr2rdr_detn96to103mode103;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_96to103[scanID].flr2rdr_detn96to103rng_qlty103);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_96to103[scanID].flr2rdr_detn96to103rng_rt_qlty103);

  return detection;
}

void InitialFLRMonitorHal::Impl::store_detection_data_104to111(const initialflrmonitorhal::types::FLR2RdrDetn104to111 detectionGroup, const uint8_t& scanID)
{
  if( !detectionGroup_104to111.count(scanID) )
  {
      detectionGroup_104to111.emplace(std::pair<uint8_t, initialflrmonitorhal::types::FLR2RdrDetn104to111>(scanID, detectionGroup));
      scan_id_counter[scanID]++;
  }
}



 // Get detection function  for detection ..... 13


flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection104(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_104to111[scanID].flr2rdr_detn104to111snr104;
  detection.azimuth = detectionGroup_104to111[scanID].flr2rdr_detn104to111azi104;
  detection.elevation = detectionGroup_104to111[scanID].flr2rdr_detn104to111elevn104;
  detection.range = detectionGroup_104to111[scanID].flr2rdr_detn104to111rnge104;
  detection.range_rate = detectionGroup_104to111[scanID].flr2rdr_detn104to111rng_rate104;
  detection.is_dynamic = detectionGroup_104to111[scanID].flr2rdr_detn104to111dyn_prpty104;
  detection.mode = detectionGroup_104to111[scanID].flr2rdr_detn104to111mode104;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_104to111[scanID].flr2rdr_detn104to111rng_qlty104);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_104to111[scanID].flr2rdr_detn104to111rng_rt_qlty104);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection105(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_104to111[scanID].flr2rdr_detn104to111snr105;
  detection.azimuth = detectionGroup_104to111[scanID].flr2rdr_detn104to111azi105;
  detection.elevation = detectionGroup_104to111[scanID].flr2rdr_detn104to111elevn105;
  detection.range = detectionGroup_104to111[scanID].flr2rdr_detn104to111rnge105;
  detection.range_rate = detectionGroup_104to111[scanID].flr2rdr_detn104to111rng_rate105;
  detection.is_dynamic = detectionGroup_104to111[scanID].flr2rdr_detn104to111dyn_prpty105;
  detection.mode = detectionGroup_104to111[scanID].flr2rdr_detn104to111mode105;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_104to111[scanID].flr2rdr_detn104to111rng_qlty105);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_104to111[scanID].flr2rdr_detn104to111rng_rt_qlty105);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection106(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_104to111[scanID].flr2rdr_detn104to111snr106;
  detection.azimuth = detectionGroup_104to111[scanID].flr2rdr_detn104to111azi106;
  detection.elevation = detectionGroup_104to111[scanID].flr2rdr_detn104to111elevn106;
  detection.range = detectionGroup_104to111[scanID].flr2rdr_detn104to111rnge106;
  detection.range_rate = detectionGroup_104to111[scanID].flr2rdr_detn104to111rng_rate106;
  detection.is_dynamic = detectionGroup_104to111[scanID].flr2rdr_detn104to111dyn_prpty106;
  detection.mode = detectionGroup_104to111[scanID].flr2rdr_detn104to111mode106;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_104to111[scanID].flr2rdr_detn104to111rng_qlty106);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_104to111[scanID].flr2rdr_detn104to111rng_rt_qlty106);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection107(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_104to111[scanID].flr2rdr_detn104to111snr107;
  detection.azimuth = detectionGroup_104to111[scanID].flr2rdr_detn104to111azi107;
  detection.elevation = detectionGroup_104to111[scanID].flr2rdr_detn104to111elevn107;
  detection.range = detectionGroup_104to111[scanID].flr2rdr_detn104to111rnge107;
  detection.range_rate = detectionGroup_104to111[scanID].flr2rdr_detn104to111rng_rate107;
  detection.is_dynamic = detectionGroup_104to111[scanID].flr2rdr_detn104to111dyn_prpty107;
  detection.mode = detectionGroup_104to111[scanID].flr2rdr_detn104to111mode107;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_104to111[scanID].flr2rdr_detn104to111rng_qlty107);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_104to111[scanID].flr2rdr_detn104to111rng_rt_qlty107);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection108(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_104to111[scanID].flr2rdr_detn104to111snr108;
  detection.azimuth = detectionGroup_104to111[scanID].flr2rdr_detn104to111azi108;
  detection.elevation = detectionGroup_104to111[scanID].flr2rdr_detn104to111elevn108;
  detection.range = detectionGroup_104to111[scanID].flr2rdr_detn104to111rnge108;
  detection.range_rate = detectionGroup_104to111[scanID].flr2rdr_detn104to111rng_rate108;
  detection.is_dynamic = detectionGroup_104to111[scanID].flr2rdr_detn104to111dyn_prpty108;
  detection.mode = detectionGroup_104to111[scanID].flr2rdr_detn104to111mode108;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_104to111[scanID].flr2rdr_detn104to111rng_qlty108);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_104to111[scanID].flr2rdr_detn104to111rng_rt_qlty108);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection109(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_104to111[scanID].flr2rdr_detn104to111snr109;
  detection.azimuth = detectionGroup_104to111[scanID].flr2rdr_detn104to111azi109;
  detection.elevation = detectionGroup_104to111[scanID].flr2rdr_detn104to111elevn109;
  detection.range = detectionGroup_104to111[scanID].flr2rdr_detn104to111rnge109;
  detection.range_rate = detectionGroup_104to111[scanID].flr2rdr_detn104to111rng_rate109;
  detection.is_dynamic = detectionGroup_104to111[scanID].flr2rdr_detn104to111dyn_prpty109;
  detection.mode = detectionGroup_104to111[scanID].flr2rdr_detn104to111mode109;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_104to111[scanID].flr2rdr_detn104to111rng_qlty109);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_104to111[scanID].flr2rdr_detn104to111rng_rt_qlty109);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection110(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_104to111[scanID].flr2rdr_detn104to111snr110;
  detection.azimuth = detectionGroup_104to111[scanID].flr2rdr_detn104to111azi110;
  detection.elevation = detectionGroup_104to111[scanID].flr2rdr_detn104to111elevn110;
  detection.range = detectionGroup_104to111[scanID].flr2rdr_detn104to111rnge110;
  detection.range_rate = detectionGroup_104to111[scanID].flr2rdr_detn104to111rng_rate110;
  detection.is_dynamic = detectionGroup_104to111[scanID].flr2rdr_detn104to111dyn_prpty110;
  detection.mode = detectionGroup_104to111[scanID].flr2rdr_detn104to111mode110;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_104to111[scanID].flr2rdr_detn104to111rng_qlty110);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_104to111[scanID].flr2rdr_detn104to111rng_rt_qlty110);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection111(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_104to111[scanID].flr2rdr_detn104to111snr111;
  detection.azimuth = detectionGroup_104to111[scanID].flr2rdr_detn104to111azi111;
  detection.elevation = detectionGroup_104to111[scanID].flr2rdr_detn104to111elevn111;
  detection.range = detectionGroup_104to111[scanID].flr2rdr_detn104to111rnge111;
  detection.range_rate = detectionGroup_104to111[scanID].flr2rdr_detn104to111rng_rate111;
  detection.is_dynamic = detectionGroup_104to111[scanID].flr2rdr_detn104to111dyn_prpty111;
  detection.mode = detectionGroup_104to111[scanID].flr2rdr_detn104to111mode111;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_104to111[scanID].flr2rdr_detn104to111rng_qlty111);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_104to111[scanID].flr2rdr_detn104to111rng_rt_qlty111);

  return detection;
}

void InitialFLRMonitorHal::Impl::store_detection_data_112to119(const initialflrmonitorhal::types::FLR2RdrDetn112to119 detectionGroup, const uint8_t& scanID)
{
  if( !detectionGroup_112to119.count(scanID) )
  {
      detectionGroup_112to119.emplace(std::pair<uint8_t, initialflrmonitorhal::types::FLR2RdrDetn112to119>(scanID, detectionGroup));
      scan_id_counter[scanID]++;
  }
}



 // Get detection function  for detection ..... 14


flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection112(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_112to119[scanID].flr2rdr_detn112to119snr112;
  detection.azimuth = detectionGroup_112to119[scanID].flr2rdr_detn112to119azi112;
  detection.elevation = detectionGroup_112to119[scanID].flr2rdr_detn112to119elevn112;
  detection.range = detectionGroup_112to119[scanID].flr2rdr_detn112to119rnge112;
  detection.range_rate = detectionGroup_112to119[scanID].flr2rdr_detn112to119rng_rate112;
  detection.is_dynamic = detectionGroup_112to119[scanID].flr2rdr_detn112to119dyn_prpty112;
  detection.mode = detectionGroup_112to119[scanID].flr2rdr_detn112to119mode112;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_112to119[scanID].flr2rdr_detn112to119rng_qlty112);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_112to119[scanID].flr2rdr_detn112to119rng_rt_qlty112);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection113(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_112to119[scanID].flr2rdr_detn112to119snr113;
  detection.azimuth = detectionGroup_112to119[scanID].flr2rdr_detn112to119azi113;
  detection.elevation = detectionGroup_112to119[scanID].flr2rdr_detn112to119elevn113;
  detection.range = detectionGroup_112to119[scanID].flr2rdr_detn112to119rnge113;
  detection.range_rate = detectionGroup_112to119[scanID].flr2rdr_detn112to119rng_rate113;
  detection.is_dynamic = detectionGroup_112to119[scanID].flr2rdr_detn112to119dyn_prpty113;
  detection.mode = detectionGroup_112to119[scanID].flr2rdr_detn112to119mode113;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_112to119[scanID].flr2rdr_detn112to119rng_qlty113);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_112to119[scanID].flr2rdr_detn112to119rng_rt_qlty113);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection114(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_112to119[scanID].flr2rdr_detn112to119snr114;
  detection.azimuth = detectionGroup_112to119[scanID].flr2rdr_detn112to119azi114;
  detection.elevation = detectionGroup_112to119[scanID].flr2rdr_detn112to119elevn114;
  detection.range = detectionGroup_112to119[scanID].flr2rdr_detn112to119rnge114;
  detection.range_rate = detectionGroup_112to119[scanID].flr2rdr_detn112to119rng_rate114;
  detection.is_dynamic = detectionGroup_112to119[scanID].flr2rdr_detn112to119dyn_prpty114;
  detection.mode = detectionGroup_112to119[scanID].flr2rdr_detn112to119mode114;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_112to119[scanID].flr2rdr_detn112to119rng_qlty114);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_112to119[scanID].flr2rdr_detn112to119rng_rt_qlty114);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection115(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_112to119[scanID].flr2rdr_detn112to119snr115;
  detection.azimuth = detectionGroup_112to119[scanID].flr2rdr_detn112to119azi115;
  detection.elevation = detectionGroup_112to119[scanID].flr2rdr_detn112to119elevn115;
  detection.range = detectionGroup_112to119[scanID].flr2rdr_detn112to119rnge115;
  detection.range_rate = detectionGroup_112to119[scanID].flr2rdr_detn112to119rng_rate115;
  detection.is_dynamic = detectionGroup_112to119[scanID].flr2rdr_detn112to119dyn_prpty115;
  detection.mode = detectionGroup_112to119[scanID].flr2rdr_detn112to119mode115;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_112to119[scanID].flr2rdr_detn112to119rng_qlty115);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_112to119[scanID].flr2rdr_detn112to119rng_rt_qlty115);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection116(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_112to119[scanID].flr2rdr_detn112to119snr116;
  detection.azimuth = detectionGroup_112to119[scanID].flr2rdr_detn112to119azi116;
  detection.elevation = detectionGroup_112to119[scanID].flr2rdr_detn112to119elevn116;
  detection.range = detectionGroup_112to119[scanID].flr2rdr_detn112to119rnge116;
  detection.range_rate = detectionGroup_112to119[scanID].flr2rdr_detn112to119rng_rate116;
  detection.is_dynamic = detectionGroup_112to119[scanID].flr2rdr_detn112to119dyn_prpty116;
  detection.mode = detectionGroup_112to119[scanID].flr2rdr_detn112to119mode116;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_112to119[scanID].flr2rdr_detn112to119rng_qlty116);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_112to119[scanID].flr2rdr_detn112to119rng_rt_qlty116);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection117(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_112to119[scanID].flr2rdr_detn112to119snr117;
  detection.azimuth = detectionGroup_112to119[scanID].flr2rdr_detn112to119azi117;
  detection.elevation = detectionGroup_112to119[scanID].flr2rdr_detn112to119elevn117;
  detection.range = detectionGroup_112to119[scanID].flr2rdr_detn112to119rnge117;
  detection.range_rate = detectionGroup_112to119[scanID].flr2rdr_detn112to119rng_rate117;
  detection.is_dynamic = detectionGroup_112to119[scanID].flr2rdr_detn112to119dyn_prpty117;
  detection.mode = detectionGroup_112to119[scanID].flr2rdr_detn112to119mode117;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_112to119[scanID].flr2rdr_detn112to119rng_qlty117);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_112to119[scanID].flr2rdr_detn112to119rng_rt_qlty117);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection118(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_112to119[scanID].flr2rdr_detn112to119snr118;
  detection.azimuth = detectionGroup_112to119[scanID].flr2rdr_detn112to119azi118;
  detection.elevation = detectionGroup_112to119[scanID].flr2rdr_detn112to119elevn118;
  detection.range = detectionGroup_112to119[scanID].flr2rdr_detn112to119rnge118;
  detection.range_rate = detectionGroup_112to119[scanID].flr2rdr_detn112to119rng_rate118;
  detection.is_dynamic = detectionGroup_112to119[scanID].flr2rdr_detn112to119dyn_prpty118;
  detection.mode = detectionGroup_112to119[scanID].flr2rdr_detn112to119mode118;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_112to119[scanID].flr2rdr_detn112to119rng_qlty118);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_112to119[scanID].flr2rdr_detn112to119rng_rt_qlty118);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection119(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_112to119[scanID].flr2rdr_detn112to119snr119;
  detection.azimuth = detectionGroup_112to119[scanID].flr2rdr_detn112to119azi119;
  detection.elevation = detectionGroup_112to119[scanID].flr2rdr_detn112to119elevn119;
  detection.range = detectionGroup_112to119[scanID].flr2rdr_detn112to119rnge119;
  detection.range_rate = detectionGroup_112to119[scanID].flr2rdr_detn112to119rng_rate119;
  detection.is_dynamic = detectionGroup_112to119[scanID].flr2rdr_detn112to119dyn_prpty119;
  detection.mode = detectionGroup_112to119[scanID].flr2rdr_detn112to119mode119;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_112to119[scanID].flr2rdr_detn112to119rng_qlty119);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_112to119[scanID].flr2rdr_detn112to119rng_rt_qlty119);

  return detection;
}

void InitialFLRMonitorHal::Impl::store_detection_data_120to127(const initialflrmonitorhal::types::FLR2RdrDetn120to127 detectionGroup, const uint8_t& scanID)
{
  if( !detectionGroup_120to127.count(scanID) )
  {
      detectionGroup_120to127.emplace(std::pair<uint8_t, initialflrmonitorhal::types::FLR2RdrDetn120to127>(scanID, detectionGroup));
      scan_id_counter[scanID]++;
  }
}



 // Get detection function  for detection ..... 15


flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection120(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_120to127[scanID].flr2rdr_detn120to127snr120;
  detection.azimuth = detectionGroup_120to127[scanID].flr2rdr_detn120to127azi120;
  detection.elevation = detectionGroup_120to127[scanID].flr2rdr_detn120to127elevn120;
  detection.range = detectionGroup_120to127[scanID].flr2rdr_detn120to127rnge120;
  detection.range_rate = detectionGroup_120to127[scanID].flr2rdr_detn120to127rng_rate120;
  detection.is_dynamic = detectionGroup_120to127[scanID].flr2rdr_detn120to127dyn_prpty120;
  detection.mode = detectionGroup_120to127[scanID].flr2rdr_detn120to127mode120;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_120to127[scanID].flr2rdr_detn120to127rng_qlty120);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_120to127[scanID].flr2rdr_detn120to127rng_rt_qlty120);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection121(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_120to127[scanID].flr2rdr_detn120to127snr121;
  detection.azimuth = detectionGroup_120to127[scanID].flr2rdr_detn120to127azi121;
  detection.elevation = detectionGroup_120to127[scanID].flr2rdr_detn120to127elevn121;
  detection.range = detectionGroup_120to127[scanID].flr2rdr_detn120to127rnge121;
  detection.range_rate = detectionGroup_120to127[scanID].flr2rdr_detn120to127rng_rate121;
  detection.is_dynamic = detectionGroup_120to127[scanID].flr2rdr_detn120to127dyn_prpty121;
  detection.mode = detectionGroup_120to127[scanID].flr2rdr_detn120to127mode121;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_120to127[scanID].flr2rdr_detn120to127rng_qlty121);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_120to127[scanID].flr2rdr_detn120to127rng_rt_qlty121);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection122(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_120to127[scanID].flr2rdr_detn120to127snr122;
  detection.azimuth = detectionGroup_120to127[scanID].flr2rdr_detn120to127azi122;
  detection.elevation = detectionGroup_120to127[scanID].flr2rdr_detn120to127elevn122;
  detection.range = detectionGroup_120to127[scanID].flr2rdr_detn120to127rnge122;
  detection.range_rate = detectionGroup_120to127[scanID].flr2rdr_detn120to127rng_rate122;
  detection.is_dynamic = detectionGroup_120to127[scanID].flr2rdr_detn120to127dyn_prpty122;
  detection.mode = detectionGroup_120to127[scanID].flr2rdr_detn120to127mode122;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_120to127[scanID].flr2rdr_detn120to127rng_qlty122);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_120to127[scanID].flr2rdr_detn120to127rng_rt_qlty122);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection123(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_120to127[scanID].flr2rdr_detn120to127snr123;
  detection.azimuth = detectionGroup_120to127[scanID].flr2rdr_detn120to127azi123;
  detection.elevation = detectionGroup_120to127[scanID].flr2rdr_detn120to127elevn123;
  detection.range = detectionGroup_120to127[scanID].flr2rdr_detn120to127rnge123;
  detection.range_rate = detectionGroup_120to127[scanID].flr2rdr_detn120to127rng_rate123;
  detection.is_dynamic = detectionGroup_120to127[scanID].flr2rdr_detn120to127dyn_prpty123;
  detection.mode = detectionGroup_120to127[scanID].flr2rdr_detn120to127mode123;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_120to127[scanID].flr2rdr_detn120to127rng_qlty123);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_120to127[scanID].flr2rdr_detn120to127rng_rt_qlty123);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection124(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_120to127[scanID].flr2rdr_detn120to127snr124;
  detection.azimuth = detectionGroup_120to127[scanID].flr2rdr_detn120to127azi124;
  detection.elevation = detectionGroup_120to127[scanID].flr2rdr_detn120to127elevn124;
  detection.range = detectionGroup_120to127[scanID].flr2rdr_detn120to127rnge124;
  detection.range_rate = detectionGroup_120to127[scanID].flr2rdr_detn120to127rng_rate124;
  detection.is_dynamic = detectionGroup_120to127[scanID].flr2rdr_detn120to127dyn_prpty124;
  detection.mode = detectionGroup_120to127[scanID].flr2rdr_detn120to127mode124;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_120to127[scanID].flr2rdr_detn120to127rng_qlty124);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_120to127[scanID].flr2rdr_detn120to127rng_rt_qlty124);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection125(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_120to127[scanID].flr2rdr_detn120to127snr125;
  detection.azimuth = detectionGroup_120to127[scanID].flr2rdr_detn120to127azi125;
  detection.elevation = detectionGroup_120to127[scanID].flr2rdr_detn120to127elevn125;
  detection.range = detectionGroup_120to127[scanID].flr2rdr_detn120to127rnge125;
  detection.range_rate = detectionGroup_120to127[scanID].flr2rdr_detn120to127rng_rate125;
  detection.is_dynamic = detectionGroup_120to127[scanID].flr2rdr_detn120to127dyn_prpty125;
  detection.mode = detectionGroup_120to127[scanID].flr2rdr_detn120to127mode125;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_120to127[scanID].flr2rdr_detn120to127rng_qlty125);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_120to127[scanID].flr2rdr_detn120to127rng_rt_qlty125);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection126(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_120to127[scanID].flr2rdr_detn120to127snr126;
  detection.azimuth = detectionGroup_120to127[scanID].flr2rdr_detn120to127azi126;
  detection.elevation = detectionGroup_120to127[scanID].flr2rdr_detn120to127elevn126;
  detection.range = detectionGroup_120to127[scanID].flr2rdr_detn120to127rnge126;
  detection.range_rate = detectionGroup_120to127[scanID].flr2rdr_detn120to127rng_rate126;
  detection.is_dynamic = detectionGroup_120to127[scanID].flr2rdr_detn120to127dyn_prpty126;
  detection.mode = detectionGroup_120to127[scanID].flr2rdr_detn120to127mode126;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_120to127[scanID].flr2rdr_detn120to127rng_qlty126);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_120to127[scanID].flr2rdr_detn120to127rng_rt_qlty126);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection127(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_120to127[scanID].flr2rdr_detn120to127snr127;
  detection.azimuth = detectionGroup_120to127[scanID].flr2rdr_detn120to127azi127;
  detection.elevation = detectionGroup_120to127[scanID].flr2rdr_detn120to127elevn127;
  detection.range = detectionGroup_120to127[scanID].flr2rdr_detn120to127rnge127;
  detection.range_rate = detectionGroup_120to127[scanID].flr2rdr_detn120to127rng_rate127;
  detection.is_dynamic = detectionGroup_120to127[scanID].flr2rdr_detn120to127dyn_prpty127;
  detection.mode = detectionGroup_120to127[scanID].flr2rdr_detn120to127mode127;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_120to127[scanID].flr2rdr_detn120to127rng_qlty127);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_120to127[scanID].flr2rdr_detn120to127rng_rt_qlty127);

  return detection;
}

void InitialFLRMonitorHal::Impl::store_detection_data_128to135(const initialflrmonitorhal::types::FLR2RdrDetn128to135 detectionGroup, const uint8_t& scanID)
{
  if( !detectionGroup_128to135.count(scanID) )
  {
      detectionGroup_128to135.emplace(std::pair<uint8_t, initialflrmonitorhal::types::FLR2RdrDetn128to135>(scanID, detectionGroup));
      scan_id_counter[scanID]++;
  }
}



 // Get detection function  for detection ..... 16


flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection128(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_128to135[scanID].flr2rdr_detn128to135snr128;
  detection.azimuth = detectionGroup_128to135[scanID].flr2rdr_detn128to135azi128;
  detection.elevation = detectionGroup_128to135[scanID].flr2rdr_detn128to135elevn128;
  detection.range = detectionGroup_128to135[scanID].flr2rdr_detn128to135rnge128;
  detection.range_rate = detectionGroup_128to135[scanID].flr2rdr_detn128to135rng_rate128;
  detection.is_dynamic = detectionGroup_128to135[scanID].flr2rdr_detn128to135dyn_prpty128;
  detection.mode = detectionGroup_128to135[scanID].flr2rdr_detn128to135mode128;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_128to135[scanID].flr2rdr_detn128to135rng_qlty128);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_128to135[scanID].flr2rdr_detn128to135rng_rt_qlty128);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection129(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_128to135[scanID].flr2rdr_detn128to135snr129;
  detection.azimuth = detectionGroup_128to135[scanID].flr2rdr_detn128to135azi129;
  detection.elevation = detectionGroup_128to135[scanID].flr2rdr_detn128to135elevn129;
  detection.range = detectionGroup_128to135[scanID].flr2rdr_detn128to135rnge129;
  detection.range_rate = detectionGroup_128to135[scanID].flr2rdr_detn128to135rng_rate129;
  detection.is_dynamic = detectionGroup_128to135[scanID].flr2rdr_detn128to135dyn_prpty129;
  detection.mode = detectionGroup_128to135[scanID].flr2rdr_detn128to135mode129;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_128to135[scanID].flr2rdr_detn128to135rng_qlty129);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_128to135[scanID].flr2rdr_detn128to135rng_rt_qlty129);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection130(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_128to135[scanID].flr2rdr_detn128to135snr130;
  detection.azimuth = detectionGroup_128to135[scanID].flr2rdr_detn128to135azi130;
  detection.elevation = detectionGroup_128to135[scanID].flr2rdr_detn128to135elevn130;
  detection.range = detectionGroup_128to135[scanID].flr2rdr_detn128to135rnge130;
  detection.range_rate = detectionGroup_128to135[scanID].flr2rdr_detn128to135rng_rate130;
  detection.is_dynamic = detectionGroup_128to135[scanID].flr2rdr_detn128to135dyn_prpty130;
  detection.mode = detectionGroup_128to135[scanID].flr2rdr_detn128to135mode130;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_128to135[scanID].flr2rdr_detn128to135rng_qlty130);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_128to135[scanID].flr2rdr_detn128to135rng_rt_qlty130);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection131(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_128to135[scanID].flr2rdr_detn128to135snr131;
  detection.azimuth = detectionGroup_128to135[scanID].flr2rdr_detn128to135azi131;
  detection.elevation = detectionGroup_128to135[scanID].flr2rdr_detn128to135elevn131;
  detection.range = detectionGroup_128to135[scanID].flr2rdr_detn128to135rnge131;
  detection.range_rate = detectionGroup_128to135[scanID].flr2rdr_detn128to135rng_rate131;
  detection.is_dynamic = detectionGroup_128to135[scanID].flr2rdr_detn128to135dyn_prpty131;
  detection.mode = detectionGroup_128to135[scanID].flr2rdr_detn128to135mode131;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_128to135[scanID].flr2rdr_detn128to135rng_qlty131);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_128to135[scanID].flr2rdr_detn128to135rng_rt_qlty131);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection132(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_128to135[scanID].flr2rdr_detn128to135snr132;
  detection.azimuth = detectionGroup_128to135[scanID].flr2rdr_detn128to135azi132;
  detection.elevation = detectionGroup_128to135[scanID].flr2rdr_detn128to135elevn132;
  detection.range = detectionGroup_128to135[scanID].flr2rdr_detn128to135rnge132;
  detection.range_rate = detectionGroup_128to135[scanID].flr2rdr_detn128to135rng_rate132;
  detection.is_dynamic = detectionGroup_128to135[scanID].flr2rdr_detn128to135dyn_prpty132;
  detection.mode = detectionGroup_128to135[scanID].flr2rdr_detn128to135mode132;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_128to135[scanID].flr2rdr_detn128to135rng_qlty132);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_128to135[scanID].flr2rdr_detn128to135rng_rt_qlty132);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection133(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_128to135[scanID].flr2rdr_detn128to135snr133;
  detection.azimuth = detectionGroup_128to135[scanID].flr2rdr_detn128to135azi133;
  detection.elevation = detectionGroup_128to135[scanID].flr2rdr_detn128to135elevn133;
  detection.range = detectionGroup_128to135[scanID].flr2rdr_detn128to135rnge133;
  detection.range_rate = detectionGroup_128to135[scanID].flr2rdr_detn128to135rng_rate133;
  detection.is_dynamic = detectionGroup_128to135[scanID].flr2rdr_detn128to135dyn_prpty133;
  detection.mode = detectionGroup_128to135[scanID].flr2rdr_detn128to135mode133;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_128to135[scanID].flr2rdr_detn128to135rng_qlty133);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_128to135[scanID].flr2rdr_detn128to135rng_rt_qlty133);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection134(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_128to135[scanID].flr2rdr_detn128to135snr134;
  detection.azimuth = detectionGroup_128to135[scanID].flr2rdr_detn128to135azi134;
  detection.elevation = detectionGroup_128to135[scanID].flr2rdr_detn128to135elevn134;
  detection.range = detectionGroup_128to135[scanID].flr2rdr_detn128to135rnge134;
  detection.range_rate = detectionGroup_128to135[scanID].flr2rdr_detn128to135rng_rate134;
  detection.is_dynamic = detectionGroup_128to135[scanID].flr2rdr_detn128to135dyn_prpty134;
  detection.mode = detectionGroup_128to135[scanID].flr2rdr_detn128to135mode134;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_128to135[scanID].flr2rdr_detn128to135rng_qlty134);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_128to135[scanID].flr2rdr_detn128to135rng_rt_qlty134);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection135(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_128to135[scanID].flr2rdr_detn128to135snr135;
  detection.azimuth = detectionGroup_128to135[scanID].flr2rdr_detn128to135azi135;
  detection.elevation = detectionGroup_128to135[scanID].flr2rdr_detn128to135elevn135;
  detection.range = detectionGroup_128to135[scanID].flr2rdr_detn128to135rnge135;
  detection.range_rate = detectionGroup_128to135[scanID].flr2rdr_detn128to135rng_rate135;
  detection.is_dynamic = detectionGroup_128to135[scanID].flr2rdr_detn128to135dyn_prpty135;
  detection.mode = detectionGroup_128to135[scanID].flr2rdr_detn128to135mode135;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_128to135[scanID].flr2rdr_detn128to135rng_qlty135);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_128to135[scanID].flr2rdr_detn128to135rng_rt_qlty135);

  return detection;
}

void InitialFLRMonitorHal::Impl::store_detection_data_136to143(const initialflrmonitorhal::types::FLR2RdrDetn136to143 detectionGroup, const uint8_t& scanID)
{
  if( !detectionGroup_136to143.count(scanID) )
  {
      detectionGroup_136to143.emplace(std::pair<uint8_t, initialflrmonitorhal::types::FLR2RdrDetn136to143>(scanID, detectionGroup));
      scan_id_counter[scanID]++;
  }
}



 // Get detection function  for detection ..... 17


flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection136(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_136to143[scanID].flr2rdr_detn136to143snr136;
  detection.azimuth = detectionGroup_136to143[scanID].flr2rdr_detn136to143azi136;
  detection.elevation = detectionGroup_136to143[scanID].flr2rdr_detn136to143elevn136;
  detection.range = detectionGroup_136to143[scanID].flr2rdr_detn136to143rnge136;
  detection.range_rate = detectionGroup_136to143[scanID].flr2rdr_detn136to143rng_rate136;
  detection.is_dynamic = detectionGroup_136to143[scanID].flr2rdr_detn136to143dyn_prpty136;
  detection.mode = detectionGroup_136to143[scanID].flr2rdr_detn136to143mode136;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_136to143[scanID].flr2rdr_detn136to143rng_qlty136);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_136to143[scanID].flr2rdr_detn136to143rng_rt_qlty136);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection137(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_136to143[scanID].flr2rdr_detn136to143snr137;
  detection.azimuth = detectionGroup_136to143[scanID].flr2rdr_detn136to143azi137;
  detection.elevation = detectionGroup_136to143[scanID].flr2rdr_detn136to143elevn137;
  detection.range = detectionGroup_136to143[scanID].flr2rdr_detn136to143rnge137;
  detection.range_rate = detectionGroup_136to143[scanID].flr2rdr_detn136to143rng_rate137;
  detection.is_dynamic = detectionGroup_136to143[scanID].flr2rdr_detn136to143dyn_prpty137;
  detection.mode = detectionGroup_136to143[scanID].flr2rdr_detn136to143mode137;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_136to143[scanID].flr2rdr_detn136to143rng_qlty137);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_136to143[scanID].flr2rdr_detn136to143rng_rt_qlty137);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection138(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_136to143[scanID].flr2rdr_detn136to143snr138;
  detection.azimuth = detectionGroup_136to143[scanID].flr2rdr_detn136to143azi138;
  detection.elevation = detectionGroup_136to143[scanID].flr2rdr_detn136to143elevn138;
  detection.range = detectionGroup_136to143[scanID].flr2rdr_detn136to143rnge138;
  detection.range_rate = detectionGroup_136to143[scanID].flr2rdr_detn136to143rng_rate138;
  detection.is_dynamic = detectionGroup_136to143[scanID].flr2rdr_detn136to143dyn_prpty138;
  detection.mode = detectionGroup_136to143[scanID].flr2rdr_detn136to143mode138;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_136to143[scanID].flr2rdr_detn136to143rng_qlty138);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_136to143[scanID].flr2rdr_detn136to143rng_rt_qlty138);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection139(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_136to143[scanID].flr2rdr_detn136to143snr139;
  detection.azimuth = detectionGroup_136to143[scanID].flr2rdr_detn136to143azi139;
  detection.elevation = detectionGroup_136to143[scanID].flr2rdr_detn136to143elevn139;
  detection.range = detectionGroup_136to143[scanID].flr2rdr_detn136to143rnge139;
  detection.range_rate = detectionGroup_136to143[scanID].flr2rdr_detn136to143rng_rate139;
  detection.is_dynamic = detectionGroup_136to143[scanID].flr2rdr_detn136to143dyn_prpty139;
  detection.mode = detectionGroup_136to143[scanID].flr2rdr_detn136to143mode139;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_136to143[scanID].flr2rdr_detn136to143rng_qlty139);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_136to143[scanID].flr2rdr_detn136to143rng_rt_qlty139);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection140(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_136to143[scanID].flr2rdr_detn136to143snr140;
  detection.azimuth = detectionGroup_136to143[scanID].flr2rdr_detn136to143azi140;
  detection.elevation = detectionGroup_136to143[scanID].flr2rdr_detn136to143elevn140;
  detection.range = detectionGroup_136to143[scanID].flr2rdr_detn136to143rnge140;
  detection.range_rate = detectionGroup_136to143[scanID].flr2rdr_detn136to143rng_rate140;
  detection.is_dynamic = detectionGroup_136to143[scanID].flr2rdr_detn136to143dyn_prpty140;
  detection.mode = detectionGroup_136to143[scanID].flr2rdr_detn136to143mode140;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_136to143[scanID].flr2rdr_detn136to143rng_qlty140);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_136to143[scanID].flr2rdr_detn136to143rng_rt_qlty140);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection141(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_136to143[scanID].flr2rdr_detn136to143snr141;
  detection.azimuth = detectionGroup_136to143[scanID].flr2rdr_detn136to143azi141;
  detection.elevation = detectionGroup_136to143[scanID].flr2rdr_detn136to143elevn141;
  detection.range = detectionGroup_136to143[scanID].flr2rdr_detn136to143rnge141;
  detection.range_rate = detectionGroup_136to143[scanID].flr2rdr_detn136to143rng_rate141;
  detection.is_dynamic = detectionGroup_136to143[scanID].flr2rdr_detn136to143dyn_prpty141;
  detection.mode = detectionGroup_136to143[scanID].flr2rdr_detn136to143mode141;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_136to143[scanID].flr2rdr_detn136to143rng_qlty141);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_136to143[scanID].flr2rdr_detn136to143rng_rt_qlty141);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection142(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_136to143[scanID].flr2rdr_detn136to143snr142;
  detection.azimuth = detectionGroup_136to143[scanID].flr2rdr_detn136to143azi142;
  detection.elevation = detectionGroup_136to143[scanID].flr2rdr_detn136to143elevn142;
  detection.range = detectionGroup_136to143[scanID].flr2rdr_detn136to143rnge142;
  detection.range_rate = detectionGroup_136to143[scanID].flr2rdr_detn136to143rng_rate142;
  detection.is_dynamic = detectionGroup_136to143[scanID].flr2rdr_detn136to143dyn_prpty142;
  detection.mode = detectionGroup_136to143[scanID].flr2rdr_detn136to143mode142;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_136to143[scanID].flr2rdr_detn136to143rng_qlty142);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_136to143[scanID].flr2rdr_detn136to143rng_rt_qlty142);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection143(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_136to143[scanID].flr2rdr_detn136to143snr143;
  detection.azimuth = detectionGroup_136to143[scanID].flr2rdr_detn136to143azi143;
  detection.elevation = detectionGroup_136to143[scanID].flr2rdr_detn136to143elevn143;
  detection.range = detectionGroup_136to143[scanID].flr2rdr_detn136to143rnge143;
  detection.range_rate = detectionGroup_136to143[scanID].flr2rdr_detn136to143rng_rate143;
  detection.is_dynamic = detectionGroup_136to143[scanID].flr2rdr_detn136to143dyn_prpty143;
  detection.mode = detectionGroup_136to143[scanID].flr2rdr_detn136to143mode143;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_136to143[scanID].flr2rdr_detn136to143rng_qlty143);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_136to143[scanID].flr2rdr_detn136to143rng_rt_qlty143);

  return detection;
}

void InitialFLRMonitorHal::Impl::store_detection_data_144to151(const initialflrmonitorhal::types::FLR2RdrDetn144to151 detectionGroup, const uint8_t& scanID)
{
  if( !detectionGroup_144to151.count(scanID) )
  {
      detectionGroup_144to151.emplace(std::pair<uint8_t, initialflrmonitorhal::types::FLR2RdrDetn144to151>(scanID, detectionGroup));
      scan_id_counter[scanID]++;
  }
}



 // Get detection function  for detection ..... 18


flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection144(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_144to151[scanID].flr2rdr_detn144to151snr144;
  detection.azimuth = detectionGroup_144to151[scanID].flr2rdr_detn144to151azi144;
  detection.elevation = detectionGroup_144to151[scanID].flr2rdr_detn144to151elevn144;
  detection.range = detectionGroup_144to151[scanID].flr2rdr_detn144to151rnge144;
  detection.range_rate = detectionGroup_144to151[scanID].flr2rdr_detn144to151rng_rate144;
  detection.is_dynamic = detectionGroup_144to151[scanID].flr2rdr_detn144to151dyn_prpty144;
  detection.mode = detectionGroup_144to151[scanID].flr2rdr_detn144to151mode144;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_144to151[scanID].flr2rdr_detn144to151rng_qlty144);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_144to151[scanID].flr2rdr_detn144to151rng_rt_qlty144);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection145(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_144to151[scanID].flr2rdr_detn144to151snr145;
  detection.azimuth = detectionGroup_144to151[scanID].flr2rdr_detn144to151azi145;
  detection.elevation = detectionGroup_144to151[scanID].flr2rdr_detn144to151elevn145;
  detection.range = detectionGroup_144to151[scanID].flr2rdr_detn144to151rnge145;
  detection.range_rate = detectionGroup_144to151[scanID].flr2rdr_detn144to151rng_rate145;
  detection.is_dynamic = detectionGroup_144to151[scanID].flr2rdr_detn144to151dyn_prpty145;
  detection.mode = detectionGroup_144to151[scanID].flr2rdr_detn144to151mode145;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_144to151[scanID].flr2rdr_detn144to151rng_qlty145);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_144to151[scanID].flr2rdr_detn144to151rng_rt_qlty145);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection146(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_144to151[scanID].flr2rdr_detn144to151snr146;
  detection.azimuth = detectionGroup_144to151[scanID].flr2rdr_detn144to151azi146;
  detection.elevation = detectionGroup_144to151[scanID].flr2rdr_detn144to151elevn146;
  detection.range = detectionGroup_144to151[scanID].flr2rdr_detn144to151rnge146;
  detection.range_rate = detectionGroup_144to151[scanID].flr2rdr_detn144to151rng_rate146;
  detection.is_dynamic = detectionGroup_144to151[scanID].flr2rdr_detn144to151dyn_prpty146;
  detection.mode = detectionGroup_144to151[scanID].flr2rdr_detn144to151mode146;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_144to151[scanID].flr2rdr_detn144to151rng_qlty146);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_144to151[scanID].flr2rdr_detn144to151rng_rt_qlty146);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection147(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_144to151[scanID].flr2rdr_detn144to151snr147;
  detection.azimuth = detectionGroup_144to151[scanID].flr2rdr_detn144to151azi147;
  detection.elevation = detectionGroup_144to151[scanID].flr2rdr_detn144to151elevn147;
  detection.range = detectionGroup_144to151[scanID].flr2rdr_detn144to151rnge147;
  detection.range_rate = detectionGroup_144to151[scanID].flr2rdr_detn144to151rng_rate147;
  detection.is_dynamic = detectionGroup_144to151[scanID].flr2rdr_detn144to151dyn_prpty147;
  detection.mode = detectionGroup_144to151[scanID].flr2rdr_detn144to151mode147;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_144to151[scanID].flr2rdr_detn144to151rng_qlty147);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_144to151[scanID].flr2rdr_detn144to151rng_rt_qlty147);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection148(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_144to151[scanID].flr2rdr_detn144to151snr148;
  detection.azimuth = detectionGroup_144to151[scanID].flr2rdr_detn144to151azi148;
  detection.elevation = detectionGroup_144to151[scanID].flr2rdr_detn144to151elevn148;
  detection.range = detectionGroup_144to151[scanID].flr2rdr_detn144to151rnge148;
  detection.range_rate = detectionGroup_144to151[scanID].flr2rdr_detn144to151rng_rate148;
  detection.is_dynamic = detectionGroup_144to151[scanID].flr2rdr_detn144to151dyn_prpty148;
  detection.mode = detectionGroup_144to151[scanID].flr2rdr_detn144to151mode148;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_144to151[scanID].flr2rdr_detn144to151rng_qlty148);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_144to151[scanID].flr2rdr_detn144to151rng_rt_qlty148);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection149(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_144to151[scanID].flr2rdr_detn144to151snr149;
  detection.azimuth = detectionGroup_144to151[scanID].flr2rdr_detn144to151azi149;
  detection.elevation = detectionGroup_144to151[scanID].flr2rdr_detn144to151elevn149;
  detection.range = detectionGroup_144to151[scanID].flr2rdr_detn144to151rnge149;
  detection.range_rate = detectionGroup_144to151[scanID].flr2rdr_detn144to151rng_rate149;
  detection.is_dynamic = detectionGroup_144to151[scanID].flr2rdr_detn144to151dyn_prpty149;
  detection.mode = detectionGroup_144to151[scanID].flr2rdr_detn144to151mode149;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_144to151[scanID].flr2rdr_detn144to151rng_qlty149);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_144to151[scanID].flr2rdr_detn144to151rng_rt_qlty149);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection150(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_144to151[scanID].flr2rdr_detn144to151snr150;
  detection.azimuth = detectionGroup_144to151[scanID].flr2rdr_detn144to151azi150;
  detection.elevation = detectionGroup_144to151[scanID].flr2rdr_detn144to151elevn150;
  detection.range = detectionGroup_144to151[scanID].flr2rdr_detn144to151rnge150;
  detection.range_rate = detectionGroup_144to151[scanID].flr2rdr_detn144to151rng_rate150;
  detection.is_dynamic = detectionGroup_144to151[scanID].flr2rdr_detn144to151dyn_prpty150;
  detection.mode = detectionGroup_144to151[scanID].flr2rdr_detn144to151mode150;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_144to151[scanID].flr2rdr_detn144to151rng_qlty150);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_144to151[scanID].flr2rdr_detn144to151rng_rt_qlty150);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection151(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_144to151[scanID].flr2rdr_detn144to151snr151;
  detection.azimuth = detectionGroup_144to151[scanID].flr2rdr_detn144to151azi151;
  detection.elevation = detectionGroup_144to151[scanID].flr2rdr_detn144to151elevn151;
  detection.range = detectionGroup_144to151[scanID].flr2rdr_detn144to151rnge151;
  detection.range_rate = detectionGroup_144to151[scanID].flr2rdr_detn144to151rng_rate151;
  detection.is_dynamic = detectionGroup_144to151[scanID].flr2rdr_detn144to151dyn_prpty151;
  detection.mode = detectionGroup_144to151[scanID].flr2rdr_detn144to151mode151;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_144to151[scanID].flr2rdr_detn144to151rng_qlty151);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_144to151[scanID].flr2rdr_detn144to151rng_rt_qlty151);

  return detection;
}

void InitialFLRMonitorHal::Impl::store_detection_data_152to159(const initialflrmonitorhal::types::FLR2RdrDetn152to159 detectionGroup, const uint8_t& scanID)
{
  if( !detectionGroup_152to159.count(scanID) )
  {
      detectionGroup_152to159.emplace(std::pair<uint8_t, initialflrmonitorhal::types::FLR2RdrDetn152to159>(scanID, detectionGroup));
      scan_id_counter[scanID]++;
  }
}



 // Get detection function  for detection ..... 19


flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection152(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_152to159[scanID].flr2rdr_detn152to159snr152;
  detection.azimuth = detectionGroup_152to159[scanID].flr2rdr_detn152to159azi152;
  detection.elevation = detectionGroup_152to159[scanID].flr2rdr_detn152to159elevn152;
  detection.range = detectionGroup_152to159[scanID].flr2rdr_detn152to159rnge152;
  detection.range_rate = detectionGroup_152to159[scanID].flr2rdr_detn152to159rng_rate152;
  detection.is_dynamic = detectionGroup_152to159[scanID].flr2rdr_detn152to159dyn_prpty152;
  detection.mode = detectionGroup_152to159[scanID].flr2rdr_detn152to159mode152;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_152to159[scanID].flr2rdr_detn152to159rng_qlty152);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_152to159[scanID].flr2rdr_detn152to159rng_rt_qlty152);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection153(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_152to159[scanID].flr2rdr_detn152to159snr153;
  detection.azimuth = detectionGroup_152to159[scanID].flr2rdr_detn152to159azi153;
  detection.elevation = detectionGroup_152to159[scanID].flr2rdr_detn152to159elevn153;
  detection.range = detectionGroup_152to159[scanID].flr2rdr_detn152to159rnge153;
  detection.range_rate = detectionGroup_152to159[scanID].flr2rdr_detn152to159rng_rate153;
  detection.is_dynamic = detectionGroup_152to159[scanID].flr2rdr_detn152to159dyn_prpty153;
  detection.mode = detectionGroup_152to159[scanID].flr2rdr_detn152to159mode153;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_152to159[scanID].flr2rdr_detn152to159rng_qlty153);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_152to159[scanID].flr2rdr_detn152to159rng_rt_qlty153);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection154(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_152to159[scanID].flr2rdr_detn152to159snr154;
  detection.azimuth = detectionGroup_152to159[scanID].flr2rdr_detn152to159azi154;
  detection.elevation = detectionGroup_152to159[scanID].flr2rdr_detn152to159elevn154;
  detection.range = detectionGroup_152to159[scanID].flr2rdr_detn152to159rnge154;
  detection.range_rate = detectionGroup_152to159[scanID].flr2rdr_detn152to159rng_rate154;
  detection.is_dynamic = detectionGroup_152to159[scanID].flr2rdr_detn152to159dyn_prpty154;
  detection.mode = detectionGroup_152to159[scanID].flr2rdr_detn152to159mode154;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_152to159[scanID].flr2rdr_detn152to159rng_qlty154);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_152to159[scanID].flr2rdr_detn152to159rng_rt_qlty154);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection155(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_152to159[scanID].flr2rdr_detn152to159snr155;
  detection.azimuth = detectionGroup_152to159[scanID].flr2rdr_detn152to159azi155;
  detection.elevation = detectionGroup_152to159[scanID].flr2rdr_detn152to159elevn155;
  detection.range = detectionGroup_152to159[scanID].flr2rdr_detn152to159rnge155;
  detection.range_rate = detectionGroup_152to159[scanID].flr2rdr_detn152to159rng_rate155;
  detection.is_dynamic = detectionGroup_152to159[scanID].flr2rdr_detn152to159dyn_prpty155;
  detection.mode = detectionGroup_152to159[scanID].flr2rdr_detn152to159mode155;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_152to159[scanID].flr2rdr_detn152to159rng_qlty155);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_152to159[scanID].flr2rdr_detn152to159rng_rt_qlty155);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection156(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_152to159[scanID].flr2rdr_detn152to159snr156;
  detection.azimuth = detectionGroup_152to159[scanID].flr2rdr_detn152to159azi156;
  detection.elevation = detectionGroup_152to159[scanID].flr2rdr_detn152to159elevn156;
  detection.range = detectionGroup_152to159[scanID].flr2rdr_detn152to159rnge156;
  detection.range_rate = detectionGroup_152to159[scanID].flr2rdr_detn152to159rng_rate156;
  detection.is_dynamic = detectionGroup_152to159[scanID].flr2rdr_detn152to159dyn_prpty156;
  detection.mode = detectionGroup_152to159[scanID].flr2rdr_detn152to159mode156;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_152to159[scanID].flr2rdr_detn152to159rng_qlty156);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_152to159[scanID].flr2rdr_detn152to159rng_rt_qlty156);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection157(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_152to159[scanID].flr2rdr_detn152to159snr157;
  detection.azimuth = detectionGroup_152to159[scanID].flr2rdr_detn152to159azi157;
  detection.elevation = detectionGroup_152to159[scanID].flr2rdr_detn152to159elevn157;
  detection.range = detectionGroup_152to159[scanID].flr2rdr_detn152to159rnge157;
  detection.range_rate = detectionGroup_152to159[scanID].flr2rdr_detn152to159rng_rate157;
  detection.is_dynamic = detectionGroup_152to159[scanID].flr2rdr_detn152to159dyn_prpty157;
  detection.mode = detectionGroup_152to159[scanID].flr2rdr_detn152to159mode157;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_152to159[scanID].flr2rdr_detn152to159rng_qlty157);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_152to159[scanID].flr2rdr_detn152to159rng_rt_qlty157);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection158(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_152to159[scanID].flr2rdr_detn152to159snr158;
  detection.azimuth = detectionGroup_152to159[scanID].flr2rdr_detn152to159azi158;
  detection.elevation = detectionGroup_152to159[scanID].flr2rdr_detn152to159elevn158;
  detection.range = detectionGroup_152to159[scanID].flr2rdr_detn152to159rnge158;
  detection.range_rate = detectionGroup_152to159[scanID].flr2rdr_detn152to159rng_rate158;
  detection.is_dynamic = detectionGroup_152to159[scanID].flr2rdr_detn152to159dyn_prpty158;
  detection.mode = detectionGroup_152to159[scanID].flr2rdr_detn152to159mode158;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_152to159[scanID].flr2rdr_detn152to159rng_qlty158);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_152to159[scanID].flr2rdr_detn152to159rng_rt_qlty158);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection159(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_152to159[scanID].flr2rdr_detn152to159snr159;
  detection.azimuth = detectionGroup_152to159[scanID].flr2rdr_detn152to159azi159;
  detection.elevation = detectionGroup_152to159[scanID].flr2rdr_detn152to159elevn159;
  detection.range = detectionGroup_152to159[scanID].flr2rdr_detn152to159rnge159;
  detection.range_rate = detectionGroup_152to159[scanID].flr2rdr_detn152to159rng_rate159;
  detection.is_dynamic = detectionGroup_152to159[scanID].flr2rdr_detn152to159dyn_prpty159;
  detection.mode = detectionGroup_152to159[scanID].flr2rdr_detn152to159mode159;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_152to159[scanID].flr2rdr_detn152to159rng_qlty159);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_152to159[scanID].flr2rdr_detn152to159rng_rt_qlty159);

  return detection;
}

void InitialFLRMonitorHal::Impl::store_detection_data_160to167(const initialflrmonitorhal::types::FLR2RdrDetn160to167 detectionGroup, const uint8_t& scanID)
{
  if( !detectionGroup_160to167.count(scanID) )
  {
      detectionGroup_160to167.emplace(std::pair<uint8_t, initialflrmonitorhal::types::FLR2RdrDetn160to167>(scanID, detectionGroup));
      scan_id_counter[scanID]++;
  }
}



 // Get detection function  for detection ..... 20


flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection160(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_160to167[scanID].flr2rdr_detn160to167snr160;
  detection.azimuth = detectionGroup_160to167[scanID].flr2rdr_detn160to167azi160;
  detection.elevation = detectionGroup_160to167[scanID].flr2rdr_detn160to167elevn160;
  detection.range = detectionGroup_160to167[scanID].flr2rdr_detn160to167rnge160;
  detection.range_rate = detectionGroup_160to167[scanID].flr2rdr_detn160to167rng_rate160;
  detection.is_dynamic = detectionGroup_160to167[scanID].flr2rdr_detn160to167dyn_prpty160;
  detection.mode = detectionGroup_160to167[scanID].flr2rdr_detn160to167mode160;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_160to167[scanID].flr2rdr_detn160to167rng_qlty160);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_160to167[scanID].flr2rdr_detn160to167rng_rt_qlty160);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection161(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_160to167[scanID].flr2rdr_detn160to167snr161;
  detection.azimuth = detectionGroup_160to167[scanID].flr2rdr_detn160to167azi161;
  detection.elevation = detectionGroup_160to167[scanID].flr2rdr_detn160to167elevn161;
  detection.range = detectionGroup_160to167[scanID].flr2rdr_detn160to167rnge161;
  detection.range_rate = detectionGroup_160to167[scanID].flr2rdr_detn160to167rng_rate161;
  detection.is_dynamic = detectionGroup_160to167[scanID].flr2rdr_detn160to167dyn_prpty161;
  detection.mode = detectionGroup_160to167[scanID].flr2rdr_detn160to167mode161;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_160to167[scanID].flr2rdr_detn160to167rng_qlty161);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_160to167[scanID].flr2rdr_detn160to167rng_rt_qlty161);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection162(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_160to167[scanID].flr2rdr_detn160to167snr162;
  detection.azimuth = detectionGroup_160to167[scanID].flr2rdr_detn160to167azi162;
  detection.elevation = detectionGroup_160to167[scanID].flr2rdr_detn160to167elevn162;
  detection.range = detectionGroup_160to167[scanID].flr2rdr_detn160to167rnge162;
  detection.range_rate = detectionGroup_160to167[scanID].flr2rdr_detn160to167rng_rate162;
  detection.is_dynamic = detectionGroup_160to167[scanID].flr2rdr_detn160to167dyn_prpty162;
  detection.mode = detectionGroup_160to167[scanID].flr2rdr_detn160to167mode162;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_160to167[scanID].flr2rdr_detn160to167rng_qlty162);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_160to167[scanID].flr2rdr_detn160to167rng_rt_qlty162);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection163(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_160to167[scanID].flr2rdr_detn160to167snr163;
  detection.azimuth = detectionGroup_160to167[scanID].flr2rdr_detn160to167azi163;
  detection.elevation = detectionGroup_160to167[scanID].flr2rdr_detn160to167elevn163;
  detection.range = detectionGroup_160to167[scanID].flr2rdr_detn160to167rnge163;
  detection.range_rate = detectionGroup_160to167[scanID].flr2rdr_detn160to167rng_rate163;
  detection.is_dynamic = detectionGroup_160to167[scanID].flr2rdr_detn160to167dyn_prpty163;
  detection.mode = detectionGroup_160to167[scanID].flr2rdr_detn160to167mode163;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_160to167[scanID].flr2rdr_detn160to167rng_qlty163);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_160to167[scanID].flr2rdr_detn160to167rng_rt_qlty163);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection164(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_160to167[scanID].flr2rdr_detn160to167snr164;
  detection.azimuth = detectionGroup_160to167[scanID].flr2rdr_detn160to167azi164;
  detection.elevation = detectionGroup_160to167[scanID].flr2rdr_detn160to167elevn164;
  detection.range = detectionGroup_160to167[scanID].flr2rdr_detn160to167rnge164;
  detection.range_rate = detectionGroup_160to167[scanID].flr2rdr_detn160to167rng_rate164;
  detection.is_dynamic = detectionGroup_160to167[scanID].flr2rdr_detn160to167dyn_prpty164;
  detection.mode = detectionGroup_160to167[scanID].flr2rdr_detn160to167mode164;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_160to167[scanID].flr2rdr_detn160to167rng_qlty164);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_160to167[scanID].flr2rdr_detn160to167rng_rt_qlty164);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection165(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_160to167[scanID].flr2rdr_detn160to167snr165;
  detection.azimuth = detectionGroup_160to167[scanID].flr2rdr_detn160to167azi165;
  detection.elevation = detectionGroup_160to167[scanID].flr2rdr_detn160to167elevn165;
  detection.range = detectionGroup_160to167[scanID].flr2rdr_detn160to167rnge165;
  detection.range_rate = detectionGroup_160to167[scanID].flr2rdr_detn160to167rng_rate165;
  detection.is_dynamic = detectionGroup_160to167[scanID].flr2rdr_detn160to167dyn_prpty165;
  detection.mode = detectionGroup_160to167[scanID].flr2rdr_detn160to167mode165;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_160to167[scanID].flr2rdr_detn160to167rng_qlty165);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_160to167[scanID].flr2rdr_detn160to167rng_rt_qlty165);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection166(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_160to167[scanID].flr2rdr_detn160to167snr166;
  detection.azimuth = detectionGroup_160to167[scanID].flr2rdr_detn160to167azi166;
  detection.elevation = detectionGroup_160to167[scanID].flr2rdr_detn160to167elevn166;
  detection.range = detectionGroup_160to167[scanID].flr2rdr_detn160to167rnge166;
  detection.range_rate = detectionGroup_160to167[scanID].flr2rdr_detn160to167rng_rate166;
  detection.is_dynamic = detectionGroup_160to167[scanID].flr2rdr_detn160to167dyn_prpty166;
  detection.mode = detectionGroup_160to167[scanID].flr2rdr_detn160to167mode166;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_160to167[scanID].flr2rdr_detn160to167rng_qlty166);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_160to167[scanID].flr2rdr_detn160to167rng_rt_qlty166);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection167(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_160to167[scanID].flr2rdr_detn160to167snr167;
  detection.azimuth = detectionGroup_160to167[scanID].flr2rdr_detn160to167azi167;
  detection.elevation = detectionGroup_160to167[scanID].flr2rdr_detn160to167elevn167;
  detection.range = detectionGroup_160to167[scanID].flr2rdr_detn160to167rnge167;
  detection.range_rate = detectionGroup_160to167[scanID].flr2rdr_detn160to167rng_rate167;
  detection.is_dynamic = detectionGroup_160to167[scanID].flr2rdr_detn160to167dyn_prpty167;
  detection.mode = detectionGroup_160to167[scanID].flr2rdr_detn160to167mode167;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_160to167[scanID].flr2rdr_detn160to167rng_qlty167);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_160to167[scanID].flr2rdr_detn160to167rng_rt_qlty167);

  return detection;
}

void InitialFLRMonitorHal::Impl::store_detection_data_168to175(const initialflrmonitorhal::types::FLR2RdrDetn168to175 detectionGroup, const uint8_t& scanID)
{
  if( !detectionGroup_168to175.count(scanID) )
  {
      detectionGroup_168to175.emplace(std::pair<uint8_t, initialflrmonitorhal::types::FLR2RdrDetn168to175>(scanID, detectionGroup));
      scan_id_counter[scanID]++;
  }
}



 // Get detection function  for detection ..... 21


flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection168(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_168to175[scanID].flr2rdr_detn168to175snr168;
  detection.azimuth = detectionGroup_168to175[scanID].flr2rdr_detn168to175azi168;
  detection.elevation = detectionGroup_168to175[scanID].flr2rdr_detn168to175elevn168;
  detection.range = detectionGroup_168to175[scanID].flr2rdr_detn168to175rnge168;
  detection.range_rate = detectionGroup_168to175[scanID].flr2rdr_detn168to175rng_rate168;
  detection.is_dynamic = detectionGroup_168to175[scanID].flr2rdr_detn168to175dyn_prpty168;
  detection.mode = detectionGroup_168to175[scanID].flr2rdr_detn168to175mode168;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_168to175[scanID].flr2rdr_detn168to175rng_qlty168);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_168to175[scanID].flr2rdr_detn168to175rng_rt_qlty168);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection169(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_168to175[scanID].flr2rdr_detn168to175snr169;
  detection.azimuth = detectionGroup_168to175[scanID].flr2rdr_detn168to175azi169;
  detection.elevation = detectionGroup_168to175[scanID].flr2rdr_detn168to175elevn169;
  detection.range = detectionGroup_168to175[scanID].flr2rdr_detn168to175rnge169;
  detection.range_rate = detectionGroup_168to175[scanID].flr2rdr_detn168to175rng_rate169;
  detection.is_dynamic = detectionGroup_168to175[scanID].flr2rdr_detn168to175dyn_prpty169;
  detection.mode = detectionGroup_168to175[scanID].flr2rdr_detn168to175mode169;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_168to175[scanID].flr2rdr_detn168to175rng_qlty169);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_168to175[scanID].flr2rdr_detn168to175rng_rt_qlty169);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection170(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_168to175[scanID].flr2rdr_detn168to175snr170;
  detection.azimuth = detectionGroup_168to175[scanID].flr2rdr_detn168to175azi170;
  detection.elevation = detectionGroup_168to175[scanID].flr2rdr_detn168to175elevn170;
  detection.range = detectionGroup_168to175[scanID].flr2rdr_detn168to175rnge170;
  detection.range_rate = detectionGroup_168to175[scanID].flr2rdr_detn168to175rng_rate170;
  detection.is_dynamic = detectionGroup_168to175[scanID].flr2rdr_detn168to175dyn_prpty170;
  detection.mode = detectionGroup_168to175[scanID].flr2rdr_detn168to175mode170;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_168to175[scanID].flr2rdr_detn168to175rng_qlty170);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_168to175[scanID].flr2rdr_detn168to175rng_rt_qlty170);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection171(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_168to175[scanID].flr2rdr_detn168to175snr171;
  detection.azimuth = detectionGroup_168to175[scanID].flr2rdr_detn168to175azi171;
  detection.elevation = detectionGroup_168to175[scanID].flr2rdr_detn168to175elevn171;
  detection.range = detectionGroup_168to175[scanID].flr2rdr_detn168to175rnge171;
  detection.range_rate = detectionGroup_168to175[scanID].flr2rdr_detn168to175rng_rate171;
  detection.is_dynamic = detectionGroup_168to175[scanID].flr2rdr_detn168to175dyn_prpty171;
  detection.mode = detectionGroup_168to175[scanID].flr2rdr_detn168to175mode171;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_168to175[scanID].flr2rdr_detn168to175rng_qlty171);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_168to175[scanID].flr2rdr_detn168to175rng_rt_qlty171);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection172(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_168to175[scanID].flr2rdr_detn168to175snr172;
  detection.azimuth = detectionGroup_168to175[scanID].flr2rdr_detn168to175azi172;
  detection.elevation = detectionGroup_168to175[scanID].flr2rdr_detn168to175elevn172;
  detection.range = detectionGroup_168to175[scanID].flr2rdr_detn168to175rnge172;
  detection.range_rate = detectionGroup_168to175[scanID].flr2rdr_detn168to175rng_rate172;
  detection.is_dynamic = detectionGroup_168to175[scanID].flr2rdr_detn168to175dyn_prpty172;
  detection.mode = detectionGroup_168to175[scanID].flr2rdr_detn168to175mode172;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_168to175[scanID].flr2rdr_detn168to175rng_qlty172);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_168to175[scanID].flr2rdr_detn168to175rng_rt_qlty172);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection173(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_168to175[scanID].flr2rdr_detn168to175snr173;
  detection.azimuth = detectionGroup_168to175[scanID].flr2rdr_detn168to175azi173;
  detection.elevation = detectionGroup_168to175[scanID].flr2rdr_detn168to175elevn173;
  detection.range = detectionGroup_168to175[scanID].flr2rdr_detn168to175rnge173;
  detection.range_rate = detectionGroup_168to175[scanID].flr2rdr_detn168to175rng_rate173;
  detection.is_dynamic = detectionGroup_168to175[scanID].flr2rdr_detn168to175dyn_prpty173;
  detection.mode = detectionGroup_168to175[scanID].flr2rdr_detn168to175mode173;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_168to175[scanID].flr2rdr_detn168to175rng_qlty173);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_168to175[scanID].flr2rdr_detn168to175rng_rt_qlty173);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection174(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_168to175[scanID].flr2rdr_detn168to175snr174;
  detection.azimuth = detectionGroup_168to175[scanID].flr2rdr_detn168to175azi174;
  detection.elevation = detectionGroup_168to175[scanID].flr2rdr_detn168to175elevn174;
  detection.range = detectionGroup_168to175[scanID].flr2rdr_detn168to175rnge174;
  detection.range_rate = detectionGroup_168to175[scanID].flr2rdr_detn168to175rng_rate174;
  detection.is_dynamic = detectionGroup_168to175[scanID].flr2rdr_detn168to175dyn_prpty174;
  detection.mode = detectionGroup_168to175[scanID].flr2rdr_detn168to175mode174;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_168to175[scanID].flr2rdr_detn168to175rng_qlty174);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_168to175[scanID].flr2rdr_detn168to175rng_rt_qlty174);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection175(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_168to175[scanID].flr2rdr_detn168to175snr175;
  detection.azimuth = detectionGroup_168to175[scanID].flr2rdr_detn168to175azi175;
  detection.elevation = detectionGroup_168to175[scanID].flr2rdr_detn168to175elevn175;
  detection.range = detectionGroup_168to175[scanID].flr2rdr_detn168to175rnge175;
  detection.range_rate = detectionGroup_168to175[scanID].flr2rdr_detn168to175rng_rate175;
  detection.is_dynamic = detectionGroup_168to175[scanID].flr2rdr_detn168to175dyn_prpty175;
  detection.mode = detectionGroup_168to175[scanID].flr2rdr_detn168to175mode175;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_168to175[scanID].flr2rdr_detn168to175rng_qlty175);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_168to175[scanID].flr2rdr_detn168to175rng_rt_qlty175);

  return detection;
}

void InitialFLRMonitorHal::Impl::store_detection_data_176to183(const initialflrmonitorhal::types::FLR2RdrDetn176to183 detectionGroup, const uint8_t& scanID)
{
  if( !detectionGroup_176to183.count(scanID) )
  {
      detectionGroup_176to183.emplace(std::pair<uint8_t, initialflrmonitorhal::types::FLR2RdrDetn176to183>(scanID, detectionGroup));
      scan_id_counter[scanID]++;
  }
}



 // Get detection function  for detection ..... 22


flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection176(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_176to183[scanID].flr2rdr_detn176to183snr176;
  detection.azimuth = detectionGroup_176to183[scanID].flr2rdr_detn176to183azi176;
  detection.elevation = detectionGroup_176to183[scanID].flr2rdr_detn176to183elevn176;
  detection.range = detectionGroup_176to183[scanID].flr2rdr_detn176to183rnge176;
  detection.range_rate = detectionGroup_176to183[scanID].flr2rdr_detn176to183rng_rate176;
  detection.is_dynamic = detectionGroup_176to183[scanID].flr2rdr_detn176to183dyn_prpty176;
  detection.mode = detectionGroup_176to183[scanID].flr2rdr_detn176to183mode176;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_176to183[scanID].flr2rdr_detn176to183rng_qlty176);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_176to183[scanID].flr2rdr_detn176to183rng_rt_qlty176);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection177(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_176to183[scanID].flr2rdr_detn176to183snr177;
  detection.azimuth = detectionGroup_176to183[scanID].flr2rdr_detn176to183azi177;
  detection.elevation = detectionGroup_176to183[scanID].flr2rdr_detn176to183elevn177;
  detection.range = detectionGroup_176to183[scanID].flr2rdr_detn176to183rnge177;
  detection.range_rate = detectionGroup_176to183[scanID].flr2rdr_detn176to183rng_rate177;
  detection.is_dynamic = detectionGroup_176to183[scanID].flr2rdr_detn176to183dyn_prpty177;
  detection.mode = detectionGroup_176to183[scanID].flr2rdr_detn176to183mode177;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_176to183[scanID].flr2rdr_detn176to183rng_qlty177);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_176to183[scanID].flr2rdr_detn176to183rng_rt_qlty177);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection178(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_176to183[scanID].flr2rdr_detn176to183snr178;
  detection.azimuth = detectionGroup_176to183[scanID].flr2rdr_detn176to183azi178;
  detection.elevation = detectionGroup_176to183[scanID].flr2rdr_detn176to183elevn178;
  detection.range = detectionGroup_176to183[scanID].flr2rdr_detn176to183rnge178;
  detection.range_rate = detectionGroup_176to183[scanID].flr2rdr_detn176to183rng_rate178;
  detection.is_dynamic = detectionGroup_176to183[scanID].flr2rdr_detn176to183dyn_prpty178;
  detection.mode = detectionGroup_176to183[scanID].flr2rdr_detn176to183mode178;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_176to183[scanID].flr2rdr_detn176to183rng_qlty178);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_176to183[scanID].flr2rdr_detn176to183rng_rt_qlty178);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection179(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_176to183[scanID].flr2rdr_detn176to183snr179;
  detection.azimuth = detectionGroup_176to183[scanID].flr2rdr_detn176to183azi179;
  detection.elevation = detectionGroup_176to183[scanID].flr2rdr_detn176to183elevn179;
  detection.range = detectionGroup_176to183[scanID].flr2rdr_detn176to183rnge179;
  detection.range_rate = detectionGroup_176to183[scanID].flr2rdr_detn176to183rng_rate179;
  detection.is_dynamic = detectionGroup_176to183[scanID].flr2rdr_detn176to183dyn_prpty179;
  detection.mode = detectionGroup_176to183[scanID].flr2rdr_detn176to183mode179;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_176to183[scanID].flr2rdr_detn176to183rng_qlty179);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_176to183[scanID].flr2rdr_detn176to183rng_rt_qlty179);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection180(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_176to183[scanID].flr2rdr_detn176to183snr180;
  detection.azimuth = detectionGroup_176to183[scanID].flr2rdr_detn176to183azi180;
  detection.elevation = detectionGroup_176to183[scanID].flr2rdr_detn176to183elevn180;
  detection.range = detectionGroup_176to183[scanID].flr2rdr_detn176to183rnge180;
  detection.range_rate = detectionGroup_176to183[scanID].flr2rdr_detn176to183rng_rate180;
  detection.is_dynamic = detectionGroup_176to183[scanID].flr2rdr_detn176to183dyn_prpty180;
  detection.mode = detectionGroup_176to183[scanID].flr2rdr_detn176to183mode180;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_176to183[scanID].flr2rdr_detn176to183rng_qlty180);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_176to183[scanID].flr2rdr_detn176to183rng_rt_qlty180);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection181(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_176to183[scanID].flr2rdr_detn176to183snr181;
  detection.azimuth = detectionGroup_176to183[scanID].flr2rdr_detn176to183azi181;
  detection.elevation = detectionGroup_176to183[scanID].flr2rdr_detn176to183elevn181;
  detection.range = detectionGroup_176to183[scanID].flr2rdr_detn176to183rnge181;
  detection.range_rate = detectionGroup_176to183[scanID].flr2rdr_detn176to183rng_rate181;
  detection.is_dynamic = detectionGroup_176to183[scanID].flr2rdr_detn176to183dyn_prpty181;
  detection.mode = detectionGroup_176to183[scanID].flr2rdr_detn176to183mode181;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_176to183[scanID].flr2rdr_detn176to183rng_qlty181);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_176to183[scanID].flr2rdr_detn176to183rng_rt_qlty181);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection182(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_176to183[scanID].flr2rdr_detn176to183snr182;
  detection.azimuth = detectionGroup_176to183[scanID].flr2rdr_detn176to183azi182;
  detection.elevation = detectionGroup_176to183[scanID].flr2rdr_detn176to183elevn182;
  detection.range = detectionGroup_176to183[scanID].flr2rdr_detn176to183rnge182;
  detection.range_rate = detectionGroup_176to183[scanID].flr2rdr_detn176to183rng_rate182;
  detection.is_dynamic = detectionGroup_176to183[scanID].flr2rdr_detn176to183dyn_prpty182;
  detection.mode = detectionGroup_176to183[scanID].flr2rdr_detn176to183mode182;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_176to183[scanID].flr2rdr_detn176to183rng_qlty182);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_176to183[scanID].flr2rdr_detn176to183rng_rt_qlty182);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection183(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_176to183[scanID].flr2rdr_detn176to183snr183;
  detection.azimuth = detectionGroup_176to183[scanID].flr2rdr_detn176to183azi183;
  detection.elevation = detectionGroup_176to183[scanID].flr2rdr_detn176to183elevn183;
  detection.range = detectionGroup_176to183[scanID].flr2rdr_detn176to183rnge183;
  detection.range_rate = detectionGroup_176to183[scanID].flr2rdr_detn176to183rng_rate183;
  detection.is_dynamic = detectionGroup_176to183[scanID].flr2rdr_detn176to183dyn_prpty183;
  detection.mode = detectionGroup_176to183[scanID].flr2rdr_detn176to183mode183;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_176to183[scanID].flr2rdr_detn176to183rng_qlty183);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_176to183[scanID].flr2rdr_detn176to183rng_rt_qlty183);

  return detection;
}

void InitialFLRMonitorHal::Impl::store_detection_data_184to191(const initialflrmonitorhal::types::FLR2RdrDetn184to191 detectionGroup, const uint8_t& scanID)
{
  if( !detectionGroup_184to191.count(scanID) )
  {
      detectionGroup_184to191.emplace(std::pair<uint8_t, initialflrmonitorhal::types::FLR2RdrDetn184to191>(scanID, detectionGroup));
      scan_id_counter[scanID]++;
  }
}



 // Get detection function  for detection ..... 23


flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection184(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_184to191[scanID].flr2rdr_detn184to191snr184;
  detection.azimuth = detectionGroup_184to191[scanID].flr2rdr_detn184to191azi184;
  detection.elevation = detectionGroup_184to191[scanID].flr2rdr_detn184to191elevn184;
  detection.range = detectionGroup_184to191[scanID].flr2rdr_detn184to191rnge184;
  detection.range_rate = detectionGroup_184to191[scanID].flr2rdr_detn184to191rng_rate184;
  detection.is_dynamic = detectionGroup_184to191[scanID].flr2rdr_detn184to191dyn_prpty184;
  detection.mode = detectionGroup_184to191[scanID].flr2rdr_detn184to191mode184;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_184to191[scanID].flr2rdr_detn184to191rng_qlty184);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_184to191[scanID].flr2rdr_detn184to191rng_rt_qlty184);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection185(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_184to191[scanID].flr2rdr_detn184to191snr185;
  detection.azimuth = detectionGroup_184to191[scanID].flr2rdr_detn184to191azi185;
  detection.elevation = detectionGroup_184to191[scanID].flr2rdr_detn184to191elevn185;
  detection.range = detectionGroup_184to191[scanID].flr2rdr_detn184to191rnge185;
  detection.range_rate = detectionGroup_184to191[scanID].flr2rdr_detn184to191rng_rate185;
  detection.is_dynamic = detectionGroup_184to191[scanID].flr2rdr_detn184to191dyn_prpty185;
  detection.mode = detectionGroup_184to191[scanID].flr2rdr_detn184to191mode185;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_184to191[scanID].flr2rdr_detn184to191rng_qlty185);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_184to191[scanID].flr2rdr_detn184to191rng_rt_qlty185);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection186(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_184to191[scanID].flr2rdr_detn184to191snr186;
  detection.azimuth = detectionGroup_184to191[scanID].flr2rdr_detn184to191azi186;
  detection.elevation = detectionGroup_184to191[scanID].flr2rdr_detn184to191elevn186;
  detection.range = detectionGroup_184to191[scanID].flr2rdr_detn184to191rnge186;
  detection.range_rate = detectionGroup_184to191[scanID].flr2rdr_detn184to191rng_rate186;
  detection.is_dynamic = detectionGroup_184to191[scanID].flr2rdr_detn184to191dyn_prpty186;
  detection.mode = detectionGroup_184to191[scanID].flr2rdr_detn184to191mode186;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_184to191[scanID].flr2rdr_detn184to191rng_qlty186);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_184to191[scanID].flr2rdr_detn184to191rng_rt_qlty186);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection187(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_184to191[scanID].flr2rdr_detn184to191snr187;
  detection.azimuth = detectionGroup_184to191[scanID].flr2rdr_detn184to191azi187;
  detection.elevation = detectionGroup_184to191[scanID].flr2rdr_detn184to191elevn187;
  detection.range = detectionGroup_184to191[scanID].flr2rdr_detn184to191rnge187;
  detection.range_rate = detectionGroup_184to191[scanID].flr2rdr_detn184to191rng_rate187;
  detection.is_dynamic = detectionGroup_184to191[scanID].flr2rdr_detn184to191dyn_prpty187;
  detection.mode = detectionGroup_184to191[scanID].flr2rdr_detn184to191mode187;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_184to191[scanID].flr2rdr_detn184to191rng_qlty187);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_184to191[scanID].flr2rdr_detn184to191rng_rt_qlty187);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection188(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_184to191[scanID].flr2rdr_detn184to191snr188;
  detection.azimuth = detectionGroup_184to191[scanID].flr2rdr_detn184to191azi188;
  detection.elevation = detectionGroup_184to191[scanID].flr2rdr_detn184to191elevn188;
  detection.range = detectionGroup_184to191[scanID].flr2rdr_detn184to191rnge188;
  detection.range_rate = detectionGroup_184to191[scanID].flr2rdr_detn184to191rng_rate188;
  detection.is_dynamic = detectionGroup_184to191[scanID].flr2rdr_detn184to191dyn_prpty188;
  detection.mode = detectionGroup_184to191[scanID].flr2rdr_detn184to191mode188;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_184to191[scanID].flr2rdr_detn184to191rng_qlty188);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_184to191[scanID].flr2rdr_detn184to191rng_rt_qlty188);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection189(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_184to191[scanID].flr2rdr_detn184to191snr189;
  detection.azimuth = detectionGroup_184to191[scanID].flr2rdr_detn184to191azi189;
  detection.elevation = detectionGroup_184to191[scanID].flr2rdr_detn184to191elevn189;
  detection.range = detectionGroup_184to191[scanID].flr2rdr_detn184to191rnge189;
  detection.range_rate = detectionGroup_184to191[scanID].flr2rdr_detn184to191rng_rate189;
  detection.is_dynamic = detectionGroup_184to191[scanID].flr2rdr_detn184to191dyn_prpty189;
  detection.mode = detectionGroup_184to191[scanID].flr2rdr_detn184to191mode189;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_184to191[scanID].flr2rdr_detn184to191rng_qlty189);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_184to191[scanID].flr2rdr_detn184to191rng_rt_qlty189);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection190(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_184to191[scanID].flr2rdr_detn184to191snr190;
  detection.azimuth = detectionGroup_184to191[scanID].flr2rdr_detn184to191azi190;
  detection.elevation = detectionGroup_184to191[scanID].flr2rdr_detn184to191elevn190;
  detection.range = detectionGroup_184to191[scanID].flr2rdr_detn184to191rnge190;
  detection.range_rate = detectionGroup_184to191[scanID].flr2rdr_detn184to191rng_rate190;
  detection.is_dynamic = detectionGroup_184to191[scanID].flr2rdr_detn184to191dyn_prpty190;
  detection.mode = detectionGroup_184to191[scanID].flr2rdr_detn184to191mode190;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_184to191[scanID].flr2rdr_detn184to191rng_qlty190);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_184to191[scanID].flr2rdr_detn184to191rng_rt_qlty190);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection191(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_184to191[scanID].flr2rdr_detn184to191snr191;
  detection.azimuth = detectionGroup_184to191[scanID].flr2rdr_detn184to191azi191;
  detection.elevation = detectionGroup_184to191[scanID].flr2rdr_detn184to191elevn191;
  detection.range = detectionGroup_184to191[scanID].flr2rdr_detn184to191rnge191;
  detection.range_rate = detectionGroup_184to191[scanID].flr2rdr_detn184to191rng_rate191;
  detection.is_dynamic = detectionGroup_184to191[scanID].flr2rdr_detn184to191dyn_prpty191;
  detection.mode = detectionGroup_184to191[scanID].flr2rdr_detn184to191mode191;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_184to191[scanID].flr2rdr_detn184to191rng_qlty191);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_184to191[scanID].flr2rdr_detn184to191rng_rt_qlty191);

  return detection;
}

void InitialFLRMonitorHal::Impl::store_detection_data_192to199(const initialflrmonitorhal::types::FLR2RdrDetn192to199 detectionGroup, const uint8_t& scanID)
{
  if( !detectionGroup_192to199.count(scanID) )
  {
      detectionGroup_192to199.emplace(std::pair<uint8_t, initialflrmonitorhal::types::FLR2RdrDetn192to199>(scanID, detectionGroup));
      scan_id_counter[scanID]++;
  }
}



 // Get detection function  for detection ..... 24


flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection192(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_192to199[scanID].flr2rdr_detn192to199snr192;
  detection.azimuth = detectionGroup_192to199[scanID].flr2rdr_detn192to199azi192;
  detection.elevation = detectionGroup_192to199[scanID].flr2rdr_detn192to199elevn192;
  detection.range = detectionGroup_192to199[scanID].flr2rdr_detn192to199rnge192;
  detection.range_rate = detectionGroup_192to199[scanID].flr2rdr_detn192to199rng_rate192;
  detection.is_dynamic = detectionGroup_192to199[scanID].flr2rdr_detn192to199dyn_prpty192;
  detection.mode = detectionGroup_192to199[scanID].flr2rdr_detn192to199mode192;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_192to199[scanID].flr2rdr_detn192to199rng_qlty192);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_192to199[scanID].flr2rdr_detn192to199rng_rt_qlty192);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection193(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_192to199[scanID].flr2rdr_detn192to199snr193;
  detection.azimuth = detectionGroup_192to199[scanID].flr2rdr_detn192to199azi193;
  detection.elevation = detectionGroup_192to199[scanID].flr2rdr_detn192to199elevn193;
  detection.range = detectionGroup_192to199[scanID].flr2rdr_detn192to199rnge193;
  detection.range_rate = detectionGroup_192to199[scanID].flr2rdr_detn192to199rng_rate193;
  detection.is_dynamic = detectionGroup_192to199[scanID].flr2rdr_detn192to199dyn_prpty193;
  detection.mode = detectionGroup_192to199[scanID].flr2rdr_detn192to199mode193;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_192to199[scanID].flr2rdr_detn192to199rng_qlty193);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_192to199[scanID].flr2rdr_detn192to199rng_rt_qlty193);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection194(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_192to199[scanID].flr2rdr_detn192to199snr194;
  detection.azimuth = detectionGroup_192to199[scanID].flr2rdr_detn192to199azi194;
  detection.elevation = detectionGroup_192to199[scanID].flr2rdr_detn192to199elevn194;
  detection.range = detectionGroup_192to199[scanID].flr2rdr_detn192to199rnge194;
  detection.range_rate = detectionGroup_192to199[scanID].flr2rdr_detn192to199rng_rate194;
  detection.is_dynamic = detectionGroup_192to199[scanID].flr2rdr_detn192to199dyn_prpty194;
  detection.mode = detectionGroup_192to199[scanID].flr2rdr_detn192to199mode194;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_192to199[scanID].flr2rdr_detn192to199rng_qlty194);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_192to199[scanID].flr2rdr_detn192to199rng_rt_qlty194);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection195(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_192to199[scanID].flr2rdr_detn192to199snr195;
  detection.azimuth = detectionGroup_192to199[scanID].flr2rdr_detn192to199azi195;
  detection.elevation = detectionGroup_192to199[scanID].flr2rdr_detn192to199elevn195;
  detection.range = detectionGroup_192to199[scanID].flr2rdr_detn192to199rnge195;
  detection.range_rate = detectionGroup_192to199[scanID].flr2rdr_detn192to199rng_rate195;
  detection.is_dynamic = detectionGroup_192to199[scanID].flr2rdr_detn192to199dyn_prpty195;
  detection.mode = detectionGroup_192to199[scanID].flr2rdr_detn192to199mode195;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_192to199[scanID].flr2rdr_detn192to199rng_qlty195);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_192to199[scanID].flr2rdr_detn192to199rng_rt_qlty195);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection196(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_192to199[scanID].flr2rdr_detn192to199snr196;
  detection.azimuth = detectionGroup_192to199[scanID].flr2rdr_detn192to199azi196;
  detection.elevation = detectionGroup_192to199[scanID].flr2rdr_detn192to199elevn196;
  detection.range = detectionGroup_192to199[scanID].flr2rdr_detn192to199rnge196;
  detection.range_rate = detectionGroup_192to199[scanID].flr2rdr_detn192to199rng_rate196;
  detection.is_dynamic = detectionGroup_192to199[scanID].flr2rdr_detn192to199dyn_prpty196;
  detection.mode = detectionGroup_192to199[scanID].flr2rdr_detn192to199mode196;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_192to199[scanID].flr2rdr_detn192to199rng_qlty196);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_192to199[scanID].flr2rdr_detn192to199rng_rt_qlty196);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection197(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_192to199[scanID].flr2rdr_detn192to199snr197;
  detection.azimuth = detectionGroup_192to199[scanID].flr2rdr_detn192to199azi197;
  detection.elevation = detectionGroup_192to199[scanID].flr2rdr_detn192to199elevn197;
  detection.range = detectionGroup_192to199[scanID].flr2rdr_detn192to199rnge197;
  detection.range_rate = detectionGroup_192to199[scanID].flr2rdr_detn192to199rng_rate197;
  detection.is_dynamic = detectionGroup_192to199[scanID].flr2rdr_detn192to199dyn_prpty197;
  detection.mode = detectionGroup_192to199[scanID].flr2rdr_detn192to199mode197;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_192to199[scanID].flr2rdr_detn192to199rng_qlty197);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_192to199[scanID].flr2rdr_detn192to199rng_rt_qlty197);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection198(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_192to199[scanID].flr2rdr_detn192to199snr198;
  detection.azimuth = detectionGroup_192to199[scanID].flr2rdr_detn192to199azi198;
  detection.elevation = detectionGroup_192to199[scanID].flr2rdr_detn192to199elevn198;
  detection.range = detectionGroup_192to199[scanID].flr2rdr_detn192to199rnge198;
  detection.range_rate = detectionGroup_192to199[scanID].flr2rdr_detn192to199rng_rate198;
  detection.is_dynamic = detectionGroup_192to199[scanID].flr2rdr_detn192to199dyn_prpty198;
  detection.mode = detectionGroup_192to199[scanID].flr2rdr_detn192to199mode198;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_192to199[scanID].flr2rdr_detn192to199rng_qlty198);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_192to199[scanID].flr2rdr_detn192to199rng_rt_qlty198);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection199(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_192to199[scanID].flr2rdr_detn192to199snr199;
  detection.azimuth = detectionGroup_192to199[scanID].flr2rdr_detn192to199azi199;
  detection.elevation = detectionGroup_192to199[scanID].flr2rdr_detn192to199elevn199;
  detection.range = detectionGroup_192to199[scanID].flr2rdr_detn192to199rnge199;
  detection.range_rate = detectionGroup_192to199[scanID].flr2rdr_detn192to199rng_rate199;
  detection.is_dynamic = detectionGroup_192to199[scanID].flr2rdr_detn192to199dyn_prpty199;
  detection.mode = detectionGroup_192to199[scanID].flr2rdr_detn192to199mode199;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_192to199[scanID].flr2rdr_detn192to199rng_qlty199);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_192to199[scanID].flr2rdr_detn192to199rng_rt_qlty199);

  return detection;
}

void InitialFLRMonitorHal::Impl::store_detection_data_200to207(const initialflrmonitorhal::types::FLR2RdrDetn200to207 detectionGroup, const uint8_t& scanID)
{
  if( !detectionGroup_200to207.count(scanID) )
  {
      detectionGroup_200to207.emplace(std::pair<uint8_t, initialflrmonitorhal::types::FLR2RdrDetn200to207>(scanID, detectionGroup));
      scan_id_counter[scanID]++;
  }
}



 // Get detection function  for detection ..... 25


flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection200(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_200to207[scanID].flr2rdr_detn200to207snr200;
  detection.azimuth = detectionGroup_200to207[scanID].flr2rdr_detn200to207azi200;
  detection.elevation = detectionGroup_200to207[scanID].flr2rdr_detn200to207elevn200;
  detection.range = detectionGroup_200to207[scanID].flr2rdr_detn200to207rnge200;
  detection.range_rate = detectionGroup_200to207[scanID].flr2rdr_detn200to207rng_rate200;
  detection.is_dynamic = detectionGroup_200to207[scanID].flr2rdr_detn200to207dyn_prpty200;
  detection.mode = detectionGroup_200to207[scanID].flr2rdr_detn200to207mode200;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_200to207[scanID].flr2rdr_detn200to207rng_qlty200);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_200to207[scanID].flr2rdr_detn200to207rng_rt_qlty200);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection201(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_200to207[scanID].flr2rdr_detn200to207snr201;
  detection.azimuth = detectionGroup_200to207[scanID].flr2rdr_detn200to207azi201;
  detection.elevation = detectionGroup_200to207[scanID].flr2rdr_detn200to207elevn201;
  detection.range = detectionGroup_200to207[scanID].flr2rdr_detn200to207rnge201;
  detection.range_rate = detectionGroup_200to207[scanID].flr2rdr_detn200to207rng_rate201;
  detection.is_dynamic = detectionGroup_200to207[scanID].flr2rdr_detn200to207dyn_prpty201;
  detection.mode = detectionGroup_200to207[scanID].flr2rdr_detn200to207mode201;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_200to207[scanID].flr2rdr_detn200to207rng_qlty201);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_200to207[scanID].flr2rdr_detn200to207rng_rt_qlty201);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection202(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_200to207[scanID].flr2rdr_detn200to207snr202;
  detection.azimuth = detectionGroup_200to207[scanID].flr2rdr_detn200to207azi202;
  detection.elevation = detectionGroup_200to207[scanID].flr2rdr_detn200to207elevn202;
  detection.range = detectionGroup_200to207[scanID].flr2rdr_detn200to207rnge202;
  detection.range_rate = detectionGroup_200to207[scanID].flr2rdr_detn200to207rng_rate202;
  detection.is_dynamic = detectionGroup_200to207[scanID].flr2rdr_detn200to207dyn_prpty202;
  detection.mode = detectionGroup_200to207[scanID].flr2rdr_detn200to207mode202;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_200to207[scanID].flr2rdr_detn200to207rng_qlty202);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_200to207[scanID].flr2rdr_detn200to207rng_rt_qlty202);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection203(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_200to207[scanID].flr2rdr_detn200to207snr203;
  detection.azimuth = detectionGroup_200to207[scanID].flr2rdr_detn200to207azi203;
  detection.elevation = detectionGroup_200to207[scanID].flr2rdr_detn200to207elevn203;
  detection.range = detectionGroup_200to207[scanID].flr2rdr_detn200to207rnge203;
  detection.range_rate = detectionGroup_200to207[scanID].flr2rdr_detn200to207rng_rate203;
  detection.is_dynamic = detectionGroup_200to207[scanID].flr2rdr_detn200to207dyn_prpty203;
  detection.mode = detectionGroup_200to207[scanID].flr2rdr_detn200to207mode203;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_200to207[scanID].flr2rdr_detn200to207rng_qlty203);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_200to207[scanID].flr2rdr_detn200to207rng_rt_qlty203);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection204(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_200to207[scanID].flr2rdr_detn200to207snr204;
  detection.azimuth = detectionGroup_200to207[scanID].flr2rdr_detn200to207azi204;
  detection.elevation = detectionGroup_200to207[scanID].flr2rdr_detn200to207elevn204;
  detection.range = detectionGroup_200to207[scanID].flr2rdr_detn200to207rnge204;
  detection.range_rate = detectionGroup_200to207[scanID].flr2rdr_detn200to207rng_rate204;
  detection.is_dynamic = detectionGroup_200to207[scanID].flr2rdr_detn200to207dyn_prpty204;
  detection.mode = detectionGroup_200to207[scanID].flr2rdr_detn200to207mode204;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_200to207[scanID].flr2rdr_detn200to207rng_qlty204);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_200to207[scanID].flr2rdr_detn200to207rng_rt_qlty204);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection205(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_200to207[scanID].flr2rdr_detn200to207snr205;
  detection.azimuth = detectionGroup_200to207[scanID].flr2rdr_detn200to207azi205;
  detection.elevation = detectionGroup_200to207[scanID].flr2rdr_detn200to207elevn205;
  detection.range = detectionGroup_200to207[scanID].flr2rdr_detn200to207rnge205;
  detection.range_rate = detectionGroup_200to207[scanID].flr2rdr_detn200to207rng_rate205;
  detection.is_dynamic = detectionGroup_200to207[scanID].flr2rdr_detn200to207dyn_prpty205;
  detection.mode = detectionGroup_200to207[scanID].flr2rdr_detn200to207mode205;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_200to207[scanID].flr2rdr_detn200to207rng_qlty205);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_200to207[scanID].flr2rdr_detn200to207rng_rt_qlty205);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection206(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_200to207[scanID].flr2rdr_detn200to207snr206;
  detection.azimuth = detectionGroup_200to207[scanID].flr2rdr_detn200to207azi206;
  detection.elevation = detectionGroup_200to207[scanID].flr2rdr_detn200to207elevn206;
  detection.range = detectionGroup_200to207[scanID].flr2rdr_detn200to207rnge206;
  detection.range_rate = detectionGroup_200to207[scanID].flr2rdr_detn200to207rng_rate206;
  detection.is_dynamic = detectionGroup_200to207[scanID].flr2rdr_detn200to207dyn_prpty206;
  detection.mode = detectionGroup_200to207[scanID].flr2rdr_detn200to207mode206;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_200to207[scanID].flr2rdr_detn200to207rng_qlty206);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_200to207[scanID].flr2rdr_detn200to207rng_rt_qlty206);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection207(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_200to207[scanID].flr2rdr_detn200to207snr207;
  detection.azimuth = detectionGroup_200to207[scanID].flr2rdr_detn200to207azi207;
  detection.elevation = detectionGroup_200to207[scanID].flr2rdr_detn200to207elevn207;
  detection.range = detectionGroup_200to207[scanID].flr2rdr_detn200to207rnge207;
  detection.range_rate = detectionGroup_200to207[scanID].flr2rdr_detn200to207rng_rate207;
  detection.is_dynamic = detectionGroup_200to207[scanID].flr2rdr_detn200to207dyn_prpty207;
  detection.mode = detectionGroup_200to207[scanID].flr2rdr_detn200to207mode207;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_200to207[scanID].flr2rdr_detn200to207rng_qlty207);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_200to207[scanID].flr2rdr_detn200to207rng_rt_qlty207);

  return detection;
}

void InitialFLRMonitorHal::Impl::store_detection_data_208to215(const initialflrmonitorhal::types::FLR2RdrDetn208to215 detectionGroup, const uint8_t& scanID)
{
  if( !detectionGroup_208to215.count(scanID) )
  {
      detectionGroup_208to215.emplace(std::pair<uint8_t, initialflrmonitorhal::types::FLR2RdrDetn208to215>(scanID, detectionGroup));
      scan_id_counter[scanID]++;
  }
}



 // Get detection function  for detection ..... 26


flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection208(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_208to215[scanID].flr2rdr_detn208to215snr208;
  detection.azimuth = detectionGroup_208to215[scanID].flr2rdr_detn208to215azi208;
  detection.elevation = detectionGroup_208to215[scanID].flr2rdr_detn208to215elevn208;
  detection.range = detectionGroup_208to215[scanID].flr2rdr_detn208to215rnge208;
  detection.range_rate = detectionGroup_208to215[scanID].flr2rdr_detn208to215rng_rate208;
  detection.is_dynamic = detectionGroup_208to215[scanID].flr2rdr_detn208to215dyn_prpty208;
  detection.mode = detectionGroup_208to215[scanID].flr2rdr_detn208to215mode208;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_208to215[scanID].flr2rdr_detn208to215rng_qlty208);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_208to215[scanID].flr2rdr_detn208to215rng_rt_qlty208);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection209(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_208to215[scanID].flr2rdr_detn208to215snr209;
  detection.azimuth = detectionGroup_208to215[scanID].flr2rdr_detn208to215azi209;
  detection.elevation = detectionGroup_208to215[scanID].flr2rdr_detn208to215elevn209;
  detection.range = detectionGroup_208to215[scanID].flr2rdr_detn208to215rnge209;
  detection.range_rate = detectionGroup_208to215[scanID].flr2rdr_detn208to215rng_rate209;
  detection.is_dynamic = detectionGroup_208to215[scanID].flr2rdr_detn208to215dyn_prpty209;
  detection.mode = detectionGroup_208to215[scanID].flr2rdr_detn208to215mode209;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_208to215[scanID].flr2rdr_detn208to215rng_qlty209);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_208to215[scanID].flr2rdr_detn208to215rng_rt_qlty209);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection210(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_208to215[scanID].flr2rdr_detn208to215snr210;
  detection.azimuth = detectionGroup_208to215[scanID].flr2rdr_detn208to215azi210;
  detection.elevation = detectionGroup_208to215[scanID].flr2rdr_detn208to215elevn210;
  detection.range = detectionGroup_208to215[scanID].flr2rdr_detn208to215rnge210;
  detection.range_rate = detectionGroup_208to215[scanID].flr2rdr_detn208to215rng_rate210;
  detection.is_dynamic = detectionGroup_208to215[scanID].flr2rdr_detn208to215dyn_prpty210;
  detection.mode = detectionGroup_208to215[scanID].flr2rdr_detn208to215mode210;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_208to215[scanID].flr2rdr_detn208to215rng_qlty210);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_208to215[scanID].flr2rdr_detn208to215rng_rt_qlty210);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection211(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_208to215[scanID].flr2rdr_detn208to215snr211;
  detection.azimuth = detectionGroup_208to215[scanID].flr2rdr_detn208to215azi211;
  detection.elevation = detectionGroup_208to215[scanID].flr2rdr_detn208to215elevn211;
  detection.range = detectionGroup_208to215[scanID].flr2rdr_detn208to215rnge211;
  detection.range_rate = detectionGroup_208to215[scanID].flr2rdr_detn208to215rng_rate211;
  detection.is_dynamic = detectionGroup_208to215[scanID].flr2rdr_detn208to215dyn_prpty211;
  detection.mode = detectionGroup_208to215[scanID].flr2rdr_detn208to215mode211;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_208to215[scanID].flr2rdr_detn208to215rng_qlty211);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_208to215[scanID].flr2rdr_detn208to215rng_rt_qlty211);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection212(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_208to215[scanID].flr2rdr_detn208to215snr212;
  detection.azimuth = detectionGroup_208to215[scanID].flr2rdr_detn208to215azi212;
  detection.elevation = detectionGroup_208to215[scanID].flr2rdr_detn208to215elevn212;
  detection.range = detectionGroup_208to215[scanID].flr2rdr_detn208to215rnge212;
  detection.range_rate = detectionGroup_208to215[scanID].flr2rdr_detn208to215rng_rate212;
  detection.is_dynamic = detectionGroup_208to215[scanID].flr2rdr_detn208to215dyn_prpty212;
  detection.mode = detectionGroup_208to215[scanID].flr2rdr_detn208to215mode212;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_208to215[scanID].flr2rdr_detn208to215rng_qlty212);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_208to215[scanID].flr2rdr_detn208to215rng_rt_qlty212);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection213(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_208to215[scanID].flr2rdr_detn208to215snr213;
  detection.azimuth = detectionGroup_208to215[scanID].flr2rdr_detn208to215azi213;
  detection.elevation = detectionGroup_208to215[scanID].flr2rdr_detn208to215elevn213;
  detection.range = detectionGroup_208to215[scanID].flr2rdr_detn208to215rnge213;
  detection.range_rate = detectionGroup_208to215[scanID].flr2rdr_detn208to215rng_rate213;
  detection.is_dynamic = detectionGroup_208to215[scanID].flr2rdr_detn208to215dyn_prpty213;
  detection.mode = detectionGroup_208to215[scanID].flr2rdr_detn208to215mode213;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_208to215[scanID].flr2rdr_detn208to215rng_qlty213);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_208to215[scanID].flr2rdr_detn208to215rng_rt_qlty213);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection214(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_208to215[scanID].flr2rdr_detn208to215snr214;
  detection.azimuth = detectionGroup_208to215[scanID].flr2rdr_detn208to215azi214;
  detection.elevation = detectionGroup_208to215[scanID].flr2rdr_detn208to215elevn214;
  detection.range = detectionGroup_208to215[scanID].flr2rdr_detn208to215rnge214;
  detection.range_rate = detectionGroup_208to215[scanID].flr2rdr_detn208to215rng_rate214;
  detection.is_dynamic = detectionGroup_208to215[scanID].flr2rdr_detn208to215dyn_prpty214;
  detection.mode = detectionGroup_208to215[scanID].flr2rdr_detn208to215mode214;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_208to215[scanID].flr2rdr_detn208to215rng_qlty214);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_208to215[scanID].flr2rdr_detn208to215rng_rt_qlty214);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection215(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_208to215[scanID].flr2rdr_detn208to215snr215;
  detection.azimuth = detectionGroup_208to215[scanID].flr2rdr_detn208to215azi215;
  detection.elevation = detectionGroup_208to215[scanID].flr2rdr_detn208to215elevn215;
  detection.range = detectionGroup_208to215[scanID].flr2rdr_detn208to215rnge215;
  detection.range_rate = detectionGroup_208to215[scanID].flr2rdr_detn208to215rng_rate215;
  detection.is_dynamic = detectionGroup_208to215[scanID].flr2rdr_detn208to215dyn_prpty215;
  detection.mode = detectionGroup_208to215[scanID].flr2rdr_detn208to215mode215;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_208to215[scanID].flr2rdr_detn208to215rng_qlty215);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_208to215[scanID].flr2rdr_detn208to215rng_rt_qlty215);

  return detection;
}

void InitialFLRMonitorHal::Impl::store_detection_data_216to223(const initialflrmonitorhal::types::FLR2RdrDetn216to223 detectionGroup, const uint8_t& scanID)
{
  if( !detectionGroup_216to223.count(scanID) )
  {
      detectionGroup_216to223.emplace(std::pair<uint8_t, initialflrmonitorhal::types::FLR2RdrDetn216to223>(scanID, detectionGroup));
      scan_id_counter[scanID]++;
  }
}



 // Get detection function  for detection ..... 27


flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection216(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_216to223[scanID].flr2rdr_detn216to223snr216;
  detection.azimuth = detectionGroup_216to223[scanID].flr2rdr_detn216to223azi216;
  detection.elevation = detectionGroup_216to223[scanID].flr2rdr_detn216to223elevn216;
  detection.range = detectionGroup_216to223[scanID].flr2rdr_detn216to223rnge216;
  detection.range_rate = detectionGroup_216to223[scanID].flr2rdr_detn216to223rng_rate216;
  detection.is_dynamic = detectionGroup_216to223[scanID].flr2rdr_detn216to223dyn_prpty216;
  detection.mode = detectionGroup_216to223[scanID].flr2rdr_detn216to223mode216;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_216to223[scanID].flr2rdr_detn216to223rng_qlty216);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_216to223[scanID].flr2rdr_detn216to223rng_rt_qlty216);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection217(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_216to223[scanID].flr2rdr_detn216to223snr217;
  detection.azimuth = detectionGroup_216to223[scanID].flr2rdr_detn216to223azi217;
  detection.elevation = detectionGroup_216to223[scanID].flr2rdr_detn216to223elevn217;
  detection.range = detectionGroup_216to223[scanID].flr2rdr_detn216to223rnge217;
  detection.range_rate = detectionGroup_216to223[scanID].flr2rdr_detn216to223rng_rate217;
  detection.is_dynamic = detectionGroup_216to223[scanID].flr2rdr_detn216to223dyn_prpty217;
  detection.mode = detectionGroup_216to223[scanID].flr2rdr_detn216to223mode217;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_216to223[scanID].flr2rdr_detn216to223rng_qlty217);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_216to223[scanID].flr2rdr_detn216to223rng_rt_qlty217);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection218(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_216to223[scanID].flr2rdr_detn216to223snr218;
  detection.azimuth = detectionGroup_216to223[scanID].flr2rdr_detn216to223azi218;
  detection.elevation = detectionGroup_216to223[scanID].flr2rdr_detn216to223elevn218;
  detection.range = detectionGroup_216to223[scanID].flr2rdr_detn216to223rnge218;
  detection.range_rate = detectionGroup_216to223[scanID].flr2rdr_detn216to223rng_rate218;
  detection.is_dynamic = detectionGroup_216to223[scanID].flr2rdr_detn216to223dyn_prpty218;
  detection.mode = detectionGroup_216to223[scanID].flr2rdr_detn216to223mode218;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_216to223[scanID].flr2rdr_detn216to223rng_qlty218);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_216to223[scanID].flr2rdr_detn216to223rng_rt_qlty218);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection219(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_216to223[scanID].flr2rdr_detn216to223snr219;
  detection.azimuth = detectionGroup_216to223[scanID].flr2rdr_detn216to223azi219;
  detection.elevation = detectionGroup_216to223[scanID].flr2rdr_detn216to223elevn219;
  detection.range = detectionGroup_216to223[scanID].flr2rdr_detn216to223rnge219;
  detection.range_rate = detectionGroup_216to223[scanID].flr2rdr_detn216to223rng_rate219;
  detection.is_dynamic = detectionGroup_216to223[scanID].flr2rdr_detn216to223dyn_prpty219;
  detection.mode = detectionGroup_216to223[scanID].flr2rdr_detn216to223mode219;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_216to223[scanID].flr2rdr_detn216to223rng_qlty219);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_216to223[scanID].flr2rdr_detn216to223rng_rt_qlty219);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection220(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_216to223[scanID].flr2rdr_detn216to223snr220;
  detection.azimuth = detectionGroup_216to223[scanID].flr2rdr_detn216to223azi220;
  detection.elevation = detectionGroup_216to223[scanID].flr2rdr_detn216to223elevn220;
  detection.range = detectionGroup_216to223[scanID].flr2rdr_detn216to223rnge220;
  detection.range_rate = detectionGroup_216to223[scanID].flr2rdr_detn216to223rng_rate220;
  detection.is_dynamic = detectionGroup_216to223[scanID].flr2rdr_detn216to223dyn_prpty220;
  detection.mode = detectionGroup_216to223[scanID].flr2rdr_detn216to223mode220;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_216to223[scanID].flr2rdr_detn216to223rng_qlty220);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_216to223[scanID].flr2rdr_detn216to223rng_rt_qlty220);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection221(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_216to223[scanID].flr2rdr_detn216to223snr221;
  detection.azimuth = detectionGroup_216to223[scanID].flr2rdr_detn216to223azi221;
  detection.elevation = detectionGroup_216to223[scanID].flr2rdr_detn216to223elevn221;
  detection.range = detectionGroup_216to223[scanID].flr2rdr_detn216to223rnge221;
  detection.range_rate = detectionGroup_216to223[scanID].flr2rdr_detn216to223rng_rate221;
  detection.is_dynamic = detectionGroup_216to223[scanID].flr2rdr_detn216to223dyn_prpty221;
  detection.mode = detectionGroup_216to223[scanID].flr2rdr_detn216to223mode221;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_216to223[scanID].flr2rdr_detn216to223rng_qlty221);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_216to223[scanID].flr2rdr_detn216to223rng_rt_qlty221);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection222(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_216to223[scanID].flr2rdr_detn216to223snr222;
  detection.azimuth = detectionGroup_216to223[scanID].flr2rdr_detn216to223azi222;
  detection.elevation = detectionGroup_216to223[scanID].flr2rdr_detn216to223elevn222;
  detection.range = detectionGroup_216to223[scanID].flr2rdr_detn216to223rnge222;
  detection.range_rate = detectionGroup_216to223[scanID].flr2rdr_detn216to223rng_rate222;
  detection.is_dynamic = detectionGroup_216to223[scanID].flr2rdr_detn216to223dyn_prpty222;
  detection.mode = detectionGroup_216to223[scanID].flr2rdr_detn216to223mode222;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_216to223[scanID].flr2rdr_detn216to223rng_qlty222);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_216to223[scanID].flr2rdr_detn216to223rng_rt_qlty222);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection223(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_216to223[scanID].flr2rdr_detn216to223snr223;
  detection.azimuth = detectionGroup_216to223[scanID].flr2rdr_detn216to223azi223;
  detection.elevation = detectionGroup_216to223[scanID].flr2rdr_detn216to223elevn223;
  detection.range = detectionGroup_216to223[scanID].flr2rdr_detn216to223rnge223;
  detection.range_rate = detectionGroup_216to223[scanID].flr2rdr_detn216to223rng_rate223;
  detection.is_dynamic = detectionGroup_216to223[scanID].flr2rdr_detn216to223dyn_prpty223;
  detection.mode = detectionGroup_216to223[scanID].flr2rdr_detn216to223mode223;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_216to223[scanID].flr2rdr_detn216to223rng_qlty223);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_216to223[scanID].flr2rdr_detn216to223rng_rt_qlty223);

  return detection;
}

void InitialFLRMonitorHal::Impl::store_detection_data_224to231(const initialflrmonitorhal::types::FLR2RdrDetn224to231 detectionGroup, const uint8_t& scanID)
{
  if( !detectionGroup_224to231.count(scanID) )
  {
      detectionGroup_224to231.emplace(std::pair<uint8_t, initialflrmonitorhal::types::FLR2RdrDetn224to231>(scanID, detectionGroup));
      scan_id_counter[scanID]++;
  }
}



 // Get detection function  for detection ..... 28


flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection224(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_224to231[scanID].flr2rdr_detn224to231snr224;
  detection.azimuth = detectionGroup_224to231[scanID].flr2rdr_detn224to231azi224;
  detection.elevation = detectionGroup_224to231[scanID].flr2rdr_detn224to231elevn224;
  detection.range = detectionGroup_224to231[scanID].flr2rdr_detn224to231rnge224;
  detection.range_rate = detectionGroup_224to231[scanID].flr2rdr_detn224to231rng_rate224;
  detection.is_dynamic = detectionGroup_224to231[scanID].flr2rdr_detn224to231dyn_prpty224;
  detection.mode = detectionGroup_224to231[scanID].flr2rdr_detn224to231mode224;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_224to231[scanID].flr2rdr_detn224to231rng_qlty224);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_224to231[scanID].flr2rdr_detn224to231rng_rt_qlty224);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection225(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_224to231[scanID].flr2rdr_detn224to231snr225;
  detection.azimuth = detectionGroup_224to231[scanID].flr2rdr_detn224to231azi225;
  detection.elevation = detectionGroup_224to231[scanID].flr2rdr_detn224to231elevn225;
  detection.range = detectionGroup_224to231[scanID].flr2rdr_detn224to231rnge225;
  detection.range_rate = detectionGroup_224to231[scanID].flr2rdr_detn224to231rng_rate225;
  detection.is_dynamic = detectionGroup_224to231[scanID].flr2rdr_detn224to231dyn_prpty225;
  detection.mode = detectionGroup_224to231[scanID].flr2rdr_detn224to231mode225;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_224to231[scanID].flr2rdr_detn224to231rng_qlty225);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_224to231[scanID].flr2rdr_detn224to231rng_rt_qlty225);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection226(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_224to231[scanID].flr2rdr_detn224to231snr226;
  detection.azimuth = detectionGroup_224to231[scanID].flr2rdr_detn224to231azi226;
  detection.elevation = detectionGroup_224to231[scanID].flr2rdr_detn224to231elevn226;
  detection.range = detectionGroup_224to231[scanID].flr2rdr_detn224to231rnge226;
  detection.range_rate = detectionGroup_224to231[scanID].flr2rdr_detn224to231rng_rate226;
  detection.is_dynamic = detectionGroup_224to231[scanID].flr2rdr_detn224to231dyn_prpty226;
  detection.mode = detectionGroup_224to231[scanID].flr2rdr_detn224to231mode226;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_224to231[scanID].flr2rdr_detn224to231rng_qlty226);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_224to231[scanID].flr2rdr_detn224to231rng_rt_qlty226);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection227(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_224to231[scanID].flr2rdr_detn224to231snr227;
  detection.azimuth = detectionGroup_224to231[scanID].flr2rdr_detn224to231azi227;
  detection.elevation = detectionGroup_224to231[scanID].flr2rdr_detn224to231elevn227;
  detection.range = detectionGroup_224to231[scanID].flr2rdr_detn224to231rnge227;
  detection.range_rate = detectionGroup_224to231[scanID].flr2rdr_detn224to231rng_rate227;
  detection.is_dynamic = detectionGroup_224to231[scanID].flr2rdr_detn224to231dyn_prpty227;
  detection.mode = detectionGroup_224to231[scanID].flr2rdr_detn224to231mode227;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_224to231[scanID].flr2rdr_detn224to231rng_qlty227);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_224to231[scanID].flr2rdr_detn224to231rng_rt_qlty227);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection228(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_224to231[scanID].flr2rdr_detn224to231snr228;
  detection.azimuth = detectionGroup_224to231[scanID].flr2rdr_detn224to231azi228;
  detection.elevation = detectionGroup_224to231[scanID].flr2rdr_detn224to231elevn228;
  detection.range = detectionGroup_224to231[scanID].flr2rdr_detn224to231rnge228;
  detection.range_rate = detectionGroup_224to231[scanID].flr2rdr_detn224to231rng_rate228;
  detection.is_dynamic = detectionGroup_224to231[scanID].flr2rdr_detn224to231dyn_prpty228;
  detection.mode = detectionGroup_224to231[scanID].flr2rdr_detn224to231mode228;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_224to231[scanID].flr2rdr_detn224to231rng_qlty228);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_224to231[scanID].flr2rdr_detn224to231rng_rt_qlty228);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection229(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_224to231[scanID].flr2rdr_detn224to231snr229;
  detection.azimuth = detectionGroup_224to231[scanID].flr2rdr_detn224to231azi229;
  detection.elevation = detectionGroup_224to231[scanID].flr2rdr_detn224to231elevn229;
  detection.range = detectionGroup_224to231[scanID].flr2rdr_detn224to231rnge229;
  detection.range_rate = detectionGroup_224to231[scanID].flr2rdr_detn224to231rng_rate229;
  detection.is_dynamic = detectionGroup_224to231[scanID].flr2rdr_detn224to231dyn_prpty229;
  detection.mode = detectionGroup_224to231[scanID].flr2rdr_detn224to231mode229;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_224to231[scanID].flr2rdr_detn224to231rng_qlty229);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_224to231[scanID].flr2rdr_detn224to231rng_rt_qlty229);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection230(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_224to231[scanID].flr2rdr_detn224to231snr230;
  detection.azimuth = detectionGroup_224to231[scanID].flr2rdr_detn224to231azi230;
  detection.elevation = detectionGroup_224to231[scanID].flr2rdr_detn224to231elevn230;
  detection.range = detectionGroup_224to231[scanID].flr2rdr_detn224to231rnge230;
  detection.range_rate = detectionGroup_224to231[scanID].flr2rdr_detn224to231rng_rate230;
  detection.is_dynamic = detectionGroup_224to231[scanID].flr2rdr_detn224to231dyn_prpty230;
  detection.mode = detectionGroup_224to231[scanID].flr2rdr_detn224to231mode230;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_224to231[scanID].flr2rdr_detn224to231rng_qlty230);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_224to231[scanID].flr2rdr_detn224to231rng_rt_qlty230);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection231(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_224to231[scanID].flr2rdr_detn224to231snr231;
  detection.azimuth = detectionGroup_224to231[scanID].flr2rdr_detn224to231azi231;
  detection.elevation = detectionGroup_224to231[scanID].flr2rdr_detn224to231elevn231;
  detection.range = detectionGroup_224to231[scanID].flr2rdr_detn224to231rnge231;
  detection.range_rate = detectionGroup_224to231[scanID].flr2rdr_detn224to231rng_rate231;
  detection.is_dynamic = detectionGroup_224to231[scanID].flr2rdr_detn224to231dyn_prpty231;
  detection.mode = detectionGroup_224to231[scanID].flr2rdr_detn224to231mode231;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_224to231[scanID].flr2rdr_detn224to231rng_qlty231);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_224to231[scanID].flr2rdr_detn224to231rng_rt_qlty231);

  return detection;
}

void InitialFLRMonitorHal::Impl::store_detection_data_232to239(const initialflrmonitorhal::types::FLR2RdrDetn232to239 detectionGroup, const uint8_t& scanID)
{
  if( !detectionGroup_232to239.count(scanID) )
  {
      detectionGroup_232to239.emplace(std::pair<uint8_t, initialflrmonitorhal::types::FLR2RdrDetn232to239>(scanID, detectionGroup));
      scan_id_counter[scanID]++;
  }
}



 // Get detection function  for detection ..... 29


flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection232(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_232to239[scanID].flr2rdr_detn232to239snr232;
  detection.azimuth = detectionGroup_232to239[scanID].flr2rdr_detn232to239azi232;
  detection.elevation = detectionGroup_232to239[scanID].flr2rdr_detn232to239elevn232;
  detection.range = detectionGroup_232to239[scanID].flr2rdr_detn232to239rnge232;
  detection.range_rate = detectionGroup_232to239[scanID].flr2rdr_detn232to239rng_rate232;
  detection.is_dynamic = detectionGroup_232to239[scanID].flr2rdr_detn232to239dyn_prpty232;
  detection.mode = detectionGroup_232to239[scanID].flr2rdr_detn232to239mode232;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_232to239[scanID].flr2rdr_detn232to239rng_qlty232);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_232to239[scanID].flr2rdr_detn232to239rng_rt_qlty232);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection233(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_232to239[scanID].flr2rdr_detn232to239snr233;
  detection.azimuth = detectionGroup_232to239[scanID].flr2rdr_detn232to239azi233;
  detection.elevation = detectionGroup_232to239[scanID].flr2rdr_detn232to239elevn233;
  detection.range = detectionGroup_232to239[scanID].flr2rdr_detn232to239rnge233;
  detection.range_rate = detectionGroup_232to239[scanID].flr2rdr_detn232to239rng_rate233;
  detection.is_dynamic = detectionGroup_232to239[scanID].flr2rdr_detn232to239dyn_prpty233;
  detection.mode = detectionGroup_232to239[scanID].flr2rdr_detn232to239mode233;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_232to239[scanID].flr2rdr_detn232to239rng_qlty233);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_232to239[scanID].flr2rdr_detn232to239rng_rt_qlty233);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection234(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_232to239[scanID].flr2rdr_detn232to239snr234;
  detection.azimuth = detectionGroup_232to239[scanID].flr2rdr_detn232to239azi234;
  detection.elevation = detectionGroup_232to239[scanID].flr2rdr_detn232to239elevn234;
  detection.range = detectionGroup_232to239[scanID].flr2rdr_detn232to239rnge234;
  detection.range_rate = detectionGroup_232to239[scanID].flr2rdr_detn232to239rng_rate234;
  detection.is_dynamic = detectionGroup_232to239[scanID].flr2rdr_detn232to239dyn_prpty234;
  detection.mode = detectionGroup_232to239[scanID].flr2rdr_detn232to239mode234;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_232to239[scanID].flr2rdr_detn232to239rng_qlty234);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_232to239[scanID].flr2rdr_detn232to239rng_rt_qlty234);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection235(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_232to239[scanID].flr2rdr_detn232to239snr235;
  detection.azimuth = detectionGroup_232to239[scanID].flr2rdr_detn232to239azi235;
  detection.elevation = detectionGroup_232to239[scanID].flr2rdr_detn232to239elevn235;
  detection.range = detectionGroup_232to239[scanID].flr2rdr_detn232to239rnge235;
  detection.range_rate = detectionGroup_232to239[scanID].flr2rdr_detn232to239rng_rate235;
  detection.is_dynamic = detectionGroup_232to239[scanID].flr2rdr_detn232to239dyn_prpty235;
  detection.mode = detectionGroup_232to239[scanID].flr2rdr_detn232to239mode235;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_232to239[scanID].flr2rdr_detn232to239rng_qlty235);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_232to239[scanID].flr2rdr_detn232to239rng_rt_qlty235);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection236(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_232to239[scanID].flr2rdr_detn232to239snr236;
  detection.azimuth = detectionGroup_232to239[scanID].flr2rdr_detn232to239azi236;
  detection.elevation = detectionGroup_232to239[scanID].flr2rdr_detn232to239elevn236;
  detection.range = detectionGroup_232to239[scanID].flr2rdr_detn232to239rnge236;
  detection.range_rate = detectionGroup_232to239[scanID].flr2rdr_detn232to239rng_rate236;
  detection.is_dynamic = detectionGroup_232to239[scanID].flr2rdr_detn232to239dyn_prpty236;
  detection.mode = detectionGroup_232to239[scanID].flr2rdr_detn232to239mode236;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_232to239[scanID].flr2rdr_detn232to239rng_qlty236);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_232to239[scanID].flr2rdr_detn232to239rng_rt_qlty236);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection237(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_232to239[scanID].flr2rdr_detn232to239snr237;
  detection.azimuth = detectionGroup_232to239[scanID].flr2rdr_detn232to239azi237;
  detection.elevation = detectionGroup_232to239[scanID].flr2rdr_detn232to239elevn237;
  detection.range = detectionGroup_232to239[scanID].flr2rdr_detn232to239rnge237;
  detection.range_rate = detectionGroup_232to239[scanID].flr2rdr_detn232to239rng_rate237;
  detection.is_dynamic = detectionGroup_232to239[scanID].flr2rdr_detn232to239dyn_prpty237;
  detection.mode = detectionGroup_232to239[scanID].flr2rdr_detn232to239mode237;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_232to239[scanID].flr2rdr_detn232to239rng_qlty237);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_232to239[scanID].flr2rdr_detn232to239rng_rt_qlty237);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection238(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_232to239[scanID].flr2rdr_detn232to239snr238;
  detection.azimuth = detectionGroup_232to239[scanID].flr2rdr_detn232to239azi238;
  detection.elevation = detectionGroup_232to239[scanID].flr2rdr_detn232to239elevn238;
  detection.range = detectionGroup_232to239[scanID].flr2rdr_detn232to239rnge238;
  detection.range_rate = detectionGroup_232to239[scanID].flr2rdr_detn232to239rng_rate238;
  detection.is_dynamic = detectionGroup_232to239[scanID].flr2rdr_detn232to239dyn_prpty238;
  detection.mode = detectionGroup_232to239[scanID].flr2rdr_detn232to239mode238;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_232to239[scanID].flr2rdr_detn232to239rng_qlty238);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_232to239[scanID].flr2rdr_detn232to239rng_rt_qlty238);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection239(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_232to239[scanID].flr2rdr_detn232to239snr239;
  detection.azimuth = detectionGroup_232to239[scanID].flr2rdr_detn232to239azi239;
  detection.elevation = detectionGroup_232to239[scanID].flr2rdr_detn232to239elevn239;
  detection.range = detectionGroup_232to239[scanID].flr2rdr_detn232to239rnge239;
  detection.range_rate = detectionGroup_232to239[scanID].flr2rdr_detn232to239rng_rate239;
  detection.is_dynamic = detectionGroup_232to239[scanID].flr2rdr_detn232to239dyn_prpty239;
  detection.mode = detectionGroup_232to239[scanID].flr2rdr_detn232to239mode239;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_232to239[scanID].flr2rdr_detn232to239rng_qlty239);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_232to239[scanID].flr2rdr_detn232to239rng_rt_qlty239);

  return detection;
}

void InitialFLRMonitorHal::Impl::store_detection_data_240to247(const initialflrmonitorhal::types::FLR2RdrDetn240to247 detectionGroup, const uint8_t& scanID)
{
  if( !detectionGroup_240to247.count(scanID) )
  {
      detectionGroup_240to247.emplace(std::pair<uint8_t, initialflrmonitorhal::types::FLR2RdrDetn240to247>(scanID, detectionGroup));
      scan_id_counter[scanID]++;
  }
}



 // Get detection function  for detection ..... 30


flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection240(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_240to247[scanID].flr2rdr_detn240to247snr240;
  detection.azimuth = detectionGroup_240to247[scanID].flr2rdr_detn240to247azi240;
  detection.elevation = detectionGroup_240to247[scanID].flr2rdr_detn240to247elevn240;
  detection.range = detectionGroup_240to247[scanID].flr2rdr_detn240to247rnge240;
  detection.range_rate = detectionGroup_240to247[scanID].flr2rdr_detn240to247rng_rate240;
  detection.is_dynamic = detectionGroup_240to247[scanID].flr2rdr_detn240to247dyn_prpty240;
  detection.mode = detectionGroup_240to247[scanID].flr2rdr_detn240to247mode240;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_240to247[scanID].flr2rdr_detn240to247rng_qlty240);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_240to247[scanID].flr2rdr_detn240to247rng_rt_qlty240);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection241(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_240to247[scanID].flr2rdr_detn240to247snr241;
  detection.azimuth = detectionGroup_240to247[scanID].flr2rdr_detn240to247azi241;
  detection.elevation = detectionGroup_240to247[scanID].flr2rdr_detn240to247elevn241;
  detection.range = detectionGroup_240to247[scanID].flr2rdr_detn240to247rnge241;
  detection.range_rate = detectionGroup_240to247[scanID].flr2rdr_detn240to247rng_rate241;
  detection.is_dynamic = detectionGroup_240to247[scanID].flr2rdr_detn240to247dyn_prpty241;
  detection.mode = detectionGroup_240to247[scanID].flr2rdr_detn240to247mode241;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_240to247[scanID].flr2rdr_detn240to247rng_qlty241);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_240to247[scanID].flr2rdr_detn240to247rng_rt_qlty241);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection242(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_240to247[scanID].flr2rdr_detn240to247snr242;
  detection.azimuth = detectionGroup_240to247[scanID].flr2rdr_detn240to247azi242;
  detection.elevation = detectionGroup_240to247[scanID].flr2rdr_detn240to247elevn242;
  detection.range = detectionGroup_240to247[scanID].flr2rdr_detn240to247rnge242;
  detection.range_rate = detectionGroup_240to247[scanID].flr2rdr_detn240to247rng_rate242;
  detection.is_dynamic = detectionGroup_240to247[scanID].flr2rdr_detn240to247dyn_prpty242;
  detection.mode = detectionGroup_240to247[scanID].flr2rdr_detn240to247mode242;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_240to247[scanID].flr2rdr_detn240to247rng_qlty242);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_240to247[scanID].flr2rdr_detn240to247rng_rt_qlty242);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection243(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_240to247[scanID].flr2rdr_detn240to247snr243;
  detection.azimuth = detectionGroup_240to247[scanID].flr2rdr_detn240to247azi243;
  detection.elevation = detectionGroup_240to247[scanID].flr2rdr_detn240to247elevn243;
  detection.range = detectionGroup_240to247[scanID].flr2rdr_detn240to247rnge243;
  detection.range_rate = detectionGroup_240to247[scanID].flr2rdr_detn240to247rng_rate243;
  detection.is_dynamic = detectionGroup_240to247[scanID].flr2rdr_detn240to247dyn_prpty243;
  detection.mode = detectionGroup_240to247[scanID].flr2rdr_detn240to247mode243;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_240to247[scanID].flr2rdr_detn240to247rng_qlty243);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_240to247[scanID].flr2rdr_detn240to247rng_rt_qlty243);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection244(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_240to247[scanID].flr2rdr_detn240to247snr244;
  detection.azimuth = detectionGroup_240to247[scanID].flr2rdr_detn240to247azi244;
  detection.elevation = detectionGroup_240to247[scanID].flr2rdr_detn240to247elevn244;
  detection.range = detectionGroup_240to247[scanID].flr2rdr_detn240to247rnge244;
  detection.range_rate = detectionGroup_240to247[scanID].flr2rdr_detn240to247rng_rate244;
  detection.is_dynamic = detectionGroup_240to247[scanID].flr2rdr_detn240to247dyn_prpty244;
  detection.mode = detectionGroup_240to247[scanID].flr2rdr_detn240to247mode244;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_240to247[scanID].flr2rdr_detn240to247rng_qlty244);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_240to247[scanID].flr2rdr_detn240to247rng_rt_qlty244);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection245(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_240to247[scanID].flr2rdr_detn240to247snr245;
  detection.azimuth = detectionGroup_240to247[scanID].flr2rdr_detn240to247azi245;
  detection.elevation = detectionGroup_240to247[scanID].flr2rdr_detn240to247elevn245;
  detection.range = detectionGroup_240to247[scanID].flr2rdr_detn240to247rnge245;
  detection.range_rate = detectionGroup_240to247[scanID].flr2rdr_detn240to247rng_rate245;
  detection.is_dynamic = detectionGroup_240to247[scanID].flr2rdr_detn240to247dyn_prpty245;
  detection.mode = detectionGroup_240to247[scanID].flr2rdr_detn240to247mode245;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_240to247[scanID].flr2rdr_detn240to247rng_qlty245);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_240to247[scanID].flr2rdr_detn240to247rng_rt_qlty245);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection246(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_240to247[scanID].flr2rdr_detn240to247snr246;
  detection.azimuth = detectionGroup_240to247[scanID].flr2rdr_detn240to247azi246;
  detection.elevation = detectionGroup_240to247[scanID].flr2rdr_detn240to247elevn246;
  detection.range = detectionGroup_240to247[scanID].flr2rdr_detn240to247rnge246;
  detection.range_rate = detectionGroup_240to247[scanID].flr2rdr_detn240to247rng_rate246;
  detection.is_dynamic = detectionGroup_240to247[scanID].flr2rdr_detn240to247dyn_prpty246;
  detection.mode = detectionGroup_240to247[scanID].flr2rdr_detn240to247mode246;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_240to247[scanID].flr2rdr_detn240to247rng_qlty246);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_240to247[scanID].flr2rdr_detn240to247rng_rt_qlty246);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection247(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_240to247[scanID].flr2rdr_detn240to247snr247;
  detection.azimuth = detectionGroup_240to247[scanID].flr2rdr_detn240to247azi247;
  detection.elevation = detectionGroup_240to247[scanID].flr2rdr_detn240to247elevn247;
  detection.range = detectionGroup_240to247[scanID].flr2rdr_detn240to247rnge247;
  detection.range_rate = detectionGroup_240to247[scanID].flr2rdr_detn240to247rng_rate247;
  detection.is_dynamic = detectionGroup_240to247[scanID].flr2rdr_detn240to247dyn_prpty247;
  detection.mode = detectionGroup_240to247[scanID].flr2rdr_detn240to247mode247;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_240to247[scanID].flr2rdr_detn240to247rng_qlty247);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_240to247[scanID].flr2rdr_detn240to247rng_rt_qlty247);

  return detection;
}

void InitialFLRMonitorHal::Impl::store_detection_data_248to255(const initialflrmonitorhal::types::FLR2RdrDetn248to255 detectionGroup, const uint8_t& scanID)
{
  if( !detectionGroup_248to255.count(scanID) )
  {
      detectionGroup_248to255.emplace(std::pair<uint8_t, initialflrmonitorhal::types::FLR2RdrDetn248to255>(scanID, detectionGroup));
      scan_id_counter[scanID]++;
  }
}



 // Get detection function  for detection ..... 31


flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection248(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_248to255[scanID].flr2rdr_detn248to255snr248;
  detection.azimuth = detectionGroup_248to255[scanID].flr2rdr_detn248to255azi248;
  detection.elevation = detectionGroup_248to255[scanID].flr2rdr_detn248to255elevn248;
  detection.range = detectionGroup_248to255[scanID].flr2rdr_detn248to255rnge248;
  detection.range_rate = detectionGroup_248to255[scanID].flr2rdr_detn248to255rng_rate248;
  detection.is_dynamic = detectionGroup_248to255[scanID].flr2rdr_detn248to255dyn_prpty248;
  detection.mode = detectionGroup_248to255[scanID].flr2rdr_detn248to255mode248;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_248to255[scanID].flr2rdr_detn248to255rng_qlty248);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_248to255[scanID].flr2rdr_detn248to255rng_rt_qlty248);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection249(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_248to255[scanID].flr2rdr_detn248to255snr249;
  detection.azimuth = detectionGroup_248to255[scanID].flr2rdr_detn248to255azi249;
  detection.elevation = detectionGroup_248to255[scanID].flr2rdr_detn248to255elevn249;
  detection.range = detectionGroup_248to255[scanID].flr2rdr_detn248to255rnge249;
  detection.range_rate = detectionGroup_248to255[scanID].flr2rdr_detn248to255rng_rate249;
  detection.is_dynamic = detectionGroup_248to255[scanID].flr2rdr_detn248to255dyn_prpty249;
  detection.mode = detectionGroup_248to255[scanID].flr2rdr_detn248to255mode249;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_248to255[scanID].flr2rdr_detn248to255rng_qlty249);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_248to255[scanID].flr2rdr_detn248to255rng_rt_qlty249);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection250(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_248to255[scanID].flr2rdr_detn248to255snr250;
  detection.azimuth = detectionGroup_248to255[scanID].flr2rdr_detn248to255azi250;
  detection.elevation = detectionGroup_248to255[scanID].flr2rdr_detn248to255elevn250;
  detection.range = detectionGroup_248to255[scanID].flr2rdr_detn248to255rnge250;
  detection.range_rate = detectionGroup_248to255[scanID].flr2rdr_detn248to255rng_rate250;
  detection.is_dynamic = detectionGroup_248to255[scanID].flr2rdr_detn248to255dyn_prpty250;
  detection.mode = detectionGroup_248to255[scanID].flr2rdr_detn248to255mode250;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_248to255[scanID].flr2rdr_detn248to255rng_qlty250);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_248to255[scanID].flr2rdr_detn248to255rng_rt_qlty250);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection251(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_248to255[scanID].flr2rdr_detn248to255snr251;
  detection.azimuth = detectionGroup_248to255[scanID].flr2rdr_detn248to255azi251;
  detection.elevation = detectionGroup_248to255[scanID].flr2rdr_detn248to255elevn251;
  detection.range = detectionGroup_248to255[scanID].flr2rdr_detn248to255rnge251;
  detection.range_rate = detectionGroup_248to255[scanID].flr2rdr_detn248to255rng_rate251;
  detection.is_dynamic = detectionGroup_248to255[scanID].flr2rdr_detn248to255dyn_prpty251;
  detection.mode = detectionGroup_248to255[scanID].flr2rdr_detn248to255mode251;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_248to255[scanID].flr2rdr_detn248to255rng_qlty251);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_248to255[scanID].flr2rdr_detn248to255rng_rt_qlty251);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection252(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_248to255[scanID].flr2rdr_detn248to255snr252;
  detection.azimuth = detectionGroup_248to255[scanID].flr2rdr_detn248to255azi252;
  detection.elevation = detectionGroup_248to255[scanID].flr2rdr_detn248to255elevn252;
  detection.range = detectionGroup_248to255[scanID].flr2rdr_detn248to255rnge252;
  detection.range_rate = detectionGroup_248to255[scanID].flr2rdr_detn248to255rng_rate252;
  detection.is_dynamic = detectionGroup_248to255[scanID].flr2rdr_detn248to255dyn_prpty252;
  detection.mode = detectionGroup_248to255[scanID].flr2rdr_detn248to255mode252;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_248to255[scanID].flr2rdr_detn248to255rng_qlty252);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_248to255[scanID].flr2rdr_detn248to255rng_rt_qlty252);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection253(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_248to255[scanID].flr2rdr_detn248to255snr253;
  detection.azimuth = detectionGroup_248to255[scanID].flr2rdr_detn248to255azi253;
  detection.elevation = detectionGroup_248to255[scanID].flr2rdr_detn248to255elevn253;
  detection.range = detectionGroup_248to255[scanID].flr2rdr_detn248to255rnge253;
  detection.range_rate = detectionGroup_248to255[scanID].flr2rdr_detn248to255rng_rate253;
  detection.is_dynamic = detectionGroup_248to255[scanID].flr2rdr_detn248to255dyn_prpty253;
  detection.mode = detectionGroup_248to255[scanID].flr2rdr_detn248to255mode253;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_248to255[scanID].flr2rdr_detn248to255rng_qlty253);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_248to255[scanID].flr2rdr_detn248to255rng_rt_qlty253);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection254(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_248to255[scanID].flr2rdr_detn248to255snr254;
  detection.azimuth = detectionGroup_248to255[scanID].flr2rdr_detn248to255azi254;
  detection.elevation = detectionGroup_248to255[scanID].flr2rdr_detn248to255elevn254;
  detection.range = detectionGroup_248to255[scanID].flr2rdr_detn248to255rnge254;
  detection.range_rate = detectionGroup_248to255[scanID].flr2rdr_detn248to255rng_rate254;
  detection.is_dynamic = detectionGroup_248to255[scanID].flr2rdr_detn248to255dyn_prpty254;
  detection.mode = detectionGroup_248to255[scanID].flr2rdr_detn248to255mode254;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_248to255[scanID].flr2rdr_detn248to255rng_qlty254);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_248to255[scanID].flr2rdr_detn248to255rng_rt_qlty254);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection255(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_248to255[scanID].flr2rdr_detn248to255snr255;
  detection.azimuth = detectionGroup_248to255[scanID].flr2rdr_detn248to255azi255;
  detection.elevation = detectionGroup_248to255[scanID].flr2rdr_detn248to255elevn255;
  detection.range = detectionGroup_248to255[scanID].flr2rdr_detn248to255rnge255;
  detection.range_rate = detectionGroup_248to255[scanID].flr2rdr_detn248to255rng_rate255;
  detection.is_dynamic = detectionGroup_248to255[scanID].flr2rdr_detn248to255dyn_prpty255;
  detection.mode = detectionGroup_248to255[scanID].flr2rdr_detn248to255mode255;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_248to255[scanID].flr2rdr_detn248to255rng_qlty255);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_248to255[scanID].flr2rdr_detn248to255rng_rt_qlty255);

  return detection;
}

void InitialFLRMonitorHal::Impl::store_detection_data_256to263(const initialflrmonitorhal::types::FLR2RdrDetn256to263 detectionGroup, const uint8_t& scanID)
{
  if( !detectionGroup_256to263.count(scanID) )
  {
      detectionGroup_256to263.emplace(std::pair<uint8_t, initialflrmonitorhal::types::FLR2RdrDetn256to263>(scanID, detectionGroup));
      scan_id_counter[scanID]++;
  }
}



 // Get detection function  for detection ..... 32


flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection256(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_256to263[scanID].flr2rdr_detn256to263snr256;
  detection.azimuth = detectionGroup_256to263[scanID].flr2rdr_detn256to263azi256;
  detection.elevation = detectionGroup_256to263[scanID].flr2rdr_detn256to263elevn256;
  detection.range = detectionGroup_256to263[scanID].flr2rdr_detn256to263rnge256;
  detection.range_rate = detectionGroup_256to263[scanID].flr2rdr_detn256to263rng_rate256;
  detection.is_dynamic = detectionGroup_256to263[scanID].flr2rdr_detn256to263dyn_prpty256;
  detection.mode = detectionGroup_256to263[scanID].flr2rdr_detn256to263mode256;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_256to263[scanID].flr2rdr_detn256to263rng_qlty256);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_256to263[scanID].flr2rdr_detn256to263rng_rt_qlty256);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection257(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_256to263[scanID].flr2rdr_detn256to263snr257;
  detection.azimuth = detectionGroup_256to263[scanID].flr2rdr_detn256to263azi257;
  detection.elevation = detectionGroup_256to263[scanID].flr2rdr_detn256to263elevn257;
  detection.range = detectionGroup_256to263[scanID].flr2rdr_detn256to263rnge257;
  detection.range_rate = detectionGroup_256to263[scanID].flr2rdr_detn256to263rng_rate257;
  detection.is_dynamic = detectionGroup_256to263[scanID].flr2rdr_detn256to263dyn_prpty257;
  detection.mode = detectionGroup_256to263[scanID].flr2rdr_detn256to263mode257;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_256to263[scanID].flr2rdr_detn256to263rng_qlty257);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_256to263[scanID].flr2rdr_detn256to263rng_rt_qlty257);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection258(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_256to263[scanID].flr2rdr_detn256to263snr258;
  detection.azimuth = detectionGroup_256to263[scanID].flr2rdr_detn256to263azi258;
  detection.elevation = detectionGroup_256to263[scanID].flr2rdr_detn256to263elevn258;
  detection.range = detectionGroup_256to263[scanID].flr2rdr_detn256to263rnge258;
  detection.range_rate = detectionGroup_256to263[scanID].flr2rdr_detn256to263rng_rate258;
  detection.is_dynamic = detectionGroup_256to263[scanID].flr2rdr_detn256to263dyn_prpty258;
  detection.mode = detectionGroup_256to263[scanID].flr2rdr_detn256to263mode258;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_256to263[scanID].flr2rdr_detn256to263rng_qlty258);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_256to263[scanID].flr2rdr_detn256to263rng_rt_qlty258);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection259(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_256to263[scanID].flr2rdr_detn256to263snr259;
  detection.azimuth = detectionGroup_256to263[scanID].flr2rdr_detn256to263azi259;
  detection.elevation = detectionGroup_256to263[scanID].flr2rdr_detn256to263elevn259;
  detection.range = detectionGroup_256to263[scanID].flr2rdr_detn256to263rnge259;
  detection.range_rate = detectionGroup_256to263[scanID].flr2rdr_detn256to263rng_rate259;
  detection.is_dynamic = detectionGroup_256to263[scanID].flr2rdr_detn256to263dyn_prpty259;
  detection.mode = detectionGroup_256to263[scanID].flr2rdr_detn256to263mode259;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_256to263[scanID].flr2rdr_detn256to263rng_qlty259);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_256to263[scanID].flr2rdr_detn256to263rng_rt_qlty259);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection260(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_256to263[scanID].flr2rdr_detn256to263snr260;
  detection.azimuth = detectionGroup_256to263[scanID].flr2rdr_detn256to263azi260;
  detection.elevation = detectionGroup_256to263[scanID].flr2rdr_detn256to263elevn260;
  detection.range = detectionGroup_256to263[scanID].flr2rdr_detn256to263rnge260;
  detection.range_rate = detectionGroup_256to263[scanID].flr2rdr_detn256to263rng_rate260;
  detection.is_dynamic = detectionGroup_256to263[scanID].flr2rdr_detn256to263dyn_prpty260;
  detection.mode = detectionGroup_256to263[scanID].flr2rdr_detn256to263mode260;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_256to263[scanID].flr2rdr_detn256to263rng_qlty260);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_256to263[scanID].flr2rdr_detn256to263rng_rt_qlty260);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection261(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_256to263[scanID].flr2rdr_detn256to263snr261;
  detection.azimuth = detectionGroup_256to263[scanID].flr2rdr_detn256to263azi261;
  detection.elevation = detectionGroup_256to263[scanID].flr2rdr_detn256to263elevn261;
  detection.range = detectionGroup_256to263[scanID].flr2rdr_detn256to263rnge261;
  detection.range_rate = detectionGroup_256to263[scanID].flr2rdr_detn256to263rng_rate261;
  detection.is_dynamic = detectionGroup_256to263[scanID].flr2rdr_detn256to263dyn_prpty261;
  detection.mode = detectionGroup_256to263[scanID].flr2rdr_detn256to263mode261;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_256to263[scanID].flr2rdr_detn256to263rng_qlty261);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_256to263[scanID].flr2rdr_detn256to263rng_rt_qlty261);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection262(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_256to263[scanID].flr2rdr_detn256to263snr262;
  detection.azimuth = detectionGroup_256to263[scanID].flr2rdr_detn256to263azi262;
  detection.elevation = detectionGroup_256to263[scanID].flr2rdr_detn256to263elevn262;
  detection.range = detectionGroup_256to263[scanID].flr2rdr_detn256to263rnge262;
  detection.range_rate = detectionGroup_256to263[scanID].flr2rdr_detn256to263rng_rate262;
  detection.is_dynamic = detectionGroup_256to263[scanID].flr2rdr_detn256to263dyn_prpty262;
  detection.mode = detectionGroup_256to263[scanID].flr2rdr_detn256to263mode262;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_256to263[scanID].flr2rdr_detn256to263rng_qlty262);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_256to263[scanID].flr2rdr_detn256to263rng_rt_qlty262);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection263(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_256to263[scanID].flr2rdr_detn256to263snr263;
  detection.azimuth = detectionGroup_256to263[scanID].flr2rdr_detn256to263azi263;
  detection.elevation = detectionGroup_256to263[scanID].flr2rdr_detn256to263elevn263;
  detection.range = detectionGroup_256to263[scanID].flr2rdr_detn256to263rnge263;
  detection.range_rate = detectionGroup_256to263[scanID].flr2rdr_detn256to263rng_rate263;
  detection.is_dynamic = detectionGroup_256to263[scanID].flr2rdr_detn256to263dyn_prpty263;
  detection.mode = detectionGroup_256to263[scanID].flr2rdr_detn256to263mode263;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_256to263[scanID].flr2rdr_detn256to263rng_qlty263);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_256to263[scanID].flr2rdr_detn256to263rng_rt_qlty263);

  return detection;
}

void InitialFLRMonitorHal::Impl::store_detection_data_264to271(const initialflrmonitorhal::types::FLR2RdrDetn264to271 detectionGroup, const uint8_t& scanID)
{
  if( !detectionGroup_264to271.count(scanID) )
  {
      detectionGroup_264to271.emplace(std::pair<uint8_t, initialflrmonitorhal::types::FLR2RdrDetn264to271>(scanID, detectionGroup));
      scan_id_counter[scanID]++;
  }
}



 // Get detection function  for detection ..... 33


flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection264(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_264to271[scanID].flr2rdr_detn264to271snr264;
  detection.azimuth = detectionGroup_264to271[scanID].flr2rdr_detn264to271azi264;
  detection.elevation = detectionGroup_264to271[scanID].flr2rdr_detn264to271elevn264;
  detection.range = detectionGroup_264to271[scanID].flr2rdr_detn264to271rnge264;
  detection.range_rate = detectionGroup_264to271[scanID].flr2rdr_detn264to271rng_rate264;
  detection.is_dynamic = detectionGroup_264to271[scanID].flr2rdr_detn264to271dyn_prpty264;
  detection.mode = detectionGroup_264to271[scanID].flr2rdr_detn264to271mode264;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_264to271[scanID].flr2rdr_detn264to271rng_qlty264);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_264to271[scanID].flr2rdr_detn264to271rng_rt_qlty264);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection265(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_264to271[scanID].flr2rdr_detn264to271snr265;
  detection.azimuth = detectionGroup_264to271[scanID].flr2rdr_detn264to271azi265;
  detection.elevation = detectionGroup_264to271[scanID].flr2rdr_detn264to271elevn265;
  detection.range = detectionGroup_264to271[scanID].flr2rdr_detn264to271rnge265;
  detection.range_rate = detectionGroup_264to271[scanID].flr2rdr_detn264to271rng_rate265;
  detection.is_dynamic = detectionGroup_264to271[scanID].flr2rdr_detn264to271dyn_prpty265;
  detection.mode = detectionGroup_264to271[scanID].flr2rdr_detn264to271mode265;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_264to271[scanID].flr2rdr_detn264to271rng_qlty265);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_264to271[scanID].flr2rdr_detn264to271rng_rt_qlty265);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection266(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_264to271[scanID].flr2rdr_detn264to271snr266;
  detection.azimuth = detectionGroup_264to271[scanID].flr2rdr_detn264to271azi266;
  detection.elevation = detectionGroup_264to271[scanID].flr2rdr_detn264to271elevn266;
  detection.range = detectionGroup_264to271[scanID].flr2rdr_detn264to271rnge266;
  detection.range_rate = detectionGroup_264to271[scanID].flr2rdr_detn264to271rng_rate266;
  detection.is_dynamic = detectionGroup_264to271[scanID].flr2rdr_detn264to271dyn_prpty266;
  detection.mode = detectionGroup_264to271[scanID].flr2rdr_detn264to271mode266;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_264to271[scanID].flr2rdr_detn264to271rng_qlty266);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_264to271[scanID].flr2rdr_detn264to271rng_rt_qlty266);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection267(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_264to271[scanID].flr2rdr_detn264to271snr267;
  detection.azimuth = detectionGroup_264to271[scanID].flr2rdr_detn264to271azi267;
  detection.elevation = detectionGroup_264to271[scanID].flr2rdr_detn264to271elevn267;
  detection.range = detectionGroup_264to271[scanID].flr2rdr_detn264to271rnge267;
  detection.range_rate = detectionGroup_264to271[scanID].flr2rdr_detn264to271rng_rate267;
  detection.is_dynamic = detectionGroup_264to271[scanID].flr2rdr_detn264to271dyn_prpty267;
  detection.mode = detectionGroup_264to271[scanID].flr2rdr_detn264to271mode267;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_264to271[scanID].flr2rdr_detn264to271rng_qlty267);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_264to271[scanID].flr2rdr_detn264to271rng_rt_qlty267);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection268(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_264to271[scanID].flr2rdr_detn264to271snr268;
  detection.azimuth = detectionGroup_264to271[scanID].flr2rdr_detn264to271azi268;
  detection.elevation = detectionGroup_264to271[scanID].flr2rdr_detn264to271elevn268;
  detection.range = detectionGroup_264to271[scanID].flr2rdr_detn264to271rnge268;
  detection.range_rate = detectionGroup_264to271[scanID].flr2rdr_detn264to271rng_rate268;
  detection.is_dynamic = detectionGroup_264to271[scanID].flr2rdr_detn264to271dyn_prpty268;
  detection.mode = detectionGroup_264to271[scanID].flr2rdr_detn264to271mode268;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_264to271[scanID].flr2rdr_detn264to271rng_qlty268);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_264to271[scanID].flr2rdr_detn264to271rng_rt_qlty268);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection269(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_264to271[scanID].flr2rdr_detn264to271snr269;
  detection.azimuth = detectionGroup_264to271[scanID].flr2rdr_detn264to271azi269;
  detection.elevation = detectionGroup_264to271[scanID].flr2rdr_detn264to271elevn269;
  detection.range = detectionGroup_264to271[scanID].flr2rdr_detn264to271rnge269;
  detection.range_rate = detectionGroup_264to271[scanID].flr2rdr_detn264to271rng_rate269;
  detection.is_dynamic = detectionGroup_264to271[scanID].flr2rdr_detn264to271dyn_prpty269;
  detection.mode = detectionGroup_264to271[scanID].flr2rdr_detn264to271mode269;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_264to271[scanID].flr2rdr_detn264to271rng_qlty269);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_264to271[scanID].flr2rdr_detn264to271rng_rt_qlty269);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection270(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_264to271[scanID].flr2rdr_detn264to271snr270;
  detection.azimuth = detectionGroup_264to271[scanID].flr2rdr_detn264to271azi270;
  detection.elevation = detectionGroup_264to271[scanID].flr2rdr_detn264to271elevn270;
  detection.range = detectionGroup_264to271[scanID].flr2rdr_detn264to271rnge270;
  detection.range_rate = detectionGroup_264to271[scanID].flr2rdr_detn264to271rng_rate270;
  detection.is_dynamic = detectionGroup_264to271[scanID].flr2rdr_detn264to271dyn_prpty270;
  detection.mode = detectionGroup_264to271[scanID].flr2rdr_detn264to271mode270;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_264to271[scanID].flr2rdr_detn264to271rng_qlty270);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_264to271[scanID].flr2rdr_detn264to271rng_rt_qlty270);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection271(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_264to271[scanID].flr2rdr_detn264to271snr271;
  detection.azimuth = detectionGroup_264to271[scanID].flr2rdr_detn264to271azi271;
  detection.elevation = detectionGroup_264to271[scanID].flr2rdr_detn264to271elevn271;
  detection.range = detectionGroup_264to271[scanID].flr2rdr_detn264to271rnge271;
  detection.range_rate = detectionGroup_264to271[scanID].flr2rdr_detn264to271rng_rate271;
  detection.is_dynamic = detectionGroup_264to271[scanID].flr2rdr_detn264to271dyn_prpty271;
  detection.mode = detectionGroup_264to271[scanID].flr2rdr_detn264to271mode271;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_264to271[scanID].flr2rdr_detn264to271rng_qlty271);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_264to271[scanID].flr2rdr_detn264to271rng_rt_qlty271);

  return detection;
}

void InitialFLRMonitorHal::Impl::store_detection_data_272to279(const initialflrmonitorhal::types::FLR2RdrDetn272to279 detectionGroup, const uint8_t& scanID)
{
  if( !detectionGroup_272to279.count(scanID) )
  {
      detectionGroup_272to279.emplace(std::pair<uint8_t, initialflrmonitorhal::types::FLR2RdrDetn272to279>(scanID, detectionGroup));
      scan_id_counter[scanID]++;
  }
}



 // Get detection function  for detection ..... 34


flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection272(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_272to279[scanID].flr2rdr_detn272to279snr272;
  detection.azimuth = detectionGroup_272to279[scanID].flr2rdr_detn272to279azi272;
  detection.elevation = detectionGroup_272to279[scanID].flr2rdr_detn272to279elevn272;
  detection.range = detectionGroup_272to279[scanID].flr2rdr_detn272to279rnge272;
  detection.range_rate = detectionGroup_272to279[scanID].flr2rdr_detn272to279rng_rate272;
  detection.is_dynamic = detectionGroup_272to279[scanID].flr2rdr_detn272to279dyn_prpty272;
  detection.mode = detectionGroup_272to279[scanID].flr2rdr_detn272to279mode272;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_272to279[scanID].flr2rdr_detn272to279rng_qlty272);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_272to279[scanID].flr2rdr_detn272to279rng_rt_qlty272);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection273(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_272to279[scanID].flr2rdr_detn272to279snr273;
  detection.azimuth = detectionGroup_272to279[scanID].flr2rdr_detn272to279azi273;
  detection.elevation = detectionGroup_272to279[scanID].flr2rdr_detn272to279elevn273;
  detection.range = detectionGroup_272to279[scanID].flr2rdr_detn272to279rnge273;
  detection.range_rate = detectionGroup_272to279[scanID].flr2rdr_detn272to279rng_rate273;
  detection.is_dynamic = detectionGroup_272to279[scanID].flr2rdr_detn272to279dyn_prpty273;
  detection.mode = detectionGroup_272to279[scanID].flr2rdr_detn272to279mode273;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_272to279[scanID].flr2rdr_detn272to279rng_qlty273);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_272to279[scanID].flr2rdr_detn272to279rng_rt_qlty273);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection274(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_272to279[scanID].flr2rdr_detn272to279snr274;
  detection.azimuth = detectionGroup_272to279[scanID].flr2rdr_detn272to279azi274;
  detection.elevation = detectionGroup_272to279[scanID].flr2rdr_detn272to279elevn274;
  detection.range = detectionGroup_272to279[scanID].flr2rdr_detn272to279rnge274;
  detection.range_rate = detectionGroup_272to279[scanID].flr2rdr_detn272to279rng_rate274;
  detection.is_dynamic = detectionGroup_272to279[scanID].flr2rdr_detn272to279dyn_prpty274;
  detection.mode = detectionGroup_272to279[scanID].flr2rdr_detn272to279mode274;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_272to279[scanID].flr2rdr_detn272to279rng_qlty274);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_272to279[scanID].flr2rdr_detn272to279rng_rt_qlty274);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection275(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_272to279[scanID].flr2rdr_detn272to279snr275;
  detection.azimuth = detectionGroup_272to279[scanID].flr2rdr_detn272to279azi275;
  detection.elevation = detectionGroup_272to279[scanID].flr2rdr_detn272to279elevn275;
  detection.range = detectionGroup_272to279[scanID].flr2rdr_detn272to279rnge275;
  detection.range_rate = detectionGroup_272to279[scanID].flr2rdr_detn272to279rng_rate275;
  detection.is_dynamic = detectionGroup_272to279[scanID].flr2rdr_detn272to279dyn_prpty275;
  detection.mode = detectionGroup_272to279[scanID].flr2rdr_detn272to279mode275;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_272to279[scanID].flr2rdr_detn272to279rng_qlty275);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_272to279[scanID].flr2rdr_detn272to279rng_rt_qlty275);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection276(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_272to279[scanID].flr2rdr_detn272to279snr276;
  detection.azimuth = detectionGroup_272to279[scanID].flr2rdr_detn272to279azi276;
  detection.elevation = detectionGroup_272to279[scanID].flr2rdr_detn272to279elevn276;
  detection.range = detectionGroup_272to279[scanID].flr2rdr_detn272to279rnge276;
  detection.range_rate = detectionGroup_272to279[scanID].flr2rdr_detn272to279rng_rate276;
  detection.is_dynamic = detectionGroup_272to279[scanID].flr2rdr_detn272to279dyn_prpty276;
  detection.mode = detectionGroup_272to279[scanID].flr2rdr_detn272to279mode276;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_272to279[scanID].flr2rdr_detn272to279rng_qlty276);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_272to279[scanID].flr2rdr_detn272to279rng_rt_qlty276);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection277(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_272to279[scanID].flr2rdr_detn272to279snr277;
  detection.azimuth = detectionGroup_272to279[scanID].flr2rdr_detn272to279azi277;
  detection.elevation = detectionGroup_272to279[scanID].flr2rdr_detn272to279elevn277;
  detection.range = detectionGroup_272to279[scanID].flr2rdr_detn272to279rnge277;
  detection.range_rate = detectionGroup_272to279[scanID].flr2rdr_detn272to279rng_rate277;
  detection.is_dynamic = detectionGroup_272to279[scanID].flr2rdr_detn272to279dyn_prpty277;
  detection.mode = detectionGroup_272to279[scanID].flr2rdr_detn272to279mode277;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_272to279[scanID].flr2rdr_detn272to279rng_qlty277);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_272to279[scanID].flr2rdr_detn272to279rng_rt_qlty277);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection278(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_272to279[scanID].flr2rdr_detn272to279snr278;
  detection.azimuth = detectionGroup_272to279[scanID].flr2rdr_detn272to279azi278;
  detection.elevation = detectionGroup_272to279[scanID].flr2rdr_detn272to279elevn278;
  detection.range = detectionGroup_272to279[scanID].flr2rdr_detn272to279rnge278;
  detection.range_rate = detectionGroup_272to279[scanID].flr2rdr_detn272to279rng_rate278;
  detection.is_dynamic = detectionGroup_272to279[scanID].flr2rdr_detn272to279dyn_prpty278;
  detection.mode = detectionGroup_272to279[scanID].flr2rdr_detn272to279mode278;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_272to279[scanID].flr2rdr_detn272to279rng_qlty278);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_272to279[scanID].flr2rdr_detn272to279rng_rt_qlty278);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection279(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_272to279[scanID].flr2rdr_detn272to279snr279;
  detection.azimuth = detectionGroup_272to279[scanID].flr2rdr_detn272to279azi279;
  detection.elevation = detectionGroup_272to279[scanID].flr2rdr_detn272to279elevn279;
  detection.range = detectionGroup_272to279[scanID].flr2rdr_detn272to279rnge279;
  detection.range_rate = detectionGroup_272to279[scanID].flr2rdr_detn272to279rng_rate279;
  detection.is_dynamic = detectionGroup_272to279[scanID].flr2rdr_detn272to279dyn_prpty279;
  detection.mode = detectionGroup_272to279[scanID].flr2rdr_detn272to279mode279;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_272to279[scanID].flr2rdr_detn272to279rng_qlty279);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_272to279[scanID].flr2rdr_detn272to279rng_rt_qlty279);

  return detection;
}

void InitialFLRMonitorHal::Impl::store_detection_data_280to287(const initialflrmonitorhal::types::FLR2RdrDetn280to287 detectionGroup, const uint8_t& scanID)
{
  if( !detectionGroup_280to287.count(scanID) )
  {
      detectionGroup_280to287.emplace(std::pair<uint8_t, initialflrmonitorhal::types::FLR2RdrDetn280to287>(scanID, detectionGroup));
      scan_id_counter[scanID]++;
  }
}



 // Get detection function  for detection ..... 35


flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection280(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_280to287[scanID].flr2rdr_detn280to287snr280;
  detection.azimuth = detectionGroup_280to287[scanID].flr2rdr_detn280to287azi280;
  detection.elevation = detectionGroup_280to287[scanID].flr2rdr_detn280to287elevn280;
  detection.range = detectionGroup_280to287[scanID].flr2rdr_detn280to287rnge280;
  detection.range_rate = detectionGroup_280to287[scanID].flr2rdr_detn280to287rng_rate280;
  detection.is_dynamic = detectionGroup_280to287[scanID].flr2rdr_detn280to287dyn_prpty280;
  detection.mode = detectionGroup_280to287[scanID].flr2rdr_detn280to287mode280;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_280to287[scanID].flr2rdr_detn280to287rng_qlty280);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_280to287[scanID].flr2rdr_detn280to287rng_rt_qlty280);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection281(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_280to287[scanID].flr2rdr_detn280to287snr281;
  detection.azimuth = detectionGroup_280to287[scanID].flr2rdr_detn280to287azi281;
  detection.elevation = detectionGroup_280to287[scanID].flr2rdr_detn280to287elevn281;
  detection.range = detectionGroup_280to287[scanID].flr2rdr_detn280to287rnge281;
  detection.range_rate = detectionGroup_280to287[scanID].flr2rdr_detn280to287rng_rate281;
  detection.is_dynamic = detectionGroup_280to287[scanID].flr2rdr_detn280to287dyn_prpty281;
  detection.mode = detectionGroup_280to287[scanID].flr2rdr_detn280to287mode281;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_280to287[scanID].flr2rdr_detn280to287rng_qlty281);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_280to287[scanID].flr2rdr_detn280to287rng_rt_qlty281);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection282(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_280to287[scanID].flr2rdr_detn280to287snr282;
  detection.azimuth = detectionGroup_280to287[scanID].flr2rdr_detn280to287azi282;
  detection.elevation = detectionGroup_280to287[scanID].flr2rdr_detn280to287elevn282;
  detection.range = detectionGroup_280to287[scanID].flr2rdr_detn280to287rnge282;
  detection.range_rate = detectionGroup_280to287[scanID].flr2rdr_detn280to287rng_rate282;
  detection.is_dynamic = detectionGroup_280to287[scanID].flr2rdr_detn280to287dyn_prpty282;
  detection.mode = detectionGroup_280to287[scanID].flr2rdr_detn280to287mode282;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_280to287[scanID].flr2rdr_detn280to287rng_qlty282);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_280to287[scanID].flr2rdr_detn280to287rng_rt_qlty282);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection283(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_280to287[scanID].flr2rdr_detn280to287snr283;
  detection.azimuth = detectionGroup_280to287[scanID].flr2rdr_detn280to287azi283;
  detection.elevation = detectionGroup_280to287[scanID].flr2rdr_detn280to287elevn283;
  detection.range = detectionGroup_280to287[scanID].flr2rdr_detn280to287rnge283;
  detection.range_rate = detectionGroup_280to287[scanID].flr2rdr_detn280to287rng_rate283;
  detection.is_dynamic = detectionGroup_280to287[scanID].flr2rdr_detn280to287dyn_prpty283;
  detection.mode = detectionGroup_280to287[scanID].flr2rdr_detn280to287mode283;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_280to287[scanID].flr2rdr_detn280to287rng_qlty283);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_280to287[scanID].flr2rdr_detn280to287rng_rt_qlty283);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection284(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_280to287[scanID].flr2rdr_detn280to287snr284;
  detection.azimuth = detectionGroup_280to287[scanID].flr2rdr_detn280to287azi284;
  detection.elevation = detectionGroup_280to287[scanID].flr2rdr_detn280to287elevn284;
  detection.range = detectionGroup_280to287[scanID].flr2rdr_detn280to287rnge284;
  detection.range_rate = detectionGroup_280to287[scanID].flr2rdr_detn280to287rng_rate284;
  detection.is_dynamic = detectionGroup_280to287[scanID].flr2rdr_detn280to287dyn_prpty284;
  detection.mode = detectionGroup_280to287[scanID].flr2rdr_detn280to287mode284;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_280to287[scanID].flr2rdr_detn280to287rng_qlty284);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_280to287[scanID].flr2rdr_detn280to287rng_rt_qlty284);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection285(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_280to287[scanID].flr2rdr_detn280to287snr285;
  detection.azimuth = detectionGroup_280to287[scanID].flr2rdr_detn280to287azi285;
  detection.elevation = detectionGroup_280to287[scanID].flr2rdr_detn280to287elevn285;
  detection.range = detectionGroup_280to287[scanID].flr2rdr_detn280to287rnge285;
  detection.range_rate = detectionGroup_280to287[scanID].flr2rdr_detn280to287rng_rate285;
  detection.is_dynamic = detectionGroup_280to287[scanID].flr2rdr_detn280to287dyn_prpty285;
  detection.mode = detectionGroup_280to287[scanID].flr2rdr_detn280to287mode285;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_280to287[scanID].flr2rdr_detn280to287rng_qlty285);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_280to287[scanID].flr2rdr_detn280to287rng_rt_qlty285);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection286(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_280to287[scanID].flr2rdr_detn280to287snr286;
  detection.azimuth = detectionGroup_280to287[scanID].flr2rdr_detn280to287azi286;
  detection.elevation = detectionGroup_280to287[scanID].flr2rdr_detn280to287elevn286;
  detection.range = detectionGroup_280to287[scanID].flr2rdr_detn280to287rnge286;
  detection.range_rate = detectionGroup_280to287[scanID].flr2rdr_detn280to287rng_rate286;
  detection.is_dynamic = detectionGroup_280to287[scanID].flr2rdr_detn280to287dyn_prpty286;
  detection.mode = detectionGroup_280to287[scanID].flr2rdr_detn280to287mode286;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_280to287[scanID].flr2rdr_detn280to287rng_qlty286);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_280to287[scanID].flr2rdr_detn280to287rng_rt_qlty286);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection287(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_280to287[scanID].flr2rdr_detn280to287snr287;
  detection.azimuth = detectionGroup_280to287[scanID].flr2rdr_detn280to287azi287;
  detection.elevation = detectionGroup_280to287[scanID].flr2rdr_detn280to287elevn287;
  detection.range = detectionGroup_280to287[scanID].flr2rdr_detn280to287rnge287;
  detection.range_rate = detectionGroup_280to287[scanID].flr2rdr_detn280to287rng_rate287;
  detection.is_dynamic = detectionGroup_280to287[scanID].flr2rdr_detn280to287dyn_prpty287;
  detection.mode = detectionGroup_280to287[scanID].flr2rdr_detn280to287mode287;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_280to287[scanID].flr2rdr_detn280to287rng_qlty287);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_280to287[scanID].flr2rdr_detn280to287rng_rt_qlty287);

  return detection;
}

void InitialFLRMonitorHal::Impl::store_detection_data_288to295(const initialflrmonitorhal::types::FLR2RdrDetn288to295 detectionGroup, const uint8_t& scanID)
{
  if( !detectionGroup_288to295.count(scanID) )
  {
      detectionGroup_288to295.emplace(std::pair<uint8_t, initialflrmonitorhal::types::FLR2RdrDetn288to295>(scanID, detectionGroup));
      scan_id_counter[scanID]++;
  }
}



 // Get detection function  for detection ..... 36


flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection288(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_288to295[scanID].flr2rdr_detn288to295snr288;
  detection.azimuth = detectionGroup_288to295[scanID].flr2rdr_detn288to295azi288;
  detection.elevation = detectionGroup_288to295[scanID].flr2rdr_detn288to295elevn288;
  detection.range = detectionGroup_288to295[scanID].flr2rdr_detn288to295rnge288;
  detection.range_rate = detectionGroup_288to295[scanID].flr2rdr_detn288to295rng_rate288;
  detection.is_dynamic = detectionGroup_288to295[scanID].flr2rdr_detn288to295dyn_prpty288;
  detection.mode = detectionGroup_288to295[scanID].flr2rdr_detn288to295mode288;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_288to295[scanID].flr2rdr_detn288to295rng_qlty288);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_288to295[scanID].flr2rdr_detn288to295rng_rt_qlty288);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection289(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_288to295[scanID].flr2rdr_detn288to295snr289;
  detection.azimuth = detectionGroup_288to295[scanID].flr2rdr_detn288to295azi289;
  detection.elevation = detectionGroup_288to295[scanID].flr2rdr_detn288to295elevn289;
  detection.range = detectionGroup_288to295[scanID].flr2rdr_detn288to295rnge289;
  detection.range_rate = detectionGroup_288to295[scanID].flr2rdr_detn288to295rng_rate289;
  detection.is_dynamic = detectionGroup_288to295[scanID].flr2rdr_detn288to295dyn_prpty289;
  detection.mode = detectionGroup_288to295[scanID].flr2rdr_detn288to295mode289;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_288to295[scanID].flr2rdr_detn288to295rng_qlty289);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_288to295[scanID].flr2rdr_detn288to295rng_rt_qlty289);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection290(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_288to295[scanID].flr2rdr_detn288to295snr290;
  detection.azimuth = detectionGroup_288to295[scanID].flr2rdr_detn288to295azi290;
  detection.elevation = detectionGroup_288to295[scanID].flr2rdr_detn288to295elevn290;
  detection.range = detectionGroup_288to295[scanID].flr2rdr_detn288to295rnge290;
  detection.range_rate = detectionGroup_288to295[scanID].flr2rdr_detn288to295rng_rate290;
  detection.is_dynamic = detectionGroup_288to295[scanID].flr2rdr_detn288to295dyn_prpty290;
  detection.mode = detectionGroup_288to295[scanID].flr2rdr_detn288to295mode290;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_288to295[scanID].flr2rdr_detn288to295rng_qlty290);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_288to295[scanID].flr2rdr_detn288to295rng_rt_qlty290);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection291(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_288to295[scanID].flr2rdr_detn288to295snr291;
  detection.azimuth = detectionGroup_288to295[scanID].flr2rdr_detn288to295azi291;
  detection.elevation = detectionGroup_288to295[scanID].flr2rdr_detn288to295elevn291;
  detection.range = detectionGroup_288to295[scanID].flr2rdr_detn288to295rnge291;
  detection.range_rate = detectionGroup_288to295[scanID].flr2rdr_detn288to295rng_rate291;
  detection.is_dynamic = detectionGroup_288to295[scanID].flr2rdr_detn288to295dyn_prpty291;
  detection.mode = detectionGroup_288to295[scanID].flr2rdr_detn288to295mode291;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_288to295[scanID].flr2rdr_detn288to295rng_qlty291);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_288to295[scanID].flr2rdr_detn288to295rng_rt_qlty291);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection292(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_288to295[scanID].flr2rdr_detn288to295snr292;
  detection.azimuth = detectionGroup_288to295[scanID].flr2rdr_detn288to295azi292;
  detection.elevation = detectionGroup_288to295[scanID].flr2rdr_detn288to295elevn292;
  detection.range = detectionGroup_288to295[scanID].flr2rdr_detn288to295rnge292;
  detection.range_rate = detectionGroup_288to295[scanID].flr2rdr_detn288to295rng_rate292;
  detection.is_dynamic = detectionGroup_288to295[scanID].flr2rdr_detn288to295dyn_prpty292;
  detection.mode = detectionGroup_288to295[scanID].flr2rdr_detn288to295mode292;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_288to295[scanID].flr2rdr_detn288to295rng_qlty292);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_288to295[scanID].flr2rdr_detn288to295rng_rt_qlty292);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection293(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_288to295[scanID].flr2rdr_detn288to295snr293;
  detection.azimuth = detectionGroup_288to295[scanID].flr2rdr_detn288to295azi293;
  detection.elevation = detectionGroup_288to295[scanID].flr2rdr_detn288to295elevn293;
  detection.range = detectionGroup_288to295[scanID].flr2rdr_detn288to295rnge293;
  detection.range_rate = detectionGroup_288to295[scanID].flr2rdr_detn288to295rng_rate293;
  detection.is_dynamic = detectionGroup_288to295[scanID].flr2rdr_detn288to295dyn_prpty293;
  detection.mode = detectionGroup_288to295[scanID].flr2rdr_detn288to295mode293;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_288to295[scanID].flr2rdr_detn288to295rng_qlty293);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_288to295[scanID].flr2rdr_detn288to295rng_rt_qlty293);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection294(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_288to295[scanID].flr2rdr_detn288to295snr294;
  detection.azimuth = detectionGroup_288to295[scanID].flr2rdr_detn288to295azi294;
  detection.elevation = detectionGroup_288to295[scanID].flr2rdr_detn288to295elevn294;
  detection.range = detectionGroup_288to295[scanID].flr2rdr_detn288to295rnge294;
  detection.range_rate = detectionGroup_288to295[scanID].flr2rdr_detn288to295rng_rate294;
  detection.is_dynamic = detectionGroup_288to295[scanID].flr2rdr_detn288to295dyn_prpty294;
  detection.mode = detectionGroup_288to295[scanID].flr2rdr_detn288to295mode294;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_288to295[scanID].flr2rdr_detn288to295rng_qlty294);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_288to295[scanID].flr2rdr_detn288to295rng_rt_qlty294);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection295(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_288to295[scanID].flr2rdr_detn288to295snr295;
  detection.azimuth = detectionGroup_288to295[scanID].flr2rdr_detn288to295azi295;
  detection.elevation = detectionGroup_288to295[scanID].flr2rdr_detn288to295elevn295;
  detection.range = detectionGroup_288to295[scanID].flr2rdr_detn288to295rnge295;
  detection.range_rate = detectionGroup_288to295[scanID].flr2rdr_detn288to295rng_rate295;
  detection.is_dynamic = detectionGroup_288to295[scanID].flr2rdr_detn288to295dyn_prpty295;
  detection.mode = detectionGroup_288to295[scanID].flr2rdr_detn288to295mode295;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_288to295[scanID].flr2rdr_detn288to295rng_qlty295);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_288to295[scanID].flr2rdr_detn288to295rng_rt_qlty295);

  return detection;
}

void InitialFLRMonitorHal::Impl::store_detection_data_296to303(const initialflrmonitorhal::types::FLR2RdrDetn296to303 detectionGroup, const uint8_t& scanID)
{
  if( !detectionGroup_296to303.count(scanID) )
  {
      detectionGroup_296to303.emplace(std::pair<uint8_t, initialflrmonitorhal::types::FLR2RdrDetn296to303>(scanID, detectionGroup));
      scan_id_counter[scanID]++;
  }
}



 // Get detection function  for detection ..... 37


flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection296(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_296to303[scanID].flr2rdr_detn296to303snr296;
  detection.azimuth = detectionGroup_296to303[scanID].flr2rdr_detn296to303azi296;
  detection.elevation = detectionGroup_296to303[scanID].flr2rdr_detn296to303elevn296;
  detection.range = detectionGroup_296to303[scanID].flr2rdr_detn296to303rnge296;
  detection.range_rate = detectionGroup_296to303[scanID].flr2rdr_detn296to303rng_rate296;
  detection.is_dynamic = detectionGroup_296to303[scanID].flr2rdr_detn296to303dyn_prpty296;
  detection.mode = detectionGroup_296to303[scanID].flr2rdr_detn296to303mode296;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_296to303[scanID].flr2rdr_detn296to303rng_qlty296);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_296to303[scanID].flr2rdr_detn296to303rng_rt_qlty296);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection297(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_296to303[scanID].flr2rdr_detn296to303snr297;
  detection.azimuth = detectionGroup_296to303[scanID].flr2rdr_detn296to303azi297;
  detection.elevation = detectionGroup_296to303[scanID].flr2rdr_detn296to303elevn297;
  detection.range = detectionGroup_296to303[scanID].flr2rdr_detn296to303rnge297;
  detection.range_rate = detectionGroup_296to303[scanID].flr2rdr_detn296to303rng_rate297;
  detection.is_dynamic = detectionGroup_296to303[scanID].flr2rdr_detn296to303dyn_prpty297;
  detection.mode = detectionGroup_296to303[scanID].flr2rdr_detn296to303mode297;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_296to303[scanID].flr2rdr_detn296to303rng_qlty297);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_296to303[scanID].flr2rdr_detn296to303rng_rt_qlty297);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection298(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_296to303[scanID].flr2rdr_detn296to303snr298;
  detection.azimuth = detectionGroup_296to303[scanID].flr2rdr_detn296to303azi298;
  detection.elevation = detectionGroup_296to303[scanID].flr2rdr_detn296to303elevn298;
  detection.range = detectionGroup_296to303[scanID].flr2rdr_detn296to303rnge298;
  detection.range_rate = detectionGroup_296to303[scanID].flr2rdr_detn296to303rng_rate298;
  detection.is_dynamic = detectionGroup_296to303[scanID].flr2rdr_detn296to303dyn_prpty298;
  detection.mode = detectionGroup_296to303[scanID].flr2rdr_detn296to303mode298;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_296to303[scanID].flr2rdr_detn296to303rng_qlty298);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_296to303[scanID].flr2rdr_detn296to303rng_rt_qlty298);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection299(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_296to303[scanID].flr2rdr_detn296to303snr299;
  detection.azimuth = detectionGroup_296to303[scanID].flr2rdr_detn296to303azi299;
  detection.elevation = detectionGroup_296to303[scanID].flr2rdr_detn296to303elevn299;
  detection.range = detectionGroup_296to303[scanID].flr2rdr_detn296to303rnge299;
  detection.range_rate = detectionGroup_296to303[scanID].flr2rdr_detn296to303rng_rate299;
  detection.is_dynamic = detectionGroup_296to303[scanID].flr2rdr_detn296to303dyn_prpty299;
  detection.mode = detectionGroup_296to303[scanID].flr2rdr_detn296to303mode299;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_296to303[scanID].flr2rdr_detn296to303rng_qlty299);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_296to303[scanID].flr2rdr_detn296to303rng_rt_qlty299);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection300(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_296to303[scanID].flr2rdr_detn296to303snr300;
  detection.azimuth = detectionGroup_296to303[scanID].flr2rdr_detn296to303azi300;
  detection.elevation = detectionGroup_296to303[scanID].flr2rdr_detn296to303elevn300;
  detection.range = detectionGroup_296to303[scanID].flr2rdr_detn296to303rnge300;
  detection.range_rate = detectionGroup_296to303[scanID].flr2rdr_detn296to303rng_rate300;
  detection.is_dynamic = detectionGroup_296to303[scanID].flr2rdr_detn296to303dyn_prpty300;
  detection.mode = detectionGroup_296to303[scanID].flr2rdr_detn296to303mode300;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_296to303[scanID].flr2rdr_detn296to303rng_qlty300);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_296to303[scanID].flr2rdr_detn296to303rng_rt_qlty300);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection301(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_296to303[scanID].flr2rdr_detn296to303snr301;
  detection.azimuth = detectionGroup_296to303[scanID].flr2rdr_detn296to303azi301;
  detection.elevation = detectionGroup_296to303[scanID].flr2rdr_detn296to303elevn301;
  detection.range = detectionGroup_296to303[scanID].flr2rdr_detn296to303rnge301;
  detection.range_rate = detectionGroup_296to303[scanID].flr2rdr_detn296to303rng_rate301;
  detection.is_dynamic = detectionGroup_296to303[scanID].flr2rdr_detn296to303dyn_prpty301;
  detection.mode = detectionGroup_296to303[scanID].flr2rdr_detn296to303mode301;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_296to303[scanID].flr2rdr_detn296to303rng_qlty301);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_296to303[scanID].flr2rdr_detn296to303rng_rt_qlty301);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection302(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_296to303[scanID].flr2rdr_detn296to303snr302;
  detection.azimuth = detectionGroup_296to303[scanID].flr2rdr_detn296to303azi302;
  detection.elevation = detectionGroup_296to303[scanID].flr2rdr_detn296to303elevn302;
  detection.range = detectionGroup_296to303[scanID].flr2rdr_detn296to303rnge302;
  detection.range_rate = detectionGroup_296to303[scanID].flr2rdr_detn296to303rng_rate302;
  detection.is_dynamic = detectionGroup_296to303[scanID].flr2rdr_detn296to303dyn_prpty302;
  detection.mode = detectionGroup_296to303[scanID].flr2rdr_detn296to303mode302;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_296to303[scanID].flr2rdr_detn296to303rng_qlty302);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_296to303[scanID].flr2rdr_detn296to303rng_rt_qlty302);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection303(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_296to303[scanID].flr2rdr_detn296to303snr303;
  detection.azimuth = detectionGroup_296to303[scanID].flr2rdr_detn296to303azi303;
  detection.elevation = detectionGroup_296to303[scanID].flr2rdr_detn296to303elevn303;
  detection.range = detectionGroup_296to303[scanID].flr2rdr_detn296to303rnge303;
  detection.range_rate = detectionGroup_296to303[scanID].flr2rdr_detn296to303rng_rate303;
  detection.is_dynamic = detectionGroup_296to303[scanID].flr2rdr_detn296to303dyn_prpty303;
  detection.mode = detectionGroup_296to303[scanID].flr2rdr_detn296to303mode303;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_296to303[scanID].flr2rdr_detn296to303rng_qlty303);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_296to303[scanID].flr2rdr_detn296to303rng_rt_qlty303);

  return detection;
}

void InitialFLRMonitorHal::Impl::store_detection_data_304to311(const initialflrmonitorhal::types::FLR2RdrDetn304to311 detectionGroup, const uint8_t& scanID)
{
  if( !detectionGroup_304to311.count(scanID) )
  {
      detectionGroup_304to311.emplace(std::pair<uint8_t, initialflrmonitorhal::types::FLR2RdrDetn304to311>(scanID, detectionGroup));
      scan_id_counter[scanID]++;
  }
}



 // Get detection function  for detection ..... 38


flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection304(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_304to311[scanID].flr2rdr_detn304to311snr304;
  detection.azimuth = detectionGroup_304to311[scanID].flr2rdr_detn304to311azi304;
  detection.elevation = detectionGroup_304to311[scanID].flr2rdr_detn304to311elevn304;
  detection.range = detectionGroup_304to311[scanID].flr2rdr_detn304to311rnge304;
  detection.range_rate = detectionGroup_304to311[scanID].flr2rdr_detn304to311rng_rate304;
  detection.is_dynamic = detectionGroup_304to311[scanID].flr2rdr_detn304to311dyn_prpty304;
  detection.mode = detectionGroup_304to311[scanID].flr2rdr_detn304to311mode304;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_304to311[scanID].flr2rdr_detn304to311rng_qlty304);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_304to311[scanID].flr2rdr_detn304to311rng_rt_qlty304);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection305(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_304to311[scanID].flr2rdr_detn304to311snr305;
  detection.azimuth = detectionGroup_304to311[scanID].flr2rdr_detn304to311azi305;
  detection.elevation = detectionGroup_304to311[scanID].flr2rdr_detn304to311elevn305;
  detection.range = detectionGroup_304to311[scanID].flr2rdr_detn304to311rnge305;
  detection.range_rate = detectionGroup_304to311[scanID].flr2rdr_detn304to311rng_rate305;
  detection.is_dynamic = detectionGroup_304to311[scanID].flr2rdr_detn304to311dyn_prpty305;
  detection.mode = detectionGroup_304to311[scanID].flr2rdr_detn304to311mode305;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_304to311[scanID].flr2rdr_detn304to311rng_qlty305);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_304to311[scanID].flr2rdr_detn304to311rng_rt_qlty305);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection306(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_304to311[scanID].flr2rdr_detn304to311snr306;
  detection.azimuth = detectionGroup_304to311[scanID].flr2rdr_detn304to311azi306;
  detection.elevation = detectionGroup_304to311[scanID].flr2rdr_detn304to311elevn306;
  detection.range = detectionGroup_304to311[scanID].flr2rdr_detn304to311rnge306;
  detection.range_rate = detectionGroup_304to311[scanID].flr2rdr_detn304to311rng_rate306;
  detection.is_dynamic = detectionGroup_304to311[scanID].flr2rdr_detn304to311dyn_prpty306;
  detection.mode = detectionGroup_304to311[scanID].flr2rdr_detn304to311mode306;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_304to311[scanID].flr2rdr_detn304to311rng_qlty306);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_304to311[scanID].flr2rdr_detn304to311rng_rt_qlty306);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection307(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_304to311[scanID].flr2rdr_detn304to311snr307;
  detection.azimuth = detectionGroup_304to311[scanID].flr2rdr_detn304to311azi307;
  detection.elevation = detectionGroup_304to311[scanID].flr2rdr_detn304to311elevn307;
  detection.range = detectionGroup_304to311[scanID].flr2rdr_detn304to311rnge307;
  detection.range_rate = detectionGroup_304to311[scanID].flr2rdr_detn304to311rng_rate307;
  detection.is_dynamic = detectionGroup_304to311[scanID].flr2rdr_detn304to311dyn_prpty307;
  detection.mode = detectionGroup_304to311[scanID].flr2rdr_detn304to311mode307;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_304to311[scanID].flr2rdr_detn304to311rng_qlty307);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_304to311[scanID].flr2rdr_detn304to311rng_rt_qlty307);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection308(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_304to311[scanID].flr2rdr_detn304to311snr308;
  detection.azimuth = detectionGroup_304to311[scanID].flr2rdr_detn304to311azi308;
  detection.elevation = detectionGroup_304to311[scanID].flr2rdr_detn304to311elevn308;
  detection.range = detectionGroup_304to311[scanID].flr2rdr_detn304to311rnge308;
  detection.range_rate = detectionGroup_304to311[scanID].flr2rdr_detn304to311rng_rate308;
  detection.is_dynamic = detectionGroup_304to311[scanID].flr2rdr_detn304to311dyn_prpty308;
  detection.mode = detectionGroup_304to311[scanID].flr2rdr_detn304to311mode308;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_304to311[scanID].flr2rdr_detn304to311rng_qlty308);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_304to311[scanID].flr2rdr_detn304to311rng_rt_qlty308);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection309(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_304to311[scanID].flr2rdr_detn304to311snr309;
  detection.azimuth = detectionGroup_304to311[scanID].flr2rdr_detn304to311azi309;
  detection.elevation = detectionGroup_304to311[scanID].flr2rdr_detn304to311elevn309;
  detection.range = detectionGroup_304to311[scanID].flr2rdr_detn304to311rnge309;
  detection.range_rate = detectionGroup_304to311[scanID].flr2rdr_detn304to311rng_rate309;
  detection.is_dynamic = detectionGroup_304to311[scanID].flr2rdr_detn304to311dyn_prpty309;
  detection.mode = detectionGroup_304to311[scanID].flr2rdr_detn304to311mode309;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_304to311[scanID].flr2rdr_detn304to311rng_qlty309);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_304to311[scanID].flr2rdr_detn304to311rng_rt_qlty309);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection310(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_304to311[scanID].flr2rdr_detn304to311snr310;
  detection.azimuth = detectionGroup_304to311[scanID].flr2rdr_detn304to311azi310;
  detection.elevation = detectionGroup_304to311[scanID].flr2rdr_detn304to311elevn310;
  detection.range = detectionGroup_304to311[scanID].flr2rdr_detn304to311rnge310;
  detection.range_rate = detectionGroup_304to311[scanID].flr2rdr_detn304to311rng_rate310;
  detection.is_dynamic = detectionGroup_304to311[scanID].flr2rdr_detn304to311dyn_prpty310;
  detection.mode = detectionGroup_304to311[scanID].flr2rdr_detn304to311mode310;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_304to311[scanID].flr2rdr_detn304to311rng_qlty310);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_304to311[scanID].flr2rdr_detn304to311rng_rt_qlty310);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection311(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_304to311[scanID].flr2rdr_detn304to311snr311;
  detection.azimuth = detectionGroup_304to311[scanID].flr2rdr_detn304to311azi311;
  detection.elevation = detectionGroup_304to311[scanID].flr2rdr_detn304to311elevn311;
  detection.range = detectionGroup_304to311[scanID].flr2rdr_detn304to311rnge311;
  detection.range_rate = detectionGroup_304to311[scanID].flr2rdr_detn304to311rng_rate311;
  detection.is_dynamic = detectionGroup_304to311[scanID].flr2rdr_detn304to311dyn_prpty311;
  detection.mode = detectionGroup_304to311[scanID].flr2rdr_detn304to311mode311;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_304to311[scanID].flr2rdr_detn304to311rng_qlty311);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_304to311[scanID].flr2rdr_detn304to311rng_rt_qlty311);

  return detection;
}

void InitialFLRMonitorHal::Impl::store_detection_data_312to319(const initialflrmonitorhal::types::FLR2RdrDetn312to319 detectionGroup, const uint8_t& scanID)
{
  if( !detectionGroup_312to319.count(scanID) )
  {
      detectionGroup_312to319.emplace(std::pair<uint8_t, initialflrmonitorhal::types::FLR2RdrDetn312to319>(scanID, detectionGroup));
      scan_id_counter[scanID]++;
  }
}



 // Get detection function  for detection ..... 39


flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection312(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_312to319[scanID].flr2rdr_detn312to319snr312;
  detection.azimuth = detectionGroup_312to319[scanID].flr2rdr_detn312to319azi312;
  detection.elevation = detectionGroup_312to319[scanID].flr2rdr_detn312to319elevn312;
  detection.range = detectionGroup_312to319[scanID].flr2rdr_detn312to319rnge312;
  detection.range_rate = detectionGroup_312to319[scanID].flr2rdr_detn312to319rng_rate312;
  detection.is_dynamic = detectionGroup_312to319[scanID].flr2rdr_detn312to319dyn_prpty312;
  detection.mode = detectionGroup_312to319[scanID].flr2rdr_detn312to319mode312;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_312to319[scanID].flr2rdr_detn312to319rng_qlty312);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_312to319[scanID].flr2rdr_detn312to319rng_rt_qlty312);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection313(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_312to319[scanID].flr2rdr_detn312to319snr313;
  detection.azimuth = detectionGroup_312to319[scanID].flr2rdr_detn312to319azi313;
  detection.elevation = detectionGroup_312to319[scanID].flr2rdr_detn312to319elevn313;
  detection.range = detectionGroup_312to319[scanID].flr2rdr_detn312to319rnge313;
  detection.range_rate = detectionGroup_312to319[scanID].flr2rdr_detn312to319rng_rate313;
  detection.is_dynamic = detectionGroup_312to319[scanID].flr2rdr_detn312to319dyn_prpty313;
  detection.mode = detectionGroup_312to319[scanID].flr2rdr_detn312to319mode313;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_312to319[scanID].flr2rdr_detn312to319rng_qlty313);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_312to319[scanID].flr2rdr_detn312to319rng_rt_qlty313);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection314(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_312to319[scanID].flr2rdr_detn312to319snr314;
  detection.azimuth = detectionGroup_312to319[scanID].flr2rdr_detn312to319azi314;
  detection.elevation = detectionGroup_312to319[scanID].flr2rdr_detn312to319elevn314;
  detection.range = detectionGroup_312to319[scanID].flr2rdr_detn312to319rnge314;
  detection.range_rate = detectionGroup_312to319[scanID].flr2rdr_detn312to319rng_rate314;
  detection.is_dynamic = detectionGroup_312to319[scanID].flr2rdr_detn312to319dyn_prpty314;
  detection.mode = detectionGroup_312to319[scanID].flr2rdr_detn312to319mode314;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_312to319[scanID].flr2rdr_detn312to319rng_qlty314);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_312to319[scanID].flr2rdr_detn312to319rng_rt_qlty314);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection315(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_312to319[scanID].flr2rdr_detn312to319snr315;
  detection.azimuth = detectionGroup_312to319[scanID].flr2rdr_detn312to319azi315;
  detection.elevation = detectionGroup_312to319[scanID].flr2rdr_detn312to319elevn315;
  detection.range = detectionGroup_312to319[scanID].flr2rdr_detn312to319rnge315;
  detection.range_rate = detectionGroup_312to319[scanID].flr2rdr_detn312to319rng_rate315;
  detection.is_dynamic = detectionGroup_312to319[scanID].flr2rdr_detn312to319dyn_prpty315;
  detection.mode = detectionGroup_312to319[scanID].flr2rdr_detn312to319mode315;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_312to319[scanID].flr2rdr_detn312to319rng_qlty315);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_312to319[scanID].flr2rdr_detn312to319rng_rt_qlty315);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection316(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_312to319[scanID].flr2rdr_detn312to319snr316;
  detection.azimuth = detectionGroup_312to319[scanID].flr2rdr_detn312to319azi316;
  detection.elevation = detectionGroup_312to319[scanID].flr2rdr_detn312to319elevn316;
  detection.range = detectionGroup_312to319[scanID].flr2rdr_detn312to319rnge316;
  detection.range_rate = detectionGroup_312to319[scanID].flr2rdr_detn312to319rng_rate316;
  detection.is_dynamic = detectionGroup_312to319[scanID].flr2rdr_detn312to319dyn_prpty316;
  detection.mode = detectionGroup_312to319[scanID].flr2rdr_detn312to319mode316;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_312to319[scanID].flr2rdr_detn312to319rng_qlty316);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_312to319[scanID].flr2rdr_detn312to319rng_rt_qlty316);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection317(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_312to319[scanID].flr2rdr_detn312to319snr317;
  detection.azimuth = detectionGroup_312to319[scanID].flr2rdr_detn312to319azi317;
  detection.elevation = detectionGroup_312to319[scanID].flr2rdr_detn312to319elevn317;
  detection.range = detectionGroup_312to319[scanID].flr2rdr_detn312to319rnge317;
  detection.range_rate = detectionGroup_312to319[scanID].flr2rdr_detn312to319rng_rate317;
  detection.is_dynamic = detectionGroup_312to319[scanID].flr2rdr_detn312to319dyn_prpty317;
  detection.mode = detectionGroup_312to319[scanID].flr2rdr_detn312to319mode317;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_312to319[scanID].flr2rdr_detn312to319rng_qlty317);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_312to319[scanID].flr2rdr_detn312to319rng_rt_qlty317);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection318(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_312to319[scanID].flr2rdr_detn312to319snr318;
  detection.azimuth = detectionGroup_312to319[scanID].flr2rdr_detn312to319azi318;
  detection.elevation = detectionGroup_312to319[scanID].flr2rdr_detn312to319elevn318;
  detection.range = detectionGroup_312to319[scanID].flr2rdr_detn312to319rnge318;
  detection.range_rate = detectionGroup_312to319[scanID].flr2rdr_detn312to319rng_rate318;
  detection.is_dynamic = detectionGroup_312to319[scanID].flr2rdr_detn312to319dyn_prpty318;
  detection.mode = detectionGroup_312to319[scanID].flr2rdr_detn312to319mode318;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_312to319[scanID].flr2rdr_detn312to319rng_qlty318);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_312to319[scanID].flr2rdr_detn312to319rng_rt_qlty318);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection319(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_312to319[scanID].flr2rdr_detn312to319snr319;
  detection.azimuth = detectionGroup_312to319[scanID].flr2rdr_detn312to319azi319;
  detection.elevation = detectionGroup_312to319[scanID].flr2rdr_detn312to319elevn319;
  detection.range = detectionGroup_312to319[scanID].flr2rdr_detn312to319rnge319;
  detection.range_rate = detectionGroup_312to319[scanID].flr2rdr_detn312to319rng_rate319;
  detection.is_dynamic = detectionGroup_312to319[scanID].flr2rdr_detn312to319dyn_prpty319;
  detection.mode = detectionGroup_312to319[scanID].flr2rdr_detn312to319mode319;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_312to319[scanID].flr2rdr_detn312to319rng_qlty319);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_312to319[scanID].flr2rdr_detn312to319rng_rt_qlty319);

  return detection;
}

void InitialFLRMonitorHal::Impl::store_detection_data_320to327(const initialflrmonitorhal::types::FLR2RdrDetn320to327 detectionGroup, const uint8_t& scanID)
{
  if( !detectionGroup_320to327.count(scanID) )
  {
      detectionGroup_320to327.emplace(std::pair<uint8_t, initialflrmonitorhal::types::FLR2RdrDetn320to327>(scanID, detectionGroup));
      scan_id_counter[scanID]++;
  }
}



 // Get detection function  for detection ..... 40


flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection320(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_320to327[scanID].flr2rdr_detn320to327snr320;
  detection.azimuth = detectionGroup_320to327[scanID].flr2rdr_detn320to327azi320;
  detection.elevation = detectionGroup_320to327[scanID].flr2rdr_detn320to327elevn320;
  detection.range = detectionGroup_320to327[scanID].flr2rdr_detn320to327rnge320;
  detection.range_rate = detectionGroup_320to327[scanID].flr2rdr_detn320to327rng_rate320;
  detection.is_dynamic = detectionGroup_320to327[scanID].flr2rdr_detn320to327dyn_prpty320;
  detection.mode = detectionGroup_320to327[scanID].flr2rdr_detn320to327mode320;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_320to327[scanID].flr2rdr_detn320to327rng_qlty320);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_320to327[scanID].flr2rdr_detn320to327rng_rt_qlty320);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection321(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_320to327[scanID].flr2rdr_detn320to327snr321;
  detection.azimuth = detectionGroup_320to327[scanID].flr2rdr_detn320to327azi321;
  detection.elevation = detectionGroup_320to327[scanID].flr2rdr_detn320to327elevn321;
  detection.range = detectionGroup_320to327[scanID].flr2rdr_detn320to327rnge321;
  detection.range_rate = detectionGroup_320to327[scanID].flr2rdr_detn320to327rng_rate321;
  detection.is_dynamic = detectionGroup_320to327[scanID].flr2rdr_detn320to327dyn_prpty321;
  detection.mode = detectionGroup_320to327[scanID].flr2rdr_detn320to327mode321;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_320to327[scanID].flr2rdr_detn320to327rng_qlty321);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_320to327[scanID].flr2rdr_detn320to327rng_rt_qlty321);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection322(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_320to327[scanID].flr2rdr_detn320to327snr322;
  detection.azimuth = detectionGroup_320to327[scanID].flr2rdr_detn320to327azi322;
  detection.elevation = detectionGroup_320to327[scanID].flr2rdr_detn320to327elevn322;
  detection.range = detectionGroup_320to327[scanID].flr2rdr_detn320to327rnge322;
  detection.range_rate = detectionGroup_320to327[scanID].flr2rdr_detn320to327rng_rate322;
  detection.is_dynamic = detectionGroup_320to327[scanID].flr2rdr_detn320to327dyn_prpty322;
  detection.mode = detectionGroup_320to327[scanID].flr2rdr_detn320to327mode322;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_320to327[scanID].flr2rdr_detn320to327rng_qlty322);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_320to327[scanID].flr2rdr_detn320to327rng_rt_qlty322);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection323(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_320to327[scanID].flr2rdr_detn320to327snr323;
  detection.azimuth = detectionGroup_320to327[scanID].flr2rdr_detn320to327azi323;
  detection.elevation = detectionGroup_320to327[scanID].flr2rdr_detn320to327elevn323;
  detection.range = detectionGroup_320to327[scanID].flr2rdr_detn320to327rnge323;
  detection.range_rate = detectionGroup_320to327[scanID].flr2rdr_detn320to327rng_rate323;
  detection.is_dynamic = detectionGroup_320to327[scanID].flr2rdr_detn320to327dyn_prpty323;
  detection.mode = detectionGroup_320to327[scanID].flr2rdr_detn320to327mode323;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_320to327[scanID].flr2rdr_detn320to327rng_qlty323);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_320to327[scanID].flr2rdr_detn320to327rng_rt_qlty323);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection324(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_320to327[scanID].flr2rdr_detn320to327snr324;
  detection.azimuth = detectionGroup_320to327[scanID].flr2rdr_detn320to327azi324;
  detection.elevation = detectionGroup_320to327[scanID].flr2rdr_detn320to327elevn324;
  detection.range = detectionGroup_320to327[scanID].flr2rdr_detn320to327rnge324;
  detection.range_rate = detectionGroup_320to327[scanID].flr2rdr_detn320to327rng_rate324;
  detection.is_dynamic = detectionGroup_320to327[scanID].flr2rdr_detn320to327dyn_prpty324;
  detection.mode = detectionGroup_320to327[scanID].flr2rdr_detn320to327mode324;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_320to327[scanID].flr2rdr_detn320to327rng_qlty324);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_320to327[scanID].flr2rdr_detn320to327rng_rt_qlty324);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection325(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_320to327[scanID].flr2rdr_detn320to327snr325;
  detection.azimuth = detectionGroup_320to327[scanID].flr2rdr_detn320to327azi325;
  detection.elevation = detectionGroup_320to327[scanID].flr2rdr_detn320to327elevn325;
  detection.range = detectionGroup_320to327[scanID].flr2rdr_detn320to327rnge325;
  detection.range_rate = detectionGroup_320to327[scanID].flr2rdr_detn320to327rng_rate325;
  detection.is_dynamic = detectionGroup_320to327[scanID].flr2rdr_detn320to327dyn_prpty325;
  detection.mode = detectionGroup_320to327[scanID].flr2rdr_detn320to327mode325;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_320to327[scanID].flr2rdr_detn320to327rng_qlty325);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_320to327[scanID].flr2rdr_detn320to327rng_rt_qlty325);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection326(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_320to327[scanID].flr2rdr_detn320to327snr326;
  detection.azimuth = detectionGroup_320to327[scanID].flr2rdr_detn320to327azi326;
  detection.elevation = detectionGroup_320to327[scanID].flr2rdr_detn320to327elevn326;
  detection.range = detectionGroup_320to327[scanID].flr2rdr_detn320to327rnge326;
  detection.range_rate = detectionGroup_320to327[scanID].flr2rdr_detn320to327rng_rate326;
  detection.is_dynamic = detectionGroup_320to327[scanID].flr2rdr_detn320to327dyn_prpty326;
  detection.mode = detectionGroup_320to327[scanID].flr2rdr_detn320to327mode326;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_320to327[scanID].flr2rdr_detn320to327rng_qlty326);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_320to327[scanID].flr2rdr_detn320to327rng_rt_qlty326);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection327(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_320to327[scanID].flr2rdr_detn320to327snr327;
  detection.azimuth = detectionGroup_320to327[scanID].flr2rdr_detn320to327azi327;
  detection.elevation = detectionGroup_320to327[scanID].flr2rdr_detn320to327elevn327;
  detection.range = detectionGroup_320to327[scanID].flr2rdr_detn320to327rnge327;
  detection.range_rate = detectionGroup_320to327[scanID].flr2rdr_detn320to327rng_rate327;
  detection.is_dynamic = detectionGroup_320to327[scanID].flr2rdr_detn320to327dyn_prpty327;
  detection.mode = detectionGroup_320to327[scanID].flr2rdr_detn320to327mode327;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_320to327[scanID].flr2rdr_detn320to327rng_qlty327);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_320to327[scanID].flr2rdr_detn320to327rng_rt_qlty327);

  return detection;
}

void InitialFLRMonitorHal::Impl::store_detection_data_328to335(const initialflrmonitorhal::types::FLR2RdrDetn328to335 detectionGroup, const uint8_t& scanID)
{
  if( !detectionGroup_328to335.count(scanID) )
  {
      detectionGroup_328to335.emplace(std::pair<uint8_t, initialflrmonitorhal::types::FLR2RdrDetn328to335>(scanID, detectionGroup));
      scan_id_counter[scanID]++;
  }
}



 // Get detection function  for detection ..... 41


flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection328(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_328to335[scanID].flr2rdr_detn328to335snr328;
  detection.azimuth = detectionGroup_328to335[scanID].flr2rdr_detn328to335azi328;
  detection.elevation = detectionGroup_328to335[scanID].flr2rdr_detn328to335elevn328;
  detection.range = detectionGroup_328to335[scanID].flr2rdr_detn328to335rnge328;
  detection.range_rate = detectionGroup_328to335[scanID].flr2rdr_detn328to335rng_rate328;
  detection.is_dynamic = detectionGroup_328to335[scanID].flr2rdr_detn328to335dyn_prpty328;
  detection.mode = detectionGroup_328to335[scanID].flr2rdr_detn328to335mode328;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_328to335[scanID].flr2rdr_detn328to335rng_qlty328);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_328to335[scanID].flr2rdr_detn328to335rng_rt_qlty328);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection329(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_328to335[scanID].flr2rdr_detn328to335snr329;
  detection.azimuth = detectionGroup_328to335[scanID].flr2rdr_detn328to335azi329;
  detection.elevation = detectionGroup_328to335[scanID].flr2rdr_detn328to335elevn329;
  detection.range = detectionGroup_328to335[scanID].flr2rdr_detn328to335rnge329;
  detection.range_rate = detectionGroup_328to335[scanID].flr2rdr_detn328to335rng_rate329;
  detection.is_dynamic = detectionGroup_328to335[scanID].flr2rdr_detn328to335dyn_prpty329;
  detection.mode = detectionGroup_328to335[scanID].flr2rdr_detn328to335mode329;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_328to335[scanID].flr2rdr_detn328to335rng_qlty329);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_328to335[scanID].flr2rdr_detn328to335rng_rt_qlty329);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection330(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_328to335[scanID].flr2rdr_detn328to335snr330;
  detection.azimuth = detectionGroup_328to335[scanID].flr2rdr_detn328to335azi330;
  detection.elevation = detectionGroup_328to335[scanID].flr2rdr_detn328to335elevn330;
  detection.range = detectionGroup_328to335[scanID].flr2rdr_detn328to335rnge330;
  detection.range_rate = detectionGroup_328to335[scanID].flr2rdr_detn328to335rng_rate330;
  detection.is_dynamic = detectionGroup_328to335[scanID].flr2rdr_detn328to335dyn_prpty330;
  detection.mode = detectionGroup_328to335[scanID].flr2rdr_detn328to335mode330;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_328to335[scanID].flr2rdr_detn328to335rng_qlty330);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_328to335[scanID].flr2rdr_detn328to335rng_rt_qlty330);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection331(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_328to335[scanID].flr2rdr_detn328to335snr331;
  detection.azimuth = detectionGroup_328to335[scanID].flr2rdr_detn328to335azi331;
  detection.elevation = detectionGroup_328to335[scanID].flr2rdr_detn328to335elevn331;
  detection.range = detectionGroup_328to335[scanID].flr2rdr_detn328to335rnge331;
  detection.range_rate = detectionGroup_328to335[scanID].flr2rdr_detn328to335rng_rate331;
  detection.is_dynamic = detectionGroup_328to335[scanID].flr2rdr_detn328to335dyn_prpty331;
  detection.mode = detectionGroup_328to335[scanID].flr2rdr_detn328to335mode331;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_328to335[scanID].flr2rdr_detn328to335rng_qlty331);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_328to335[scanID].flr2rdr_detn328to335rng_rt_qlty331);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection332(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_328to335[scanID].flr2rdr_detn328to335snr332;
  detection.azimuth = detectionGroup_328to335[scanID].flr2rdr_detn328to335azi332;
  detection.elevation = detectionGroup_328to335[scanID].flr2rdr_detn328to335elevn332;
  detection.range = detectionGroup_328to335[scanID].flr2rdr_detn328to335rnge332;
  detection.range_rate = detectionGroup_328to335[scanID].flr2rdr_detn328to335rng_rate332;
  detection.is_dynamic = detectionGroup_328to335[scanID].flr2rdr_detn328to335dyn_prpty332;
  detection.mode = detectionGroup_328to335[scanID].flr2rdr_detn328to335mode332;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_328to335[scanID].flr2rdr_detn328to335rng_qlty332);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_328to335[scanID].flr2rdr_detn328to335rng_rt_qlty332);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection333(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_328to335[scanID].flr2rdr_detn328to335snr333;
  detection.azimuth = detectionGroup_328to335[scanID].flr2rdr_detn328to335azi333;
  detection.elevation = detectionGroup_328to335[scanID].flr2rdr_detn328to335elevn333;
  detection.range = detectionGroup_328to335[scanID].flr2rdr_detn328to335rnge333;
  detection.range_rate = detectionGroup_328to335[scanID].flr2rdr_detn328to335rng_rate333;
  detection.is_dynamic = detectionGroup_328to335[scanID].flr2rdr_detn328to335dyn_prpty333;
  detection.mode = detectionGroup_328to335[scanID].flr2rdr_detn328to335mode333;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_328to335[scanID].flr2rdr_detn328to335rng_qlty333);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_328to335[scanID].flr2rdr_detn328to335rng_rt_qlty333);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection334(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_328to335[scanID].flr2rdr_detn328to335snr334;
  detection.azimuth = detectionGroup_328to335[scanID].flr2rdr_detn328to335azi334;
  detection.elevation = detectionGroup_328to335[scanID].flr2rdr_detn328to335elevn334;
  detection.range = detectionGroup_328to335[scanID].flr2rdr_detn328to335rnge334;
  detection.range_rate = detectionGroup_328to335[scanID].flr2rdr_detn328to335rng_rate334;
  detection.is_dynamic = detectionGroup_328to335[scanID].flr2rdr_detn328to335dyn_prpty334;
  detection.mode = detectionGroup_328to335[scanID].flr2rdr_detn328to335mode334;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_328to335[scanID].flr2rdr_detn328to335rng_qlty334);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_328to335[scanID].flr2rdr_detn328to335rng_rt_qlty334);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection335(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_328to335[scanID].flr2rdr_detn328to335snr335;
  detection.azimuth = detectionGroup_328to335[scanID].flr2rdr_detn328to335azi335;
  detection.elevation = detectionGroup_328to335[scanID].flr2rdr_detn328to335elevn335;
  detection.range = detectionGroup_328to335[scanID].flr2rdr_detn328to335rnge335;
  detection.range_rate = detectionGroup_328to335[scanID].flr2rdr_detn328to335rng_rate335;
  detection.is_dynamic = detectionGroup_328to335[scanID].flr2rdr_detn328to335dyn_prpty335;
  detection.mode = detectionGroup_328to335[scanID].flr2rdr_detn328to335mode335;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_328to335[scanID].flr2rdr_detn328to335rng_qlty335);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_328to335[scanID].flr2rdr_detn328to335rng_rt_qlty335);

  return detection;
}

void InitialFLRMonitorHal::Impl::store_detection_data_336to343(const initialflrmonitorhal::types::FLR2RdrDetn336to343 detectionGroup, const uint8_t& scanID)
{
  if( !detectionGroup_336to343.count(scanID) )
  {
      detectionGroup_336to343.emplace(std::pair<uint8_t, initialflrmonitorhal::types::FLR2RdrDetn336to343>(scanID, detectionGroup));
      scan_id_counter[scanID]++;
  }
}



 // Get detection function  for detection ..... 42


flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection336(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_336to343[scanID].flr2rdr_detn336to343snr336;
  detection.azimuth = detectionGroup_336to343[scanID].flr2rdr_detn336to343azi336;
  detection.elevation = detectionGroup_336to343[scanID].flr2rdr_detn336to343elevn336;
  detection.range = detectionGroup_336to343[scanID].flr2rdr_detn336to343rnge336;
  detection.range_rate = detectionGroup_336to343[scanID].flr2rdr_detn336to343rng_rate336;
  detection.is_dynamic = detectionGroup_336to343[scanID].flr2rdr_detn336to343dyn_prpty336;
  detection.mode = detectionGroup_336to343[scanID].flr2rdr_detn336to343mode336;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_336to343[scanID].flr2rdr_detn336to343rng_qlty336);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_336to343[scanID].flr2rdr_detn336to343rng_rt_qlty336);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection337(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_336to343[scanID].flr2rdr_detn336to343snr337;
  detection.azimuth = detectionGroup_336to343[scanID].flr2rdr_detn336to343azi337;
  detection.elevation = detectionGroup_336to343[scanID].flr2rdr_detn336to343elevn337;
  detection.range = detectionGroup_336to343[scanID].flr2rdr_detn336to343rnge337;
  detection.range_rate = detectionGroup_336to343[scanID].flr2rdr_detn336to343rng_rate337;
  detection.is_dynamic = detectionGroup_336to343[scanID].flr2rdr_detn336to343dyn_prpty337;
  detection.mode = detectionGroup_336to343[scanID].flr2rdr_detn336to343mode337;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_336to343[scanID].flr2rdr_detn336to343rng_qlty337);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_336to343[scanID].flr2rdr_detn336to343rng_rt_qlty337);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection338(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_336to343[scanID].flr2rdr_detn336to343snr338;
  detection.azimuth = detectionGroup_336to343[scanID].flr2rdr_detn336to343azi338;
  detection.elevation = detectionGroup_336to343[scanID].flr2rdr_detn336to343elevn338;
  detection.range = detectionGroup_336to343[scanID].flr2rdr_detn336to343rnge338;
  detection.range_rate = detectionGroup_336to343[scanID].flr2rdr_detn336to343rng_rate338;
  detection.is_dynamic = detectionGroup_336to343[scanID].flr2rdr_detn336to343dyn_prpty338;
  detection.mode = detectionGroup_336to343[scanID].flr2rdr_detn336to343mode338;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_336to343[scanID].flr2rdr_detn336to343rng_qlty338);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_336to343[scanID].flr2rdr_detn336to343rng_rt_qlty338);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection339(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_336to343[scanID].flr2rdr_detn336to343snr339;
  detection.azimuth = detectionGroup_336to343[scanID].flr2rdr_detn336to343azi339;
  detection.elevation = detectionGroup_336to343[scanID].flr2rdr_detn336to343elevn339;
  detection.range = detectionGroup_336to343[scanID].flr2rdr_detn336to343rnge339;
  detection.range_rate = detectionGroup_336to343[scanID].flr2rdr_detn336to343rng_rate339;
  detection.is_dynamic = detectionGroup_336to343[scanID].flr2rdr_detn336to343dyn_prpty339;
  detection.mode = detectionGroup_336to343[scanID].flr2rdr_detn336to343mode339;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_336to343[scanID].flr2rdr_detn336to343rng_qlty339);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_336to343[scanID].flr2rdr_detn336to343rng_rt_qlty339);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection340(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_336to343[scanID].flr2rdr_detn336to343snr340;
  detection.azimuth = detectionGroup_336to343[scanID].flr2rdr_detn336to343azi340;
  detection.elevation = detectionGroup_336to343[scanID].flr2rdr_detn336to343elevn340;
  detection.range = detectionGroup_336to343[scanID].flr2rdr_detn336to343rnge340;
  detection.range_rate = detectionGroup_336to343[scanID].flr2rdr_detn336to343rng_rate340;
  detection.is_dynamic = detectionGroup_336to343[scanID].flr2rdr_detn336to343dyn_prpty340;
  detection.mode = detectionGroup_336to343[scanID].flr2rdr_detn336to343mode340;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_336to343[scanID].flr2rdr_detn336to343rng_qlty340);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_336to343[scanID].flr2rdr_detn336to343rng_rt_qlty340);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection341(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_336to343[scanID].flr2rdr_detn336to343snr341;
  detection.azimuth = detectionGroup_336to343[scanID].flr2rdr_detn336to343azi341;
  detection.elevation = detectionGroup_336to343[scanID].flr2rdr_detn336to343elevn341;
  detection.range = detectionGroup_336to343[scanID].flr2rdr_detn336to343rnge341;
  detection.range_rate = detectionGroup_336to343[scanID].flr2rdr_detn336to343rng_rate341;
  detection.is_dynamic = detectionGroup_336to343[scanID].flr2rdr_detn336to343dyn_prpty341;
  detection.mode = detectionGroup_336to343[scanID].flr2rdr_detn336to343mode341;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_336to343[scanID].flr2rdr_detn336to343rng_qlty341);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_336to343[scanID].flr2rdr_detn336to343rng_rt_qlty341);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection342(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_336to343[scanID].flr2rdr_detn336to343snr342;
  detection.azimuth = detectionGroup_336to343[scanID].flr2rdr_detn336to343azi342;
  detection.elevation = detectionGroup_336to343[scanID].flr2rdr_detn336to343elevn342;
  detection.range = detectionGroup_336to343[scanID].flr2rdr_detn336to343rnge342;
  detection.range_rate = detectionGroup_336to343[scanID].flr2rdr_detn336to343rng_rate342;
  detection.is_dynamic = detectionGroup_336to343[scanID].flr2rdr_detn336to343dyn_prpty342;
  detection.mode = detectionGroup_336to343[scanID].flr2rdr_detn336to343mode342;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_336to343[scanID].flr2rdr_detn336to343rng_qlty342);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_336to343[scanID].flr2rdr_detn336to343rng_rt_qlty342);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection343(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_336to343[scanID].flr2rdr_detn336to343snr343;
  detection.azimuth = detectionGroup_336to343[scanID].flr2rdr_detn336to343azi343;
  detection.elevation = detectionGroup_336to343[scanID].flr2rdr_detn336to343elevn343;
  detection.range = detectionGroup_336to343[scanID].flr2rdr_detn336to343rnge343;
  detection.range_rate = detectionGroup_336to343[scanID].flr2rdr_detn336to343rng_rate343;
  detection.is_dynamic = detectionGroup_336to343[scanID].flr2rdr_detn336to343dyn_prpty343;
  detection.mode = detectionGroup_336to343[scanID].flr2rdr_detn336to343mode343;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_336to343[scanID].flr2rdr_detn336to343rng_qlty343);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_336to343[scanID].flr2rdr_detn336to343rng_rt_qlty343);

  return detection;
}

void InitialFLRMonitorHal::Impl::store_detection_data_344to351(const initialflrmonitorhal::types::FLR2RdrDetn344to351 detectionGroup, const uint8_t& scanID)
{
  if( !detectionGroup_344to351.count(scanID) )
  {
      detectionGroup_344to351.emplace(std::pair<uint8_t, initialflrmonitorhal::types::FLR2RdrDetn344to351>(scanID, detectionGroup));
      scan_id_counter[scanID]++;
  }
}



 // Get detection function  for detection ..... 43


flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection344(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_344to351[scanID].flr2rdr_detn344to351snr344;
  detection.azimuth = detectionGroup_344to351[scanID].flr2rdr_detn344to351azi344;
  detection.elevation = detectionGroup_344to351[scanID].flr2rdr_detn344to351elevn344;
  detection.range = detectionGroup_344to351[scanID].flr2rdr_detn344to351rnge344;
  detection.range_rate = detectionGroup_344to351[scanID].flr2rdr_detn344to351rng_rate344;
  detection.is_dynamic = detectionGroup_344to351[scanID].flr2rdr_detn344to351dyn_prpty344;
  detection.mode = detectionGroup_344to351[scanID].flr2rdr_detn344to351mode344;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_344to351[scanID].flr2rdr_detn344to351rng_qlty344);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_344to351[scanID].flr2rdr_detn344to351rng_rt_qlty344);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection345(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_344to351[scanID].flr2rdr_detn344to351snr345;
  detection.azimuth = detectionGroup_344to351[scanID].flr2rdr_detn344to351azi345;
  detection.elevation = detectionGroup_344to351[scanID].flr2rdr_detn344to351elevn345;
  detection.range = detectionGroup_344to351[scanID].flr2rdr_detn344to351rnge345;
  detection.range_rate = detectionGroup_344to351[scanID].flr2rdr_detn344to351rng_rate345;
  detection.is_dynamic = detectionGroup_344to351[scanID].flr2rdr_detn344to351dyn_prpty345;
  detection.mode = detectionGroup_344to351[scanID].flr2rdr_detn344to351mode345;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_344to351[scanID].flr2rdr_detn344to351rng_qlty345);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_344to351[scanID].flr2rdr_detn344to351rng_rt_qlty345);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection346(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_344to351[scanID].flr2rdr_detn344to351snr346;
  detection.azimuth = detectionGroup_344to351[scanID].flr2rdr_detn344to351azi346;
  detection.elevation = detectionGroup_344to351[scanID].flr2rdr_detn344to351elevn346;
  detection.range = detectionGroup_344to351[scanID].flr2rdr_detn344to351rnge346;
  detection.range_rate = detectionGroup_344to351[scanID].flr2rdr_detn344to351rng_rate346;
  detection.is_dynamic = detectionGroup_344to351[scanID].flr2rdr_detn344to351dyn_prpty346;
  detection.mode = detectionGroup_344to351[scanID].flr2rdr_detn344to351mode346;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_344to351[scanID].flr2rdr_detn344to351rng_qlty346);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_344to351[scanID].flr2rdr_detn344to351rng_rt_qlty346);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection347(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_344to351[scanID].flr2rdr_detn344to351snr347;
  detection.azimuth = detectionGroup_344to351[scanID].flr2rdr_detn344to351azi347;
  detection.elevation = detectionGroup_344to351[scanID].flr2rdr_detn344to351elevn347;
  detection.range = detectionGroup_344to351[scanID].flr2rdr_detn344to351rnge347;
  detection.range_rate = detectionGroup_344to351[scanID].flr2rdr_detn344to351rng_rate347;
  detection.is_dynamic = detectionGroup_344to351[scanID].flr2rdr_detn344to351dyn_prpty347;
  detection.mode = detectionGroup_344to351[scanID].flr2rdr_detn344to351mode347;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_344to351[scanID].flr2rdr_detn344to351rng_qlty347);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_344to351[scanID].flr2rdr_detn344to351rng_rt_qlty347);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection348(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_344to351[scanID].flr2rdr_detn344to351snr348;
  detection.azimuth = detectionGroup_344to351[scanID].flr2rdr_detn344to351azi348;
  detection.elevation = detectionGroup_344to351[scanID].flr2rdr_detn344to351elevn348;
  detection.range = detectionGroup_344to351[scanID].flr2rdr_detn344to351rnge348;
  detection.range_rate = detectionGroup_344to351[scanID].flr2rdr_detn344to351rng_rate348;
  detection.is_dynamic = detectionGroup_344to351[scanID].flr2rdr_detn344to351dyn_prpty348;
  detection.mode = detectionGroup_344to351[scanID].flr2rdr_detn344to351mode348;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_344to351[scanID].flr2rdr_detn344to351rng_qlty348);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_344to351[scanID].flr2rdr_detn344to351rng_rt_qlty348);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection349(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_344to351[scanID].flr2rdr_detn344to351snr349;
  detection.azimuth = detectionGroup_344to351[scanID].flr2rdr_detn344to351azi349;
  detection.elevation = detectionGroup_344to351[scanID].flr2rdr_detn344to351elevn349;
  detection.range = detectionGroup_344to351[scanID].flr2rdr_detn344to351rnge349;
  detection.range_rate = detectionGroup_344to351[scanID].flr2rdr_detn344to351rng_rate349;
  detection.is_dynamic = detectionGroup_344to351[scanID].flr2rdr_detn344to351dyn_prpty349;
  detection.mode = detectionGroup_344to351[scanID].flr2rdr_detn344to351mode349;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_344to351[scanID].flr2rdr_detn344to351rng_qlty349);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_344to351[scanID].flr2rdr_detn344to351rng_rt_qlty349);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection350(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_344to351[scanID].flr2rdr_detn344to351snr350;
  detection.azimuth = detectionGroup_344to351[scanID].flr2rdr_detn344to351azi350;
  detection.elevation = detectionGroup_344to351[scanID].flr2rdr_detn344to351elevn350;
  detection.range = detectionGroup_344to351[scanID].flr2rdr_detn344to351rnge350;
  detection.range_rate = detectionGroup_344to351[scanID].flr2rdr_detn344to351rng_rate350;
  detection.is_dynamic = detectionGroup_344to351[scanID].flr2rdr_detn344to351dyn_prpty350;
  detection.mode = detectionGroup_344to351[scanID].flr2rdr_detn344to351mode350;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_344to351[scanID].flr2rdr_detn344to351rng_qlty350);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_344to351[scanID].flr2rdr_detn344to351rng_rt_qlty350);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection351(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_344to351[scanID].flr2rdr_detn344to351snr351;
  detection.azimuth = detectionGroup_344to351[scanID].flr2rdr_detn344to351azi351;
  detection.elevation = detectionGroup_344to351[scanID].flr2rdr_detn344to351elevn351;
  detection.range = detectionGroup_344to351[scanID].flr2rdr_detn344to351rnge351;
  detection.range_rate = detectionGroup_344to351[scanID].flr2rdr_detn344to351rng_rate351;
  detection.is_dynamic = detectionGroup_344to351[scanID].flr2rdr_detn344to351dyn_prpty351;
  detection.mode = detectionGroup_344to351[scanID].flr2rdr_detn344to351mode351;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_344to351[scanID].flr2rdr_detn344to351rng_qlty351);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_344to351[scanID].flr2rdr_detn344to351rng_rt_qlty351);

  return detection;
}

void InitialFLRMonitorHal::Impl::store_detection_data_352to359(const initialflrmonitorhal::types::FLR2RdrDetn352to359 detectionGroup, const uint8_t& scanID)
{
  if( !detectionGroup_352to359.count(scanID) )
  {
      detectionGroup_352to359.emplace(std::pair<uint8_t, initialflrmonitorhal::types::FLR2RdrDetn352to359>(scanID, detectionGroup));
      scan_id_counter[scanID]++;
  }
}



 // Get detection function  for detection ..... 44


flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection352(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_352to359[scanID].flr2rdr_detn352to359snr352;
  detection.azimuth = detectionGroup_352to359[scanID].flr2rdr_detn352to359azi352;
  detection.elevation = detectionGroup_352to359[scanID].flr2rdr_detn352to359elevn352;
  detection.range = detectionGroup_352to359[scanID].flr2rdr_detn352to359rnge352;
  detection.range_rate = detectionGroup_352to359[scanID].flr2rdr_detn352to359rng_rate352;
  detection.is_dynamic = detectionGroup_352to359[scanID].flr2rdr_detn352to359dyn_prpty352;
  detection.mode = detectionGroup_352to359[scanID].flr2rdr_detn352to359mode352;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_352to359[scanID].flr2rdr_detn352to359rng_qlty352);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_352to359[scanID].flr2rdr_detn352to359rng_rt_qlty352);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection353(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_352to359[scanID].flr2rdr_detn352to359snr353;
  detection.azimuth = detectionGroup_352to359[scanID].flr2rdr_detn352to359azi353;
  detection.elevation = detectionGroup_352to359[scanID].flr2rdr_detn352to359elevn353;
  detection.range = detectionGroup_352to359[scanID].flr2rdr_detn352to359rnge353;
  detection.range_rate = detectionGroup_352to359[scanID].flr2rdr_detn352to359rng_rate353;
  detection.is_dynamic = detectionGroup_352to359[scanID].flr2rdr_detn352to359dyn_prpty353;
  detection.mode = detectionGroup_352to359[scanID].flr2rdr_detn352to359mode353;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_352to359[scanID].flr2rdr_detn352to359rng_qlty353);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_352to359[scanID].flr2rdr_detn352to359rng_rt_qlty353);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection354(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_352to359[scanID].flr2rdr_detn352to359snr354;
  detection.azimuth = detectionGroup_352to359[scanID].flr2rdr_detn352to359azi354;
  detection.elevation = detectionGroup_352to359[scanID].flr2rdr_detn352to359elevn354;
  detection.range = detectionGroup_352to359[scanID].flr2rdr_detn352to359rnge354;
  detection.range_rate = detectionGroup_352to359[scanID].flr2rdr_detn352to359rng_rate354;
  detection.is_dynamic = detectionGroup_352to359[scanID].flr2rdr_detn352to359dyn_prpty354;
  detection.mode = detectionGroup_352to359[scanID].flr2rdr_detn352to359mode354;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_352to359[scanID].flr2rdr_detn352to359rng_qlty354);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_352to359[scanID].flr2rdr_detn352to359rng_rt_qlty354);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection355(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_352to359[scanID].flr2rdr_detn352to359snr355;
  detection.azimuth = detectionGroup_352to359[scanID].flr2rdr_detn352to359azi355;
  detection.elevation = detectionGroup_352to359[scanID].flr2rdr_detn352to359elevn355;
  detection.range = detectionGroup_352to359[scanID].flr2rdr_detn352to359rnge355;
  detection.range_rate = detectionGroup_352to359[scanID].flr2rdr_detn352to359rng_rate355;
  detection.is_dynamic = detectionGroup_352to359[scanID].flr2rdr_detn352to359dyn_prpty355;
  detection.mode = detectionGroup_352to359[scanID].flr2rdr_detn352to359mode355;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_352to359[scanID].flr2rdr_detn352to359rng_qlty355);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_352to359[scanID].flr2rdr_detn352to359rng_rt_qlty355);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection356(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_352to359[scanID].flr2rdr_detn352to359snr356;
  detection.azimuth = detectionGroup_352to359[scanID].flr2rdr_detn352to359azi356;
  detection.elevation = detectionGroup_352to359[scanID].flr2rdr_detn352to359elevn356;
  detection.range = detectionGroup_352to359[scanID].flr2rdr_detn352to359rnge356;
  detection.range_rate = detectionGroup_352to359[scanID].flr2rdr_detn352to359rng_rate356;
  detection.is_dynamic = detectionGroup_352to359[scanID].flr2rdr_detn352to359dyn_prpty356;
  detection.mode = detectionGroup_352to359[scanID].flr2rdr_detn352to359mode356;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_352to359[scanID].flr2rdr_detn352to359rng_qlty356);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_352to359[scanID].flr2rdr_detn352to359rng_rt_qlty356);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection357(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_352to359[scanID].flr2rdr_detn352to359snr357;
  detection.azimuth = detectionGroup_352to359[scanID].flr2rdr_detn352to359azi357;
  detection.elevation = detectionGroup_352to359[scanID].flr2rdr_detn352to359elevn357;
  detection.range = detectionGroup_352to359[scanID].flr2rdr_detn352to359rnge357;
  detection.range_rate = detectionGroup_352to359[scanID].flr2rdr_detn352to359rng_rate357;
  detection.is_dynamic = detectionGroup_352to359[scanID].flr2rdr_detn352to359dyn_prpty357;
  detection.mode = detectionGroup_352to359[scanID].flr2rdr_detn352to359mode357;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_352to359[scanID].flr2rdr_detn352to359rng_qlty357);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_352to359[scanID].flr2rdr_detn352to359rng_rt_qlty357);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection358(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_352to359[scanID].flr2rdr_detn352to359snr358;
  detection.azimuth = detectionGroup_352to359[scanID].flr2rdr_detn352to359azi358;
  detection.elevation = detectionGroup_352to359[scanID].flr2rdr_detn352to359elevn358;
  detection.range = detectionGroup_352to359[scanID].flr2rdr_detn352to359rnge358;
  detection.range_rate = detectionGroup_352to359[scanID].flr2rdr_detn352to359rng_rate358;
  detection.is_dynamic = detectionGroup_352to359[scanID].flr2rdr_detn352to359dyn_prpty358;
  detection.mode = detectionGroup_352to359[scanID].flr2rdr_detn352to359mode358;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_352to359[scanID].flr2rdr_detn352to359rng_qlty358);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_352to359[scanID].flr2rdr_detn352to359rng_rt_qlty358);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection359(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_352to359[scanID].flr2rdr_detn352to359snr359;
  detection.azimuth = detectionGroup_352to359[scanID].flr2rdr_detn352to359azi359;
  detection.elevation = detectionGroup_352to359[scanID].flr2rdr_detn352to359elevn359;
  detection.range = detectionGroup_352to359[scanID].flr2rdr_detn352to359rnge359;
  detection.range_rate = detectionGroup_352to359[scanID].flr2rdr_detn352to359rng_rate359;
  detection.is_dynamic = detectionGroup_352to359[scanID].flr2rdr_detn352to359dyn_prpty359;
  detection.mode = detectionGroup_352to359[scanID].flr2rdr_detn352to359mode359;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_352to359[scanID].flr2rdr_detn352to359rng_qlty359);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_352to359[scanID].flr2rdr_detn352to359rng_rt_qlty359);

  return detection;
}

void InitialFLRMonitorHal::Impl::store_detection_data_360to367(const initialflrmonitorhal::types::FLR2RdrDetn360to367 detectionGroup, const uint8_t& scanID)
{
  if( !detectionGroup_360to367.count(scanID) )
  {
      detectionGroup_360to367.emplace(std::pair<uint8_t, initialflrmonitorhal::types::FLR2RdrDetn360to367>(scanID, detectionGroup));
      scan_id_counter[scanID]++;
  }
}



 // Get detection function  for detection ..... 45


flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection360(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_360to367[scanID].flr2rdr_detn360to367snr360;
  detection.azimuth = detectionGroup_360to367[scanID].flr2rdr_detn360to367azi360;
  detection.elevation = detectionGroup_360to367[scanID].flr2rdr_detn360to367elevn360;
  detection.range = detectionGroup_360to367[scanID].flr2rdr_detn360to367rnge360;
  detection.range_rate = detectionGroup_360to367[scanID].flr2rdr_detn360to367rng_rate360;
  detection.is_dynamic = detectionGroup_360to367[scanID].flr2rdr_detn360to367dyn_prpty360;
  detection.mode = detectionGroup_360to367[scanID].flr2rdr_detn360to367mode360;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_360to367[scanID].flr2rdr_detn360to367rng_qlty360);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_360to367[scanID].flr2rdr_detn360to367rng_rt_qlty360);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection361(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_360to367[scanID].flr2rdr_detn360to367snr361;
  detection.azimuth = detectionGroup_360to367[scanID].flr2rdr_detn360to367azi361;
  detection.elevation = detectionGroup_360to367[scanID].flr2rdr_detn360to367elevn361;
  detection.range = detectionGroup_360to367[scanID].flr2rdr_detn360to367rnge361;
  detection.range_rate = detectionGroup_360to367[scanID].flr2rdr_detn360to367rng_rate361;
  detection.is_dynamic = detectionGroup_360to367[scanID].flr2rdr_detn360to367dyn_prpty361;
  detection.mode = detectionGroup_360to367[scanID].flr2rdr_detn360to367mode361;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_360to367[scanID].flr2rdr_detn360to367rng_qlty361);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_360to367[scanID].flr2rdr_detn360to367rng_rt_qlty361);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection362(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_360to367[scanID].flr2rdr_detn360to367snr362;
  detection.azimuth = detectionGroup_360to367[scanID].flr2rdr_detn360to367azi362;
  detection.elevation = detectionGroup_360to367[scanID].flr2rdr_detn360to367elevn362;
  detection.range = detectionGroup_360to367[scanID].flr2rdr_detn360to367rnge362;
  detection.range_rate = detectionGroup_360to367[scanID].flr2rdr_detn360to367rng_rate362;
  detection.is_dynamic = detectionGroup_360to367[scanID].flr2rdr_detn360to367dyn_prpty362;
  detection.mode = detectionGroup_360to367[scanID].flr2rdr_detn360to367mode362;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_360to367[scanID].flr2rdr_detn360to367rng_qlty362);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_360to367[scanID].flr2rdr_detn360to367rng_rt_qlty362);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection363(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_360to367[scanID].flr2rdr_detn360to367snr363;
  detection.azimuth = detectionGroup_360to367[scanID].flr2rdr_detn360to367azi363;
  detection.elevation = detectionGroup_360to367[scanID].flr2rdr_detn360to367elevn363;
  detection.range = detectionGroup_360to367[scanID].flr2rdr_detn360to367rnge363;
  detection.range_rate = detectionGroup_360to367[scanID].flr2rdr_detn360to367rng_rate363;
  detection.is_dynamic = detectionGroup_360to367[scanID].flr2rdr_detn360to367dyn_prpty363;
  detection.mode = detectionGroup_360to367[scanID].flr2rdr_detn360to367mode363;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_360to367[scanID].flr2rdr_detn360to367rng_qlty363);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_360to367[scanID].flr2rdr_detn360to367rng_rt_qlty363);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection364(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_360to367[scanID].flr2rdr_detn360to367snr364;
  detection.azimuth = detectionGroup_360to367[scanID].flr2rdr_detn360to367azi364;
  detection.elevation = detectionGroup_360to367[scanID].flr2rdr_detn360to367elevn364;
  detection.range = detectionGroup_360to367[scanID].flr2rdr_detn360to367rnge364;
  detection.range_rate = detectionGroup_360to367[scanID].flr2rdr_detn360to367rng_rate364;
  detection.is_dynamic = detectionGroup_360to367[scanID].flr2rdr_detn360to367dyn_prpty364;
  detection.mode = detectionGroup_360to367[scanID].flr2rdr_detn360to367mode364;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_360to367[scanID].flr2rdr_detn360to367rng_qlty364);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_360to367[scanID].flr2rdr_detn360to367rng_rt_qlty364);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection365(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_360to367[scanID].flr2rdr_detn360to367snr365;
  detection.azimuth = detectionGroup_360to367[scanID].flr2rdr_detn360to367azi365;
  detection.elevation = detectionGroup_360to367[scanID].flr2rdr_detn360to367elevn365;
  detection.range = detectionGroup_360to367[scanID].flr2rdr_detn360to367rnge365;
  detection.range_rate = detectionGroup_360to367[scanID].flr2rdr_detn360to367rng_rate365;
  detection.is_dynamic = detectionGroup_360to367[scanID].flr2rdr_detn360to367dyn_prpty365;
  detection.mode = detectionGroup_360to367[scanID].flr2rdr_detn360to367mode365;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_360to367[scanID].flr2rdr_detn360to367rng_qlty365);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_360to367[scanID].flr2rdr_detn360to367rng_rt_qlty365);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection366(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_360to367[scanID].flr2rdr_detn360to367snr366;
  detection.azimuth = detectionGroup_360to367[scanID].flr2rdr_detn360to367azi366;
  detection.elevation = detectionGroup_360to367[scanID].flr2rdr_detn360to367elevn366;
  detection.range = detectionGroup_360to367[scanID].flr2rdr_detn360to367rnge366;
  detection.range_rate = detectionGroup_360to367[scanID].flr2rdr_detn360to367rng_rate366;
  detection.is_dynamic = detectionGroup_360to367[scanID].flr2rdr_detn360to367dyn_prpty366;
  detection.mode = detectionGroup_360to367[scanID].flr2rdr_detn360to367mode366;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_360to367[scanID].flr2rdr_detn360to367rng_qlty366);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_360to367[scanID].flr2rdr_detn360to367rng_rt_qlty366);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection367(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_360to367[scanID].flr2rdr_detn360to367snr367;
  detection.azimuth = detectionGroup_360to367[scanID].flr2rdr_detn360to367azi367;
  detection.elevation = detectionGroup_360to367[scanID].flr2rdr_detn360to367elevn367;
  detection.range = detectionGroup_360to367[scanID].flr2rdr_detn360to367rnge367;
  detection.range_rate = detectionGroup_360to367[scanID].flr2rdr_detn360to367rng_rate367;
  detection.is_dynamic = detectionGroup_360to367[scanID].flr2rdr_detn360to367dyn_prpty367;
  detection.mode = detectionGroup_360to367[scanID].flr2rdr_detn360to367mode367;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_360to367[scanID].flr2rdr_detn360to367rng_qlty367);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_360to367[scanID].flr2rdr_detn360to367rng_rt_qlty367);

  return detection;
}

void InitialFLRMonitorHal::Impl::store_detection_data_368to375(const initialflrmonitorhal::types::FLR2RdrDetn368to375 detectionGroup, const uint8_t& scanID)
{
  if( !detectionGroup_368to375.count(scanID) )
  {
      detectionGroup_368to375.emplace(std::pair<uint8_t, initialflrmonitorhal::types::FLR2RdrDetn368to375>(scanID, detectionGroup));
      scan_id_counter[scanID]++;
  }
}



 // Get detection function  for detection ..... 46


flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection368(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_368to375[scanID].flr2rdr_detn368to375snr368;
  detection.azimuth = detectionGroup_368to375[scanID].flr2rdr_detn368to375azi368;
  detection.elevation = detectionGroup_368to375[scanID].flr2rdr_detn368to375elevn368;
  detection.range = detectionGroup_368to375[scanID].flr2rdr_detn368to375rnge368;
  detection.range_rate = detectionGroup_368to375[scanID].flr2rdr_detn368to375rng_rate368;
  detection.is_dynamic = detectionGroup_368to375[scanID].flr2rdr_detn368to375dyn_prpty368;
  detection.mode = detectionGroup_368to375[scanID].flr2rdr_detn368to375mode368;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_368to375[scanID].flr2rdr_detn368to375rng_qlty368);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_368to375[scanID].flr2rdr_detn368to375rng_rt_qlty368);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection369(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_368to375[scanID].flr2rdr_detn368to375snr369;
  detection.azimuth = detectionGroup_368to375[scanID].flr2rdr_detn368to375azi369;
  detection.elevation = detectionGroup_368to375[scanID].flr2rdr_detn368to375elevn369;
  detection.range = detectionGroup_368to375[scanID].flr2rdr_detn368to375rnge369;
  detection.range_rate = detectionGroup_368to375[scanID].flr2rdr_detn368to375rng_rate369;
  detection.is_dynamic = detectionGroup_368to375[scanID].flr2rdr_detn368to375dyn_prpty369;
  detection.mode = detectionGroup_368to375[scanID].flr2rdr_detn368to375mode369;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_368to375[scanID].flr2rdr_detn368to375rng_qlty369);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_368to375[scanID].flr2rdr_detn368to375rng_rt_qlty369);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection370(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_368to375[scanID].flr2rdr_detn368to375snr370;
  detection.azimuth = detectionGroup_368to375[scanID].flr2rdr_detn368to375azi370;
  detection.elevation = detectionGroup_368to375[scanID].flr2rdr_detn368to375elevn370;
  detection.range = detectionGroup_368to375[scanID].flr2rdr_detn368to375rnge370;
  detection.range_rate = detectionGroup_368to375[scanID].flr2rdr_detn368to375rng_rate370;
  detection.is_dynamic = detectionGroup_368to375[scanID].flr2rdr_detn368to375dyn_prpty370;
  detection.mode = detectionGroup_368to375[scanID].flr2rdr_detn368to375mode370;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_368to375[scanID].flr2rdr_detn368to375rng_qlty370);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_368to375[scanID].flr2rdr_detn368to375rng_rt_qlty370);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection371(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_368to375[scanID].flr2rdr_detn368to375snr371;
  detection.azimuth = detectionGroup_368to375[scanID].flr2rdr_detn368to375azi371;
  detection.elevation = detectionGroup_368to375[scanID].flr2rdr_detn368to375elevn371;
  detection.range = detectionGroup_368to375[scanID].flr2rdr_detn368to375rnge371;
  detection.range_rate = detectionGroup_368to375[scanID].flr2rdr_detn368to375rng_rate371;
  detection.is_dynamic = detectionGroup_368to375[scanID].flr2rdr_detn368to375dyn_prpty371;
  detection.mode = detectionGroup_368to375[scanID].flr2rdr_detn368to375mode371;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_368to375[scanID].flr2rdr_detn368to375rng_qlty371);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_368to375[scanID].flr2rdr_detn368to375rng_rt_qlty371);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection372(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_368to375[scanID].flr2rdr_detn368to375snr372;
  detection.azimuth = detectionGroup_368to375[scanID].flr2rdr_detn368to375azi372;
  detection.elevation = detectionGroup_368to375[scanID].flr2rdr_detn368to375elevn372;
  detection.range = detectionGroup_368to375[scanID].flr2rdr_detn368to375rnge372;
  detection.range_rate = detectionGroup_368to375[scanID].flr2rdr_detn368to375rng_rate372;
  detection.is_dynamic = detectionGroup_368to375[scanID].flr2rdr_detn368to375dyn_prpty372;
  detection.mode = detectionGroup_368to375[scanID].flr2rdr_detn368to375mode372;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_368to375[scanID].flr2rdr_detn368to375rng_qlty372);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_368to375[scanID].flr2rdr_detn368to375rng_rt_qlty372);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection373(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_368to375[scanID].flr2rdr_detn368to375snr373;
  detection.azimuth = detectionGroup_368to375[scanID].flr2rdr_detn368to375azi373;
  detection.elevation = detectionGroup_368to375[scanID].flr2rdr_detn368to375elevn373;
  detection.range = detectionGroup_368to375[scanID].flr2rdr_detn368to375rnge373;
  detection.range_rate = detectionGroup_368to375[scanID].flr2rdr_detn368to375rng_rate373;
  detection.is_dynamic = detectionGroup_368to375[scanID].flr2rdr_detn368to375dyn_prpty373;
  detection.mode = detectionGroup_368to375[scanID].flr2rdr_detn368to375mode373;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_368to375[scanID].flr2rdr_detn368to375rng_qlty373);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_368to375[scanID].flr2rdr_detn368to375rng_rt_qlty373);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection374(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_368to375[scanID].flr2rdr_detn368to375snr374;
  detection.azimuth = detectionGroup_368to375[scanID].flr2rdr_detn368to375azi374;
  detection.elevation = detectionGroup_368to375[scanID].flr2rdr_detn368to375elevn374;
  detection.range = detectionGroup_368to375[scanID].flr2rdr_detn368to375rnge374;
  detection.range_rate = detectionGroup_368to375[scanID].flr2rdr_detn368to375rng_rate374;
  detection.is_dynamic = detectionGroup_368to375[scanID].flr2rdr_detn368to375dyn_prpty374;
  detection.mode = detectionGroup_368to375[scanID].flr2rdr_detn368to375mode374;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_368to375[scanID].flr2rdr_detn368to375rng_qlty374);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_368to375[scanID].flr2rdr_detn368to375rng_rt_qlty374);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection375(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_368to375[scanID].flr2rdr_detn368to375snr375;
  detection.azimuth = detectionGroup_368to375[scanID].flr2rdr_detn368to375azi375;
  detection.elevation = detectionGroup_368to375[scanID].flr2rdr_detn368to375elevn375;
  detection.range = detectionGroup_368to375[scanID].flr2rdr_detn368to375rnge375;
  detection.range_rate = detectionGroup_368to375[scanID].flr2rdr_detn368to375rng_rate375;
  detection.is_dynamic = detectionGroup_368to375[scanID].flr2rdr_detn368to375dyn_prpty375;
  detection.mode = detectionGroup_368to375[scanID].flr2rdr_detn368to375mode375;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_368to375[scanID].flr2rdr_detn368to375rng_qlty375);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_368to375[scanID].flr2rdr_detn368to375rng_rt_qlty375);

  return detection;
}

void InitialFLRMonitorHal::Impl::store_detection_data_376to383(const initialflrmonitorhal::types::FLR2RdrDetn376to383 detectionGroup, const uint8_t& scanID)
{
  if( !detectionGroup_376to383.count(scanID) )
  {
      detectionGroup_376to383.emplace(std::pair<uint8_t, initialflrmonitorhal::types::FLR2RdrDetn376to383>(scanID, detectionGroup));
      scan_id_counter[scanID]++;
  }
}



 // Get detection function  for detection ..... 47


flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection376(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_376to383[scanID].flr2rdr_detn376to383snr376;
  detection.azimuth = detectionGroup_376to383[scanID].flr2rdr_detn376to383azi376;
  detection.elevation = detectionGroup_376to383[scanID].flr2rdr_detn376to383elevn376;
  detection.range = detectionGroup_376to383[scanID].flr2rdr_detn376to383rnge376;
  detection.range_rate = detectionGroup_376to383[scanID].flr2rdr_detn376to383rng_rate376;
  detection.is_dynamic = detectionGroup_376to383[scanID].flr2rdr_detn376to383dyn_prpty376;
  detection.mode = detectionGroup_376to383[scanID].flr2rdr_detn376to383mode376;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_376to383[scanID].flr2rdr_detn376to383rng_qlty376);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_376to383[scanID].flr2rdr_detn376to383rng_rt_qlty376);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection377(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_376to383[scanID].flr2rdr_detn376to383snr377;
  detection.azimuth = detectionGroup_376to383[scanID].flr2rdr_detn376to383azi377;
  detection.elevation = detectionGroup_376to383[scanID].flr2rdr_detn376to383elevn377;
  detection.range = detectionGroup_376to383[scanID].flr2rdr_detn376to383rnge377;
  detection.range_rate = detectionGroup_376to383[scanID].flr2rdr_detn376to383rng_rate377;
  detection.is_dynamic = detectionGroup_376to383[scanID].flr2rdr_detn376to383dyn_prpty377;
  detection.mode = detectionGroup_376to383[scanID].flr2rdr_detn376to383mode377;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_376to383[scanID].flr2rdr_detn376to383rng_qlty377);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_376to383[scanID].flr2rdr_detn376to383rng_rt_qlty377);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection378(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_376to383[scanID].flr2rdr_detn376to383snr378;
  detection.azimuth = detectionGroup_376to383[scanID].flr2rdr_detn376to383azi378;
  detection.elevation = detectionGroup_376to383[scanID].flr2rdr_detn376to383elevn378;
  detection.range = detectionGroup_376to383[scanID].flr2rdr_detn376to383rnge378;
  detection.range_rate = detectionGroup_376to383[scanID].flr2rdr_detn376to383rng_rate378;
  detection.is_dynamic = detectionGroup_376to383[scanID].flr2rdr_detn376to383dyn_prpty378;
  detection.mode = detectionGroup_376to383[scanID].flr2rdr_detn376to383mode378;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_376to383[scanID].flr2rdr_detn376to383rng_qlty378);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_376to383[scanID].flr2rdr_detn376to383rng_rt_qlty378);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection379(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_376to383[scanID].flr2rdr_detn376to383snr379;
  detection.azimuth = detectionGroup_376to383[scanID].flr2rdr_detn376to383azi379;
  detection.elevation = detectionGroup_376to383[scanID].flr2rdr_detn376to383elevn379;
  detection.range = detectionGroup_376to383[scanID].flr2rdr_detn376to383rnge379;
  detection.range_rate = detectionGroup_376to383[scanID].flr2rdr_detn376to383rng_rate379;
  detection.is_dynamic = detectionGroup_376to383[scanID].flr2rdr_detn376to383dyn_prpty379;
  detection.mode = detectionGroup_376to383[scanID].flr2rdr_detn376to383mode379;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_376to383[scanID].flr2rdr_detn376to383rng_qlty379);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_376to383[scanID].flr2rdr_detn376to383rng_rt_qlty379);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection380(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_376to383[scanID].flr2rdr_detn376to383snr380;
  detection.azimuth = detectionGroup_376to383[scanID].flr2rdr_detn376to383azi380;
  detection.elevation = detectionGroup_376to383[scanID].flr2rdr_detn376to383elevn380;
  detection.range = detectionGroup_376to383[scanID].flr2rdr_detn376to383rnge380;
  detection.range_rate = detectionGroup_376to383[scanID].flr2rdr_detn376to383rng_rate380;
  detection.is_dynamic = detectionGroup_376to383[scanID].flr2rdr_detn376to383dyn_prpty380;
  detection.mode = detectionGroup_376to383[scanID].flr2rdr_detn376to383mode380;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_376to383[scanID].flr2rdr_detn376to383rng_qlty380);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_376to383[scanID].flr2rdr_detn376to383rng_rt_qlty380);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection381(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_376to383[scanID].flr2rdr_detn376to383snr381;
  detection.azimuth = detectionGroup_376to383[scanID].flr2rdr_detn376to383azi381;
  detection.elevation = detectionGroup_376to383[scanID].flr2rdr_detn376to383elevn381;
  detection.range = detectionGroup_376to383[scanID].flr2rdr_detn376to383rnge381;
  detection.range_rate = detectionGroup_376to383[scanID].flr2rdr_detn376to383rng_rate381;
  detection.is_dynamic = detectionGroup_376to383[scanID].flr2rdr_detn376to383dyn_prpty381;
  detection.mode = detectionGroup_376to383[scanID].flr2rdr_detn376to383mode381;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_376to383[scanID].flr2rdr_detn376to383rng_qlty381);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_376to383[scanID].flr2rdr_detn376to383rng_rt_qlty381);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection382(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_376to383[scanID].flr2rdr_detn376to383snr382;
  detection.azimuth = detectionGroup_376to383[scanID].flr2rdr_detn376to383azi382;
  detection.elevation = detectionGroup_376to383[scanID].flr2rdr_detn376to383elevn382;
  detection.range = detectionGroup_376to383[scanID].flr2rdr_detn376to383rnge382;
  detection.range_rate = detectionGroup_376to383[scanID].flr2rdr_detn376to383rng_rate382;
  detection.is_dynamic = detectionGroup_376to383[scanID].flr2rdr_detn376to383dyn_prpty382;
  detection.mode = detectionGroup_376to383[scanID].flr2rdr_detn376to383mode382;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_376to383[scanID].flr2rdr_detn376to383rng_qlty382);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_376to383[scanID].flr2rdr_detn376to383rng_rt_qlty382);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection383(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_376to383[scanID].flr2rdr_detn376to383snr383;
  detection.azimuth = detectionGroup_376to383[scanID].flr2rdr_detn376to383azi383;
  detection.elevation = detectionGroup_376to383[scanID].flr2rdr_detn376to383elevn383;
  detection.range = detectionGroup_376to383[scanID].flr2rdr_detn376to383rnge383;
  detection.range_rate = detectionGroup_376to383[scanID].flr2rdr_detn376to383rng_rate383;
  detection.is_dynamic = detectionGroup_376to383[scanID].flr2rdr_detn376to383dyn_prpty383;
  detection.mode = detectionGroup_376to383[scanID].flr2rdr_detn376to383mode383;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_376to383[scanID].flr2rdr_detn376to383rng_qlty383);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_376to383[scanID].flr2rdr_detn376to383rng_rt_qlty383);

  return detection;
}

void InitialFLRMonitorHal::Impl::store_detection_data_384to391(const initialflrmonitorhal::types::FLR2RdrDetn384to391 detectionGroup, const uint8_t& scanID)
{
  if( !detectionGroup_384to391.count(scanID) )
  {
      detectionGroup_384to391.emplace(std::pair<uint8_t, initialflrmonitorhal::types::FLR2RdrDetn384to391>(scanID, detectionGroup));
      scan_id_counter[scanID]++;
  }
}



 // Get detection function  for detection ..... 48


flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection384(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_384to391[scanID].flr2rdr_detn384to391snr384;
  detection.azimuth = detectionGroup_384to391[scanID].flr2rdr_detn384to391azi384;
  detection.elevation = detectionGroup_384to391[scanID].flr2rdr_detn384to391elevn384;
  detection.range = detectionGroup_384to391[scanID].flr2rdr_detn384to391rnge384;
  detection.range_rate = detectionGroup_384to391[scanID].flr2rdr_detn384to391rng_rate384;
  detection.is_dynamic = detectionGroup_384to391[scanID].flr2rdr_detn384to391dyn_prpty384;
  detection.mode = detectionGroup_384to391[scanID].flr2rdr_detn384to391mode384;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_384to391[scanID].flr2rdr_detn384to391rng_qlty384);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_384to391[scanID].flr2rdr_detn384to391rng_rt_qlty384);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection385(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_384to391[scanID].flr2rdr_detn384to391snr385;
  detection.azimuth = detectionGroup_384to391[scanID].flr2rdr_detn384to391azi385;
  detection.elevation = detectionGroup_384to391[scanID].flr2rdr_detn384to391elevn385;
  detection.range = detectionGroup_384to391[scanID].flr2rdr_detn384to391rnge385;
  detection.range_rate = detectionGroup_384to391[scanID].flr2rdr_detn384to391rng_rate385;
  detection.is_dynamic = detectionGroup_384to391[scanID].flr2rdr_detn384to391dyn_prpty385;
  detection.mode = detectionGroup_384to391[scanID].flr2rdr_detn384to391mode385;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_384to391[scanID].flr2rdr_detn384to391rng_qlty385);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_384to391[scanID].flr2rdr_detn384to391rng_rt_qlty385);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection386(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_384to391[scanID].flr2rdr_detn384to391snr386;
  detection.azimuth = detectionGroup_384to391[scanID].flr2rdr_detn384to391azi386;
  detection.elevation = detectionGroup_384to391[scanID].flr2rdr_detn384to391elevn386;
  detection.range = detectionGroup_384to391[scanID].flr2rdr_detn384to391rnge386;
  detection.range_rate = detectionGroup_384to391[scanID].flr2rdr_detn384to391rng_rate386;
  detection.is_dynamic = detectionGroup_384to391[scanID].flr2rdr_detn384to391dyn_prpty386;
  detection.mode = detectionGroup_384to391[scanID].flr2rdr_detn384to391mode386;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_384to391[scanID].flr2rdr_detn384to391rng_qlty386);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_384to391[scanID].flr2rdr_detn384to391rng_rt_qlty386);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection387(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_384to391[scanID].flr2rdr_detn384to391snr387;
  detection.azimuth = detectionGroup_384to391[scanID].flr2rdr_detn384to391azi387;
  detection.elevation = detectionGroup_384to391[scanID].flr2rdr_detn384to391elevn387;
  detection.range = detectionGroup_384to391[scanID].flr2rdr_detn384to391rnge387;
  detection.range_rate = detectionGroup_384to391[scanID].flr2rdr_detn384to391rng_rate387;
  detection.is_dynamic = detectionGroup_384to391[scanID].flr2rdr_detn384to391dyn_prpty387;
  detection.mode = detectionGroup_384to391[scanID].flr2rdr_detn384to391mode387;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_384to391[scanID].flr2rdr_detn384to391rng_qlty387);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_384to391[scanID].flr2rdr_detn384to391rng_rt_qlty387);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection388(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_384to391[scanID].flr2rdr_detn384to391snr388;
  detection.azimuth = detectionGroup_384to391[scanID].flr2rdr_detn384to391azi388;
  detection.elevation = detectionGroup_384to391[scanID].flr2rdr_detn384to391elevn388;
  detection.range = detectionGroup_384to391[scanID].flr2rdr_detn384to391rnge388;
  detection.range_rate = detectionGroup_384to391[scanID].flr2rdr_detn384to391rng_rate388;
  detection.is_dynamic = detectionGroup_384to391[scanID].flr2rdr_detn384to391dyn_prpty388;
  detection.mode = detectionGroup_384to391[scanID].flr2rdr_detn384to391mode388;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_384to391[scanID].flr2rdr_detn384to391rng_qlty388);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_384to391[scanID].flr2rdr_detn384to391rng_rt_qlty388);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection389(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_384to391[scanID].flr2rdr_detn384to391snr389;
  detection.azimuth = detectionGroup_384to391[scanID].flr2rdr_detn384to391azi389;
  detection.elevation = detectionGroup_384to391[scanID].flr2rdr_detn384to391elevn389;
  detection.range = detectionGroup_384to391[scanID].flr2rdr_detn384to391rnge389;
  detection.range_rate = detectionGroup_384to391[scanID].flr2rdr_detn384to391rng_rate389;
  detection.is_dynamic = detectionGroup_384to391[scanID].flr2rdr_detn384to391dyn_prpty389;
  detection.mode = detectionGroup_384to391[scanID].flr2rdr_detn384to391mode389;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_384to391[scanID].flr2rdr_detn384to391rng_qlty389);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_384to391[scanID].flr2rdr_detn384to391rng_rt_qlty389);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection390(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_384to391[scanID].flr2rdr_detn384to391snr390;
  detection.azimuth = detectionGroup_384to391[scanID].flr2rdr_detn384to391azi390;
  detection.elevation = detectionGroup_384to391[scanID].flr2rdr_detn384to391elevn390;
  detection.range = detectionGroup_384to391[scanID].flr2rdr_detn384to391rnge390;
  detection.range_rate = detectionGroup_384to391[scanID].flr2rdr_detn384to391rng_rate390;
  detection.is_dynamic = detectionGroup_384to391[scanID].flr2rdr_detn384to391dyn_prpty390;
  detection.mode = detectionGroup_384to391[scanID].flr2rdr_detn384to391mode390;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_384to391[scanID].flr2rdr_detn384to391rng_qlty390);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_384to391[scanID].flr2rdr_detn384to391rng_rt_qlty390);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection391(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_384to391[scanID].flr2rdr_detn384to391snr391;
  detection.azimuth = detectionGroup_384to391[scanID].flr2rdr_detn384to391azi391;
  detection.elevation = detectionGroup_384to391[scanID].flr2rdr_detn384to391elevn391;
  detection.range = detectionGroup_384to391[scanID].flr2rdr_detn384to391rnge391;
  detection.range_rate = detectionGroup_384to391[scanID].flr2rdr_detn384to391rng_rate391;
  detection.is_dynamic = detectionGroup_384to391[scanID].flr2rdr_detn384to391dyn_prpty391;
  detection.mode = detectionGroup_384to391[scanID].flr2rdr_detn384to391mode391;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_384to391[scanID].flr2rdr_detn384to391rng_qlty391);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_384to391[scanID].flr2rdr_detn384to391rng_rt_qlty391);

  return detection;
}

void InitialFLRMonitorHal::Impl::store_detection_data_392to399(const initialflrmonitorhal::types::FLR2RdrDetn392to399 detectionGroup, const uint8_t& scanID)
{
  if( !detectionGroup_392to399.count(scanID) )
  {
      detectionGroup_392to399.emplace(std::pair<uint8_t, initialflrmonitorhal::types::FLR2RdrDetn392to399>(scanID, detectionGroup));
      scan_id_counter[scanID]++;
  }
}



 // Get detection function  for detection ..... 49


flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection392(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_392to399[scanID].flr2rdr_detn392to399snr392;
  detection.azimuth = detectionGroup_392to399[scanID].flr2rdr_detn392to399azi392;
  detection.elevation = detectionGroup_392to399[scanID].flr2rdr_detn392to399elevn392;
  detection.range = detectionGroup_392to399[scanID].flr2rdr_detn392to399rnge392;
  detection.range_rate = detectionGroup_392to399[scanID].flr2rdr_detn392to399rng_rate392;
  detection.is_dynamic = detectionGroup_392to399[scanID].flr2rdr_detn392to399dyn_prpty392;
  detection.mode = detectionGroup_392to399[scanID].flr2rdr_detn392to399mode392;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_392to399[scanID].flr2rdr_detn392to399rng_qlty392);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_392to399[scanID].flr2rdr_detn392to399rng_rt_qlty392);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection393(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_392to399[scanID].flr2rdr_detn392to399snr393;
  detection.azimuth = detectionGroup_392to399[scanID].flr2rdr_detn392to399azi393;
  detection.elevation = detectionGroup_392to399[scanID].flr2rdr_detn392to399elevn393;
  detection.range = detectionGroup_392to399[scanID].flr2rdr_detn392to399rnge393;
  detection.range_rate = detectionGroup_392to399[scanID].flr2rdr_detn392to399rng_rate393;
  detection.is_dynamic = detectionGroup_392to399[scanID].flr2rdr_detn392to399dyn_prpty393;
  detection.mode = detectionGroup_392to399[scanID].flr2rdr_detn392to399mode393;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_392to399[scanID].flr2rdr_detn392to399rng_qlty393);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_392to399[scanID].flr2rdr_detn392to399rng_rt_qlty393);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection394(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_392to399[scanID].flr2rdr_detn392to399snr394;
  detection.azimuth = detectionGroup_392to399[scanID].flr2rdr_detn392to399azi394;
  detection.elevation = detectionGroup_392to399[scanID].flr2rdr_detn392to399elevn394;
  detection.range = detectionGroup_392to399[scanID].flr2rdr_detn392to399rnge394;
  detection.range_rate = detectionGroup_392to399[scanID].flr2rdr_detn392to399rng_rate394;
  detection.is_dynamic = detectionGroup_392to399[scanID].flr2rdr_detn392to399dyn_prpty394;
  detection.mode = detectionGroup_392to399[scanID].flr2rdr_detn392to399mode394;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_392to399[scanID].flr2rdr_detn392to399rng_qlty394);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_392to399[scanID].flr2rdr_detn392to399rng_rt_qlty394);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection395(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_392to399[scanID].flr2rdr_detn392to399snr395;
  detection.azimuth = detectionGroup_392to399[scanID].flr2rdr_detn392to399azi395;
  detection.elevation = detectionGroup_392to399[scanID].flr2rdr_detn392to399elevn395;
  detection.range = detectionGroup_392to399[scanID].flr2rdr_detn392to399rnge395;
  detection.range_rate = detectionGroup_392to399[scanID].flr2rdr_detn392to399rng_rate395;
  detection.is_dynamic = detectionGroup_392to399[scanID].flr2rdr_detn392to399dyn_prpty395;
  detection.mode = detectionGroup_392to399[scanID].flr2rdr_detn392to399mode395;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_392to399[scanID].flr2rdr_detn392to399rng_qlty395);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_392to399[scanID].flr2rdr_detn392to399rng_rt_qlty395);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection396(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_392to399[scanID].flr2rdr_detn392to399snr396;
  detection.azimuth = detectionGroup_392to399[scanID].flr2rdr_detn392to399azi396;
  detection.elevation = detectionGroup_392to399[scanID].flr2rdr_detn392to399elevn396;
  detection.range = detectionGroup_392to399[scanID].flr2rdr_detn392to399rnge396;
  detection.range_rate = detectionGroup_392to399[scanID].flr2rdr_detn392to399rng_rate396;
  detection.is_dynamic = detectionGroup_392to399[scanID].flr2rdr_detn392to399dyn_prpty396;
  detection.mode = detectionGroup_392to399[scanID].flr2rdr_detn392to399mode396;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_392to399[scanID].flr2rdr_detn392to399rng_qlty396);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_392to399[scanID].flr2rdr_detn392to399rng_rt_qlty396);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection397(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_392to399[scanID].flr2rdr_detn392to399snr397;
  detection.azimuth = detectionGroup_392to399[scanID].flr2rdr_detn392to399azi397;
  detection.elevation = detectionGroup_392to399[scanID].flr2rdr_detn392to399elevn397;
  detection.range = detectionGroup_392to399[scanID].flr2rdr_detn392to399rnge397;
  detection.range_rate = detectionGroup_392to399[scanID].flr2rdr_detn392to399rng_rate397;
  detection.is_dynamic = detectionGroup_392to399[scanID].flr2rdr_detn392to399dyn_prpty397;
  detection.mode = detectionGroup_392to399[scanID].flr2rdr_detn392to399mode397;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_392to399[scanID].flr2rdr_detn392to399rng_qlty397);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_392to399[scanID].flr2rdr_detn392to399rng_rt_qlty397);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection398(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_392to399[scanID].flr2rdr_detn392to399snr398;
  detection.azimuth = detectionGroup_392to399[scanID].flr2rdr_detn392to399azi398;
  detection.elevation = detectionGroup_392to399[scanID].flr2rdr_detn392to399elevn398;
  detection.range = detectionGroup_392to399[scanID].flr2rdr_detn392to399rnge398;
  detection.range_rate = detectionGroup_392to399[scanID].flr2rdr_detn392to399rng_rate398;
  detection.is_dynamic = detectionGroup_392to399[scanID].flr2rdr_detn392to399dyn_prpty398;
  detection.mode = detectionGroup_392to399[scanID].flr2rdr_detn392to399mode398;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_392to399[scanID].flr2rdr_detn392to399rng_qlty398);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_392to399[scanID].flr2rdr_detn392to399rng_rt_qlty398);

  return detection;
}

flrmonitorhal::RadarDetection InitialFLRMonitorHal::Impl::GetDetection399(const uint8_t& scanID) const{
  flrmonitorhal::RadarDetection detection;

  detection.snr = detectionGroup_392to399[scanID].flr2rdr_detn392to399snr399;
  detection.azimuth = detectionGroup_392to399[scanID].flr2rdr_detn392to399azi399;
  detection.elevation = detectionGroup_392to399[scanID].flr2rdr_detn392to399elevn399;
  detection.range = detectionGroup_392to399[scanID].flr2rdr_detn392to399rnge399;
  detection.range_rate = detectionGroup_392to399[scanID].flr2rdr_detn392to399rng_rate399;
  detection.is_dynamic = detectionGroup_392to399[scanID].flr2rdr_detn392to399dyn_prpty399;
  detection.mode = detectionGroup_392to399[scanID].flr2rdr_detn392to399mode399;
  detection.quality_range = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_392to399[scanID].flr2rdr_detn392to399rng_qlty399);
  detection.quality_range_rate = static_cast<flrmonitorhal::QualitySpecific>(detectionGroup_392to399[scanID].flr2rdr_detn392to399rng_rt_qlty399);

  return detection;
}

