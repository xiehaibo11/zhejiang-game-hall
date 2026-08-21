
/* cocos2d::Physics3DPointToPointConstraint::init(cocos2d::Physics3DRigidBody*, cocos2d::Vec3
   const&) */

undefined8 cocos2d::Physics3DPointToPointConstraint::init(Physics3DRigidBody *param_1,Vec3 *param_2)

{
  long lVar1;
  btPoint2PointConstraint *this;
  Vec3 *in_x2;
  btRigidBody *pbVar2;
  undefined4 local_58 [4];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (btPoint2PointConstraint *)btAlignedAllocInternal(0x180,0x10);
  pbVar2 = *(btRigidBody **)(param_2 + 0x78);
  local_58[0] = convertVec3TobtVector3(in_x2);
  btPoint2PointConstraint::btPoint2PointConstraint(this,pbVar2,(btVector3 *)local_58);
  *(btPoint2PointConstraint **)(param_1 + 0x28) = this;
  *(Vec3 **)(param_1 + 0x30) = param_2;
  Ref::retain((Ref *)param_2);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

