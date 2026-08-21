
/* btConeTwistConstraint::setFrames(btTransform const&, btTransform const&) */

void __thiscall
btConeTwistConstraint::setFrames
          (btConeTwistConstraint *this,btTransform *param_1,btTransform *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x14c) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x144) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x15c) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x154) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x16c) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x164) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(this + 0x17c) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(this + 0x174) = uVar1;
  uVar1 = *(undefined8 *)param_2;
  *(undefined8 *)(this + 0x18c) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(this + 0x184) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(this + 0x19c) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(this + 0x194) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(this + 0x1ac) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(this + 0x1a4) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(this + 0x1bc) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(this + 0x1b4) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x011b84d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x10))();
  return;
}

