
/* cocos2d::PoolManager::~PoolManager() */

void __thiscall cocos2d::PoolManager::~PoolManager(PoolManager *this)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  AutoreleasePool *this_00;
  
  pvVar2 = *(void **)this;
  pvVar1 = *(void **)(this + 8);
  this[0x18] = (PoolManager)0x0;
  pvVar3 = pvVar2;
  if (pvVar2 != pvVar1) {
    do {
      this_00 = *(AutoreleasePool **)((long)pvVar1 + -8);
      if (this_00 != (AutoreleasePool *)0x0) {
        AutoreleasePool::~AutoreleasePool(this_00);
        operator_delete(this_00);
        pvVar3 = *(void **)this;
        pvVar1 = *(void **)(this + 8);
      }
      pvVar2 = pvVar1;
    } while (pvVar3 != pvVar1);
  }
  if (pvVar2 == (void *)0x0) {
    return;
  }
  *(void **)(this + 8) = pvVar2;
  operator_delete(pvVar2);
  return;
}

