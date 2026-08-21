
/* cocos2d::PoolManager::destroyInstance() */

void cocos2d::PoolManager::destroyInstance(void)

{
  void *pvVar1;
  long *plVar2;
  void *pvVar3;
  void *pvVar4;
  AutoreleasePool *this;
  
  plVar2 = s_singleInstance;
  if (s_singleInstance != (long *)0x0) {
    pvVar4 = (void *)*s_singleInstance;
    pvVar3 = (void *)s_singleInstance[1];
    pvVar1 = pvVar4;
    if (pvVar4 != pvVar3) {
      do {
        this = *(AutoreleasePool **)((long)pvVar3 + -8);
        if (this != (AutoreleasePool *)0x0) {
          AutoreleasePool::~AutoreleasePool(this);
          operator_delete(this);
          pvVar4 = (void *)*plVar2;
          pvVar3 = (void *)plVar2[1];
        }
        pvVar1 = pvVar3;
      } while (pvVar4 != pvVar3);
    }
    if (pvVar1 != (void *)0x0) {
      plVar2[1] = (long)pvVar1;
      operator_delete(pvVar1);
    }
    operator_delete(plVar2);
  }
  s_singleInstance = (long *)0x0;
  return;
}

