
/* dragonBones::CCSlot::CCSlot() */

void __thiscall dragonBones::CCSlot::CCSlot(CCSlot *this)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  
  iVar1 = BaseObject::_hashCode;
  uVar3 = NEON_fmov(0x3f800000,4);
  BaseObject::_hashCode = BaseObject::_hashCode + 1;
  *(undefined8 *)(this + 0x18) = 0x3f80000000000000;
  *(undefined8 *)(this + 0x10) = 0x3f800000;
  auVar2 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(this + 0x38) = uVar3;
  *(undefined8 *)(this + 0x50) = uVar3;
  *(int *)(this + 8) = iVar1;
  this[0xc] = (CCSlot)0x0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(long *)(this + 0xac) = auVar2._8_8_;
  *(long *)(this + 0xa4) = auVar2._0_8_;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0xbc) = 0;
  *(undefined8 *)(this + 0xb4) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0x10c) = 0x3f800000;
  *(undefined8 *)(this + 0x11c) = 0;
  *(undefined8 *)(this + 0x114) = 0x3f80000000000000;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined ***)this = &PTR__CCSlot_016d7ec0;
  _onClear(this);
  return;
}

