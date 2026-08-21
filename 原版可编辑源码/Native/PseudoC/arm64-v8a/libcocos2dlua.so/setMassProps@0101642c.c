
/* cocos2d::Physics3DRigidBody::setMassProps(float, cocos2d::Vec3 const&) */

void cocos2d::Physics3DRigidBody::setMassProps(float param_1,Vec3 *param_2)

{
  long lVar1;
  Vec3 *in_x1;
  btRigidBody *this;
  undefined4 local_48 [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = *(btRigidBody **)(param_2 + 0x78);
                    /* catch() { ... } // from try @ 01016374 with catch @ 01016454 */
  local_48[0] = convertVec3TobtVector3(in_x1);
                    /* catch() { ... } // from try @ 010163bc with catch @ 01016468 */
                    /* catch() { ... } // from try @ 010163d0 with catch @ 0101646c */
  btRigidBody::setMassProps(this,param_1,(btVector3 *)local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

