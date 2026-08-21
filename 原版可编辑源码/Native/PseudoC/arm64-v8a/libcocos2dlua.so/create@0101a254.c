
/* cocos2d::Physics3D6DofConstraint::create(cocos2d::Physics3DRigidBody*, cocos2d::Mat4 const&,
   bool) */

Ref * cocos2d::Physics3D6DofConstraint::create
                (Physics3DRigidBody *param_1,Mat4 *param_2,bool param_3)

{
  long lVar1;
  Ref *this;
  btGeneric6DofConstraint *this_00;
  btTransform abStack_88 [64];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = operator_new(0x50);
  Ref::Ref(this);
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x40) = 5;
  *(undefined ***)this = &PTR__Physics3DPointToPointConstraint_0169ed10;
  *(Physics3DRigidBody **)(this + 0x38) = param_1;
  Ref::retain((Ref *)param_1);
  convertMat4TobtTransform(param_2);
  this_00 = (btGeneric6DofConstraint *)btAlignedAllocInternal(0x538,0x10);
  btGeneric6DofConstraint::btGeneric6DofConstraint
            (this_00,*(btRigidBody **)(param_1 + 0x78),abStack_88,param_3);
  *(btGeneric6DofConstraint **)(this + 0x28) = this_00;
  Ref::autorelease(this);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

