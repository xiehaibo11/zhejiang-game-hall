
/* btGeneric6DofConstraint::btGeneric6DofConstraint(btRigidBody&, btRigidBody&, btTransform const&,
   btTransform const&, bool) */

void __thiscall
btGeneric6DofConstraint::btGeneric6DofConstraint
          (btGeneric6DofConstraint *this,btRigidBody *param_1,btRigidBody *param_2,
          btTransform *param_3,btTransform *param_4,bool param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  btTypedConstraint::btTypedConstraint((btTypedConstraint *)this,6,param_1,param_2);
  *(undefined ***)this = &PTR__btTypedConstraint_0172d680;
  uVar1 = *(undefined8 *)param_3;
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(this + 0x48) = uVar1;
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(this + 0x60) = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(this + 0x58) = uVar1;
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)(this + 0x70) = *(undefined8 *)(param_3 + 0x28);
  *(undefined8 *)(this + 0x68) = uVar1;
  uVar1 = *(undefined8 *)(param_3 + 0x30);
  *(undefined8 *)(this + 0x80) = *(undefined8 *)(param_3 + 0x38);
  *(undefined8 *)(this + 0x78) = uVar1;
  uVar1 = *(undefined8 *)param_4;
  *(undefined8 *)(this + 0x90) = *(undefined8 *)(param_4 + 8);
  *(undefined8 *)(this + 0x88) = uVar1;
  uVar1 = *(undefined8 *)(param_4 + 0x10);
  *(undefined8 *)(this + 0xa0) = *(undefined8 *)(param_4 + 0x18);
  *(undefined8 *)(this + 0x98) = uVar1;
  uVar1 = *(undefined8 *)(param_4 + 0x20);
  *(undefined8 *)(this + 0xb0) = *(undefined8 *)(param_4 + 0x28);
  *(undefined8 *)(this + 0xa8) = uVar1;
  uVar2 = *(undefined8 *)(param_4 + 0x38);
  uVar1 = *(undefined8 *)(param_4 + 0x30);
  *(undefined8 *)(this + 0x2d8) = 0;
  *(undefined8 *)(this + 0x2d0) = 0;
  *(undefined8 *)(this + 0x2e8) = 0;
  *(undefined8 *)(this + 0x2e0) = 0;
  *(undefined8 *)(this + 0x2c8) = 0;
  *(undefined8 *)(this + 0x2c0) = 0;
  *(undefined8 *)(this + 0xc0) = uVar2;
  *(undefined8 *)(this + 0xb8) = uVar1;
  *(undefined8 *)(this + 0x2fc) = 0;
  *(undefined8 *)(this + 0x304) = 0;
  *(undefined8 *)(this + 0x310) = 0x3e4ccccd3e4ccccd;
  *(undefined8 *)(this + 0x2f0) = 0x3f8000003f333333;
  *(undefined4 *)(this + 0x2f8) = 0x3f000000;
  *(undefined4 *)(this + 0x30c) = 0x3e4ccccd;
  *(undefined4 *)(this + 0x328) = 0;
  *(undefined8 *)(this + 0x318) = 0;
  *(undefined8 *)(this + 800) = 0;
  *(undefined2 *)(this + 0x32c) = 0;
  *(undefined4 *)(this + 0x330) = 0;
  *(undefined4 *)(this + 0x340) = 0;
  *(undefined8 *)(this + 0x334) = 0;
  *(undefined8 *)(this + 0x344) = 0;
  this[0x32e] = (btGeneric6DofConstraint)0x0;
  *(undefined4 *)(this + 0x3b8) = 0;
  *(undefined8 *)(this + 900) = 0x3dcccccd00000000;
  *(undefined8 *)(this + 0x37c) = 0xbf8000003f800000;
  *(undefined8 *)(this + 0x39c) = 0x3e4ccccd;
  *(undefined4 *)(this + 0x3a4) = 0;
  *(undefined8 *)(this + 0x394) = 0x3f000000;
  *(undefined8 *)(this + 0x38c) = 0x3f80000043960000;
  *(undefined4 *)(this + 0x3b4) = 0;
  *(undefined4 *)(this + 0x3ac) = 0;
  this[0x3a8] = (btGeneric6DofConstraint)0x0;
  *(undefined4 *)(this + 0x3f8) = 0;
  *(undefined8 *)(this + 0x3c4) = 0x3dcccccd00000000;
  *(undefined8 *)(this + 0x3bc) = 0xbf8000003f800000;
  *(undefined8 *)(this + 0x3dc) = 0x3e4ccccd;
  *(undefined4 *)(this + 0x3e4) = 0;
  *(undefined8 *)(this + 0x3d4) = 0x3f000000;
  *(undefined8 *)(this + 0x3cc) = 0x3f80000043960000;
  *(undefined4 *)(this + 0x3f4) = 0;
  *(undefined4 *)(this + 0x3ec) = 0;
  this[1000] = (btGeneric6DofConstraint)0x0;
  *(undefined4 *)(this + 0x438) = 0;
  *(undefined4 *)(this + 0x404) = 0;
  *(undefined8 *)(this + 0x3fc) = 0xbf8000003f800000;
  *(undefined8 *)(this + 0x420) = 0;
  *(undefined8 *)(this + 0x418) = 0x3e4ccccd00000000;
  *(undefined8 *)(this + 0x410) = 0x3f0000003f800000;
  *(undefined8 *)(this + 0x408) = 0x439600003dcccccd;
  this[0x52c] = (btGeneric6DofConstraint)param_5;
  *(undefined4 *)(this + 0x434) = 0;
  *(undefined4 *)(this + 0x42c) = 0;
  this[0x428] = (btGeneric6DofConstraint)0x0;
  this[0x52d] = (btGeneric6DofConstraint)0x1;
  *(undefined4 *)(this + 0x530) = 0;
  this[0x534] = (btGeneric6DofConstraint)0x0;
  calculateTransforms(this,(btTransform *)(*(long *)(this + 0x28) + 8),
                      (btTransform *)(*(long *)(this + 0x30) + 8));
  return;
}

