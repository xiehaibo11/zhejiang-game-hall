
/* cocos2d::FileUtilsAndroid::~FileUtilsAndroid() */

void __thiscall cocos2d::FileUtilsAndroid::~FileUtilsAndroid(FileUtilsAndroid *this)

{
  *(undefined ***)this = &PTR__FileUtilsAndroid_01698008;
  if (obbfile != (long *)0x0) {
    (**(code **)(*obbfile + 8))();
    obbfile = (long *)0x0;
  }
  FileUtils::~FileUtils((FileUtils *)this);
  operator_delete(this);
  return;
}

