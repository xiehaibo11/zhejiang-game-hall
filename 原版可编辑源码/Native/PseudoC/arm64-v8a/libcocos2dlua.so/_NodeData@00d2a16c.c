
/* cocos2d::NodeData::~NodeData() */

void __thiscall cocos2d::NodeData::~NodeData(NodeData *this)

{
  long *plVar1;
  NodeData *pNVar2;
  long *plVar3;
  long *plVar4;
  
  *(undefined ***)this = &PTR__NodeData_016d3488;
  pNVar2 = this + 8;
  if (((byte)*pNVar2 & 1) == 0) {
    *(undefined2 *)pNVar2 = 0;
  }
  else {
    **(undefined1 **)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x10) = 0;
  }
  Mat4::setIdentity((Mat4 *)(this + 0x20));
  plVar3 = *(long **)(this + 0x78);
  plVar4 = *(long **)(this + 0x80);
  if (plVar3 != plVar4) {
    do {
      if ((long *)*plVar3 != (long *)0x0) {
        (**(code **)(*(long *)*plVar3 + 8))();
      }
      plVar3 = plVar3 + 1;
    } while (plVar4 != plVar3);
    plVar3 = *(long **)(this + 0x78);
  }
  plVar4 = *(long **)(this + 0x60);
  plVar1 = *(long **)(this + 0x68);
  *(long **)(this + 0x80) = plVar3;
  if (plVar4 == plVar1) {
    *(long **)(this + 0x68) = plVar4;
  }
  else {
    do {
      if ((long *)*plVar4 != (long *)0x0) {
        (**(code **)(*(long *)*plVar4 + 8))();
      }
      plVar4 = plVar4 + 1;
    } while (plVar1 != plVar4);
    plVar4 = *(long **)(this + 0x60);
    plVar3 = *(long **)(this + 0x78);
    *(long **)(this + 0x68) = plVar4;
  }
  if (plVar3 != (long *)0x0) {
    *(long **)(this + 0x80) = plVar3;
    operator_delete(plVar3);
    plVar4 = *(long **)(this + 0x60);
  }
  if (plVar4 != (long *)0x0) {
    *(long **)(this + 0x68) = plVar4;
    operator_delete(plVar4);
  }
  Mat4::~Mat4((Mat4 *)(this + 0x20));
  if (((byte)*pNVar2 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x18));
  return;
}

