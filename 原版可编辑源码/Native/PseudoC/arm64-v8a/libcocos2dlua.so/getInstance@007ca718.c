
/* cocos2d::FileUtils::getInstance() */

FileUtils * cocos2d::FileUtils::getInstance(void)

{
  FileUtils *this;
  ulong uVar1;
  
  if (s_sharedFileUtils == (FileUtils *)0x0) {
    this = operator_new(0x120);
    FileUtils(this);
    s_sharedFileUtils = this;
    *(undefined ***)this = &PTR__FileUtilsAndroid_01698008;
    uVar1 = FileUtilsAndroid::init((FileUtilsAndroid *)this);
    if ((uVar1 & 1) == 0) {
      if (s_sharedFileUtils != (FileUtils *)0x0) {
        (**(code **)(*(long *)s_sharedFileUtils + 8))(s_sharedFileUtils);
      }
      s_sharedFileUtils = (FileUtils *)0x0;
    }
  }
  return s_sharedFileUtils;
}

