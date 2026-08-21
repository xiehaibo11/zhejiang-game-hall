
/* dragonBones::Slot::_setColor(dragonBones::ColorTransform const&) */

undefined8 __thiscall dragonBones::Slot::_setColor(Slot *this,ColorTransform *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0xac) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0xa4) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0xbc) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0xb4) = uVar1;
  this[0x90] = (Slot)0x1;
  return 1;
}

