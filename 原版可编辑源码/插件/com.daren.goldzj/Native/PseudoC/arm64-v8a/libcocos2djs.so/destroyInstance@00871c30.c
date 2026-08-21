
/* cocos2d::FileUtils::destroyInstance() */

void cocos2d::FileUtils::destroyInstance(void)

{
  if (s_sharedFileUtils != (long *)0x0) {
    (**(code **)(*s_sharedFileUtils + 8))();
  }
  s_sharedFileUtils = (long *)0x0;
  return;
}

