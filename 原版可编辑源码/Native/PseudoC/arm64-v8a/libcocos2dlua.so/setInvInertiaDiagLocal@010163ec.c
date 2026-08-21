
/* cocos2d::Physics3DRigidBody::setInvInertiaDiagLocal(cocos2d::Vec3 const&) */

void cocos2d::Physics3DRigidBody::setInvInertiaDiagLocal(Vec3 *param_1)

{
  Vec3 *in_x1;
  long lVar1;
  undefined4 uVar2;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined4 in_s3;
  
                    /* try { // try from 010163f8 to 0111647f has its CatchHandler @ 010162f0 */
  lVar1 = *(long *)(param_1 + 0x78);
  uVar2 = convertVec3TobtVector3(in_x1);
  *(undefined4 *)(lVar1 + 0x1a8) = uVar2;
  *(undefined4 *)(lVar1 + 0x1ac) = in_s1;
  *(undefined4 *)(lVar1 + 0x1b0) = in_s2;
  *(undefined4 *)(lVar1 + 0x1b4) = in_s3;
  return;
}

