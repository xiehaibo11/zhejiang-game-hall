
/* cocos2d::Physics3DRigidBody::applyImpulse(cocos2d::Vec3 const&, cocos2d::Vec3 const&) */

void cocos2d::Physics3DRigidBody::applyImpulse(Vec3 *param_1,Vec3 *param_2)

{
  long lVar1;
  Vec3 *in_x2;
  btRigidBody *this;
  undefined4 local_58 [4];
  undefined4 local_48 [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = *(btRigidBody **)(param_1 + 0x78);
  local_48[0] = convertVec3TobtVector3(param_2);
  local_58[0] = convertVec3TobtVector3(in_x2);
  btRigidBody::applyImpulse(this,(btVector3 *)local_48,(btVector3 *)local_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

