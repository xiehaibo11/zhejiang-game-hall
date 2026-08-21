
/* cocos2d::Configuration::purgeConfiguration() */

void cocos2d::Configuration::purgeConfiguration(void)

{
  if (s_sharedConfiguration != (Ref *)0x0) {
    Ref::release(s_sharedConfiguration);
    s_sharedConfiguration = (Ref *)0x0;
  }
  return;
}

