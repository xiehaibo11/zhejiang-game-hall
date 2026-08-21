
/* cocos2d::FileUtils::setDelegate(cocos2d::FileUtils*) */

void cocos2d::FileUtils::setDelegate(FileUtils *param_1)

{
  if (s_sharedFileUtils != (FileUtils *)0x0) {
    (**(code **)(*(long *)s_sharedFileUtils + 8))(s_sharedFileUtils);
  }
  s_sharedFileUtils = param_1;
  return;
}

