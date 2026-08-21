
/* btCompoundShape::btCompoundShape(bool) */

void __thiscall btCompoundShape::btCompoundShape(btCompoundShape *this,bool param_1)

{
  btDbvt *this_00;
  
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x38) = 0x5d5e0b6b;
  *(undefined8 *)(this + 0x3c) = 0x5d5e0b6b5d5e0b6b;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0xdd5e0b6b;
  *(undefined8 *)(this + 0x4c) = 0xdd5e0b6bdd5e0b6b;
  this[0x30] = (btCompoundShape)0x1;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 1;
  *(undefined4 *)(this + 0x68) = 0x3f800000;
  *(undefined8 *)(this + 0x6c) = 0x3f8000003f800000;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined ***)this = &PTR__btCompoundShape_01732be0;
  *(undefined4 *)(this + 8) = 0x1f;
  if (param_1) {
    this_00 = (btDbvt *)btAlignedAllocInternal(0x60,0x10);
    btDbvt::btDbvt(this_00);
    *(btDbvt **)(this + 0x58) = this_00;
  }
  return;
}

