
/* cocos2d::renderer::NodeMemPool::~NodeMemPool() */

void __thiscall cocos2d::renderer::NodeMemPool::~NodeMemPool(NodeMemPool *this)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x38);
  plVar1 = *(long **)(this + 0x40);
  *(undefined ***)this = &PTR__NodeMemPool_01c696d8;
  if (plVar2 != plVar1) {
    do {
      if ((long *)*plVar2 != (long *)0x0) {
        (**(code **)(*(long *)*plVar2 + 8))();
        plVar1 = *(long **)(this + 0x40);
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != plVar1);
    plVar2 = *(long **)(this + 0x38);
  }
  *(long **)(this + 0x40) = plVar2;
  _instance = 0;
  if (plVar2 != (long *)0x0) {
    *(long **)(this + 0x40) = plVar2;
    operator_delete(plVar2);
  }
  MemPool::~MemPool((MemPool *)this);
  return;
}

