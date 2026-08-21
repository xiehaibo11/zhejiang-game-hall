
/* cocos2d::Physics3DConeTwistConstraint::create(cocos2d::Physics3DRigidBody*, cocos2d::Mat4 const&)
    */

Ref * cocos2d::Physics3DConeTwistConstraint::create(Physics3DRigidBody *param_1,Mat4 *param_2)

{
  long lVar1;
  Ref *this;
  btConeTwistConstraint *this_00;
  btTransform abStack_78 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = operator_new(0x50,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    Ref::Ref(this);
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined4 *)(this + 0x40) = 4;
    *(undefined ***)this = &PTR__Physics3DPointToPointConstraint_01726f48;
  }
  *(Physics3DRigidBody **)(this + 0x30) = param_1;
  Ref::retain((Ref *)param_1);
  convertMat4TobtTransform(param_2);
  this_00 = (btConeTwistConstraint *)btAlignedAllocInternal(0x278,0x10);
  btConeTwistConstraint::btConeTwistConstraint(this_00,*(btRigidBody **)(param_1 + 0x78),abStack_78)
  ;
  *(btConeTwistConstraint **)(this + 0x28) = this_00;
  Ref::autorelease(this);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

