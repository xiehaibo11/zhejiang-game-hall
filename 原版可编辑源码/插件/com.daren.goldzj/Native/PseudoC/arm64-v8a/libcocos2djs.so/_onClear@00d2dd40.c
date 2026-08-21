
/* dragonBones::TransformObject::_onClear() */

void __thiscall dragonBones::TransformObject::_onClear(TransformObject *this)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(this + 0x38) = uVar1;
  *(undefined8 *)(this + 0x50) = uVar1;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x18) = 0x3f80000000000000;
  *(undefined8 *)(this + 0x10) = 0x3f800000;
  this[0x70] = (TransformObject)0x0;
  return;
}

