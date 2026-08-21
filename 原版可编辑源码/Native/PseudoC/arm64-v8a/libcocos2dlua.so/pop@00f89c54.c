
/* cocos2d::PoolManager::pop() */

void __thiscall cocos2d::PoolManager::pop(PoolManager *this)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 8);
  if (*(long *)this == lVar1) {
    __android_log_print(6,"cocos2d-x assert","%s function:%s line:%d",
                        "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/base/CCAutoreleasePool.cpp",
                        "pop",0xa8);
    lVar1 = *(long *)(this + 8);
  }
  *(long *)(this + 8) = lVar1 + -8;
  return;
}

