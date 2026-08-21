
/* cocos2d::NodeData::resetData() */

void __thiscall cocos2d::NodeData::resetData(NodeData *this)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  if (((byte)this[8] & 1) == 0) {
    *(undefined2 *)(this + 8) = 0;
  }
  else {
    **(undefined1 **)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x10) = 0;
  }
  Mat4::setIdentity((Mat4 *)(this + 0x20));
  plVar2 = *(long **)(this + 0x78);
  plVar3 = *(long **)(this + 0x80);
  if (plVar2 != plVar3) {
    do {
      if ((long *)*plVar2 != (long *)0x0) {
        (**(code **)(*(long *)*plVar2 + 8))();
      }
      plVar2 = plVar2 + 1;
    } while (plVar3 != plVar2);
    plVar2 = *(long **)(this + 0x78);
  }
  plVar3 = *(long **)(this + 0x60);
  plVar1 = *(long **)(this + 0x68);
  *(long **)(this + 0x80) = plVar2;
  if (plVar3 != plVar1) {
    do {
      if ((long *)*plVar3 != (long *)0x0) {
        (**(code **)(*(long *)*plVar3 + 8))();
      }
      plVar3 = plVar3 + 1;
    } while (plVar1 != plVar3);
    plVar3 = *(long **)(this + 0x60);
  }
  *(long **)(this + 0x68) = plVar3;
  return;
}

