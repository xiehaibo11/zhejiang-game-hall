
/* cocos2d::Physics3DPointToPointConstraint::init(cocos2d::Physics3DRigidBody*,
   cocos2d::Physics3DRigidBody*, cocos2d::Vec3 const&, cocos2d::Vec3 const&) */

undefined8
cocos2d::Physics3DPointToPointConstraint::init
          (Physics3DRigidBody *param_1,Physics3DRigidBody *param_2,Vec3 *param_3,Vec3 *param_4)

{
  long lVar1;
  btPoint2PointConstraint *this;
  Vec3 *in_x4;
  btRigidBody *pbVar2;
  btRigidBody *pbVar3;
  undefined4 local_88 [4];
  undefined4 local_78 [4];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  this = (btPoint2PointConstraint *)btAlignedAllocInternal(0x180,0x10);
  pbVar2 = *(btRigidBody **)(param_2 + 0x78);
  pbVar3 = *(btRigidBody **)(param_3 + 0x78);
  local_78[0] = convertVec3TobtVector3(param_4);
  local_88[0] = convertVec3TobtVector3(in_x4);
  btPoint2PointConstraint::btPoint2PointConstraint
            (this,pbVar2,pbVar3,(btVector3 *)local_78,(btVector3 *)local_88);
  *(btPoint2PointConstraint **)(param_1 + 0x28) = this;
  *(Physics3DRigidBody **)(param_1 + 0x30) = param_2;
  *(Vec3 **)(param_1 + 0x38) = param_3;
  Ref::retain((Ref *)param_2);
  Ref::retain(*(Ref **)(param_1 + 0x38));
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

