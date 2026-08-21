
/* cocos2d::Physics3DHingeConstraint::create(cocos2d::Physics3DRigidBody*, cocos2d::Mat4 const&,
   bool) */

Ref * cocos2d::Physics3DHingeConstraint::create
                (Physics3DRigidBody *param_1,Mat4 *param_2,bool param_3)

{
  long lVar1;
  Ref *this;
  btHingeConstraint *this_00;
  btRigidBody *pbVar2;
  btTransform abStack_98 [64];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  this = operator_new(0x50,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    Ref::Ref(this);
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined4 *)(this + 0x40) = 2;
    *(undefined ***)this = &PTR__Physics3DPointToPointConstraint_0169ecd0;
  }
  this_00 = (btHingeConstraint *)btAlignedAllocInternal(0x318,0x10);
  pbVar2 = *(btRigidBody **)(param_1 + 0x78);
  convertMat4TobtTransform(param_2);
  btHingeConstraint::btHingeConstraint(this_00,pbVar2,abStack_98,param_3);
  *(btHingeConstraint **)(this + 0x28) = this_00;
  *(Physics3DRigidBody **)(this + 0x30) = param_1;
  Ref::retain((Ref *)param_1);
  Ref::autorelease(this);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

