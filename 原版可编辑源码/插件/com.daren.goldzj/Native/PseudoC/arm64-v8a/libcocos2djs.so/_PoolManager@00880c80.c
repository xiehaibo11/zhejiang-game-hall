
/* cocos2d::PoolManager::~PoolManager() */

void __thiscall cocos2d::PoolManager::~PoolManager(PoolManager *this)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  AutoreleasePool *this_00;
  
  pvVar3 = *(void **)this;
  pvVar2 = *(void **)(this + 8);
  pvVar1 = pvVar3;
  if (pvVar3 != pvVar2) {
    do {
      this_00 = *(AutoreleasePool **)((long)pvVar2 + -8);
      if (this_00 != (AutoreleasePool *)0x0) {
        AutoreleasePool::~AutoreleasePool(this_00);
        operator_delete(this_00);
        pvVar3 = *(void **)this;
        pvVar2 = *(void **)(this + 8);
      }
      pvVar1 = pvVar2;
    } while (pvVar3 != pvVar2);
  }
  if (pvVar1 == (void *)0x0) {
    return;
  }
  *(void **)(this + 8) = pvVar1;
  operator_delete(pvVar1);
  return;
}

