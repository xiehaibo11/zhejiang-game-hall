
/* cocos2d::renderer::MemPool::~MemPool() */

void __thiscall cocos2d::renderer::MemPool::~MemPool(MemPool *this)

{
  void *pvVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 8);
  plVar2 = *(long **)(this + 0x10);
  *(undefined ***)this = &PTR__MemPool_01c69660;
  if (plVar3 != plVar2) {
    do {
      if ((long *)*plVar3 != (long *)0x0) {
        (**(code **)(*(long *)*plVar3 + 8))();
        plVar2 = *(long **)(this + 0x10);
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar2);
    plVar3 = *(long **)(this + 8);
  }
  pvVar1 = *(void **)(this + 0x20);
  *(long **)(this + 0x10) = plVar3;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x28) = pvVar1;
    operator_delete(pvVar1);
    plVar3 = *(long **)(this + 8);
  }
  if (plVar3 != (long *)0x0) {
    *(long **)(this + 0x10) = plVar3;
    operator_delete(plVar3);
    return;
  }
  return;
}

