
/* cocos2d::Configuration::sharedConfiguration() */

Configuration * cocos2d::Configuration::sharedConfiguration(void)

{
  Configuration *this;
  
  if (s_sharedConfiguration == (Configuration *)0x0) {
    this = operator_new(0x88,(nothrow_t *)&std::nothrow);
    if (this != (Configuration *)0x0) {
      Configuration(this);
    }
    s_sharedConfiguration = this;
    init(this);
  }
  return s_sharedConfiguration;
}

