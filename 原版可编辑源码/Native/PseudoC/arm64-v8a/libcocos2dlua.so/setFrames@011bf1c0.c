
/* btHingeConstraint::setFrames(btTransform const&, btTransform const&) */

void __thiscall
btHingeConstraint::setFrames(btHingeConstraint *this,btTransform *param_1,btTransform *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x248) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x240) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 600) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x250) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x268) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x260) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(this + 0x278) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(this + 0x270) = uVar1;
  uVar1 = *(undefined8 *)param_2;
  *(undefined8 *)(this + 0x288) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(this + 0x280) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(this + 0x298) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(this + 0x290) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(this + 0x2a8) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(this + 0x2a0) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(this + 0x2b8) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(this + 0x2b0) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x011bf208. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x10))();
  return;
}

