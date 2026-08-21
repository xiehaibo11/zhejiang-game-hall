
/* btPoint2PointConstraint::btPoint2PointConstraint(btRigidBody&, btRigidBody&, btVector3 const&,
   btVector3 const&) */

void __thiscall
btPoint2PointConstraint::btPoint2PointConstraint
          (btPoint2PointConstraint *this,btRigidBody *param_1,btRigidBody *param_2,
          btVector3 *param_3,btVector3 *param_4)

{
  undefined8 uVar1;
  
  btTypedConstraint::btTypedConstraint((btTypedConstraint *)this,3,param_1,param_2);
  *(undefined ***)this = &PTR__btTypedConstraint_0172d7a0;
  uVar1 = *(undefined8 *)param_3;
  *(undefined8 *)(this + 0x14c) = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(this + 0x144) = uVar1;
  uVar1 = *(undefined8 *)param_4;
  *(undefined8 *)(this + 0x15c) = *(undefined8 *)(param_4 + 8);
  *(undefined8 *)(this + 0x154) = uVar1;
  *(undefined4 *)(this + 0x164) = 0;
  this[0x170] = (btPoint2PointConstraint)0x0;
  *(undefined4 *)(this + 0x174) = 0x3e99999a;
  *(undefined8 *)(this + 0x178) = 0x3f800000;
  return;
}

