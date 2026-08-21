
/* cocos2d::NodeDatas::~NodeDatas() */

void __thiscall cocos2d::NodeDatas::~NodeDatas(NodeDatas *this)

{
  long *plVar1;
  void *pvVar2;
  long *plVar3;
  long *plVar4;
  
  plVar4 = *(long **)(this + 8);
  plVar3 = *(long **)(this + 0x10);
  *(undefined ***)this = &PTR__NodeDatas_016d2d18;
  if (plVar4 != plVar3) {
    do {
      if ((long *)*plVar4 != (long *)0x0) {
        (**(code **)(*(long *)*plVar4 + 8))();
      }
      plVar4 = plVar4 + 1;
    } while (plVar3 != plVar4);
    plVar4 = *(long **)(this + 8);
  }
  plVar3 = *(long **)(this + 0x20);
  plVar1 = *(long **)(this + 0x28);
  *(long **)(this + 0x10) = plVar4;
  if (plVar3 == plVar1) {
    *(long **)(this + 0x28) = plVar3;
  }
  else {
    do {
      if ((long *)*plVar3 != (long *)0x0) {
        (**(code **)(*(long *)*plVar3 + 8))();
      }
      plVar3 = plVar3 + 1;
    } while (plVar1 != plVar3);
    plVar3 = *(long **)(this + 0x20);
    *(long **)(this + 0x28) = plVar3;
  }
  if (plVar3 != (long *)0x0) {
    *(long **)(this + 0x28) = plVar3;
    operator_delete(plVar3);
  }
  pvVar2 = *(void **)(this + 8);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x10) = pvVar2;
    operator_delete(pvVar2);
    return;
  }
  return;
}

