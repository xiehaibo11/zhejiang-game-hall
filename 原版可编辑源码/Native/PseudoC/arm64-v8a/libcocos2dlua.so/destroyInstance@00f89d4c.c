
/* cocos2d::PoolManager::destroyInstance() */

void cocos2d::PoolManager::destroyInstance(void)

{
  long *plVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  AutoreleasePool *this;
  
  plVar1 = s_singleInstance;
  if (s_singleInstance != (long *)0x0) {
    pvVar3 = (void *)*s_singleInstance;
    pvVar2 = (void *)s_singleInstance[1];
    *(undefined1 *)(s_singleInstance + 3) = 0;
    pvVar4 = pvVar3;
    if (pvVar3 != pvVar2) {
      do {
        this = *(AutoreleasePool **)((long)pvVar2 + -8);
        if (this != (AutoreleasePool *)0x0) {
          AutoreleasePool::~AutoreleasePool(this);
          operator_delete(this);
          pvVar4 = (void *)*plVar1;
          pvVar2 = (void *)plVar1[1];
        }
        pvVar3 = pvVar2;
      } while (pvVar4 != pvVar2);
    }
    if (pvVar3 != (void *)0x0) {
      plVar1[1] = (long)pvVar3;
      operator_delete(pvVar3);
    }
    operator_delete(plVar1);
  }
  s_singleInstance = (long *)0x0;
  return;
}

