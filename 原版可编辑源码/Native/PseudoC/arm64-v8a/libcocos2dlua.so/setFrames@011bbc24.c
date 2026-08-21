
/* btGeneric6DofConstraint::setFrames(btTransform const&, btTransform const&) */

void __thiscall
btGeneric6DofConstraint::setFrames
          (btGeneric6DofConstraint *this,btTransform *param_1,btTransform *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x48) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x60) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x58) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x70) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x68) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(this + 0x80) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(this + 0x78) = uVar1;
  uVar1 = *(undefined8 *)param_2;
  *(undefined8 *)(this + 0x90) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(this + 0x88) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(this + 0xa0) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(this + 0x98) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(this + 0xb0) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(this + 0xa8) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(this + 0xc0) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(this + 0xb8) = uVar1;
  (**(code **)(*(long *)this + 0x10))();
  calculateTransforms(this,(btTransform *)(*(long *)(this + 0x28) + 8),
                      (btTransform *)(*(long *)(this + 0x30) + 8));
  return;
}

