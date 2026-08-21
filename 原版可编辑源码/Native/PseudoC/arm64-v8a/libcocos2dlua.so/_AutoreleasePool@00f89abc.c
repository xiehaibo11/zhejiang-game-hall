
/* cocos2d::AutoreleasePool::~AutoreleasePool() */

void __thiscall cocos2d::AutoreleasePool::~AutoreleasePool(AutoreleasePool *this)

{
  undefined8 *puVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  undefined8 *puVar5;
  AutoreleasePool *pAVar6;
  undefined8 *puVar7;
  
  puVar5 = *(undefined8 **)this;
  pAVar6 = this + 8;
  puVar7 = *(undefined8 **)pAVar6;
  *(undefined8 *)this = 0;
  *(undefined8 *)pAVar6 = 0;
  *(undefined8 *)(this + 0x10) = 0;
  for (puVar1 = puVar5; puVar1 != puVar7; puVar1 = puVar1 + 1) {
    Ref::release((Ref *)*puVar1);
  }
  if (puVar5 != (undefined8 *)0x0) {
    operator_delete(puVar5);
  }
  plVar2 = (long *)PoolManager::getInstance();
  lVar4 = plVar2[1];
  if (*plVar2 == lVar4) {
    __android_log_print(6,"cocos2d-x assert","%s function:%s line:%d",
                        "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/base/CCAutoreleasePool.cpp",
                        "pop",0xa8);
    lVar4 = plVar2[1];
  }
  plVar2[1] = lVar4 + -8;
  if (((byte)this[0x18] & 1) != 0) {
    operator_delete(*(void **)(this + 0x28));
  }
  pvVar3 = *(void **)this;
  if (pvVar3 != (void *)0x0) {
    *(void **)pAVar6 = pvVar3;
    operator_delete(pvVar3);
    return;
  }
  return;
}

