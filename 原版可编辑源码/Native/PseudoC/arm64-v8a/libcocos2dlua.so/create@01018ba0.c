
/* cocos2d::Physics3DHingeConstraint::create(cocos2d::Physics3DRigidBody*, cocos2d::Vec3 const&,
   cocos2d::Vec3 const&, bool) */

Ref * cocos2d::Physics3DHingeConstraint::create
                (Physics3DRigidBody *param_1,Vec3 *param_2,Vec3 *param_3,bool param_4)

{
  long lVar1;
  Ref *this;
  btHingeConstraint *this_00;
  btRigidBody *pbVar2;
  undefined4 local_78 [4];
  undefined4 local_68 [4];
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
  local_68[0] = convertVec3TobtVector3(param_2);
  local_78[0] = convertVec3TobtVector3(param_3);
  btHingeConstraint::btHingeConstraint
            (this_00,pbVar2,(btVector3 *)local_68,(btVector3 *)local_78,param_4);
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

