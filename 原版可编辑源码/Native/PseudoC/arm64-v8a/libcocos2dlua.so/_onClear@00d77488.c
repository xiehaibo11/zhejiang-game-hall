
/* dragonBones::BonePose::_onClear() */

void __thiscall dragonBones::BonePose::_onClear(BonePose *this)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x20) = uVar1;
  *(undefined8 *)(this + 0x38) = uVar1;
  *(undefined8 *)(this + 0x50) = uVar1;
  return;
}

