
/* cocos2d::Physics3DRigidBody::setGravity(cocos2d::Vec3 const&) */

void cocos2d::Physics3DRigidBody::setGravity(Vec3 *param_1)

{
  long lVar1;
  Vec3 *in_x1;
  btRigidBody *this;
  undefined4 local_38 [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  this = *(btRigidBody **)(param_1 + 0x78);
  local_38[0] = convertVec3TobtVector3(in_x1);
  btRigidBody::setGravity(this,(btVector3 *)local_38);
                    /* try { // try from 010163bc to 011163c7 has its CatchHandler @ 01016468 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 010163d0 to 011163f7 has its CatchHandler @ 0101646c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

