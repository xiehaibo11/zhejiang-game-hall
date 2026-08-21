
/* cocos2d::Configuration::destroyInstance() */

void cocos2d::Configuration::destroyInstance(void)

{
  if (s_sharedConfiguration != (Ref *)0x0) {
    Ref::release(s_sharedConfiguration);
    s_sharedConfiguration = (Ref *)0x0;
  }
  return;
}

