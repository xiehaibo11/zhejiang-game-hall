
/* btHingeConstraint::btHingeConstraint(btRigidBody&, btRigidBody&, btTransform const&, btTransform
   const&, bool) */

void __thiscall
btHingeConstraint::btHingeConstraint
          (btHingeConstraint *this,btRigidBody *param_1,btRigidBody *param_2,btTransform *param_3,
          btTransform *param_4,bool param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  btTypedConstraint::btTypedConstraint((btTypedConstraint *)this,4,param_1,param_2);
  *(undefined ***)this = &PTR__btTypedConstraint_0172d710;
  uVar1 = *(undefined8 *)param_3;
  uVar2 = 0xbf800000;
  if (!param_5) {
    uVar2 = 0x3f800000;
  }
  *(undefined8 *)(this + 0x248) = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(this + 0x240) = uVar1;
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(this + 600) = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(this + 0x250) = uVar1;
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)(this + 0x268) = *(undefined8 *)(param_3 + 0x28);
  *(undefined8 *)(this + 0x260) = uVar1;
  uVar1 = *(undefined8 *)(param_3 + 0x30);
  *(undefined8 *)(this + 0x278) = *(undefined8 *)(param_3 + 0x38);
  *(undefined8 *)(this + 0x270) = uVar1;
  uVar1 = *(undefined8 *)param_4;
  *(undefined8 *)(this + 0x288) = *(undefined8 *)(param_4 + 8);
  *(undefined8 *)(this + 0x280) = uVar1;
  uVar1 = *(undefined8 *)(param_4 + 0x10);
  *(undefined8 *)(this + 0x298) = *(undefined8 *)(param_4 + 0x18);
  *(undefined8 *)(this + 0x290) = uVar1;
  uVar1 = *(undefined8 *)(param_4 + 0x20);
  *(undefined8 *)(this + 0x2a8) = *(undefined8 *)(param_4 + 0x28);
  *(undefined8 *)(this + 0x2a0) = uVar1;
  uVar1 = *(undefined8 *)(param_4 + 0x30);
  *(undefined8 *)(this + 0x2b8) = *(undefined8 *)(param_4 + 0x38);
  *(undefined8 *)(this + 0x2b0) = uVar1;
  *(undefined8 *)(this + 0x2d0) = 0x3e99999a3f666666;
  *(undefined8 *)(this + 0x2c8) = 0xbf80000000000000;
  *(undefined4 *)(this + 0x2d8) = 0x3f800000;
  this[0x2e4] = (btHingeConstraint)0x0;
  *(undefined8 *)(this + 0x2dc) = 0;
  *(undefined4 *)(this + 0x2f8) = 0x1000000;
  this[0x2fc] = (btHingeConstraint)param_5;
  *(undefined4 *)(this + 0x304) = 0;
  *(undefined4 *)(this + 0x2f4) = uVar2;
  return;
}

