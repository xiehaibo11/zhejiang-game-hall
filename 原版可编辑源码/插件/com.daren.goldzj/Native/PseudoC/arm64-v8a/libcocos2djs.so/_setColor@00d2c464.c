
/* dragonBones::Slot::_setColor(dragonBones::ColorTransform const&) */

undefined8 __thiscall dragonBones::Slot::_setColor(Slot *this,ColorTransform *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0xac) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0xa4) = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  this[0x90] = (Slot)0x1;
  *(undefined8 *)(this + 0xbc) = uVar2;
  *(undefined8 *)(this + 0xb4) = uVar1;
  return 1;
}

