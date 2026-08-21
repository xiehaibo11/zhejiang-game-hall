
/* cocos2d::Physics3DRigidBody::setLinearFactor(cocos2d::Vec3 const&) */

void cocos2d::Physics3DRigidBody::setLinearFactor(Vec3 *param_1)

{
  Vec3 *in_x1;
  long lVar1;
  float fVar2;
  float in_s1;
  float in_s2;
  undefined4 in_s3;
  float fVar3;
  
  lVar1 = *(long *)(param_1 + 0x78);
  fVar2 = (float)convertVec3TobtVector3(in_x1);
  *(undefined4 *)(lVar1 + 0x184) = in_s3;
  fVar3 = *(float *)(lVar1 + 0x174);
  *(float *)(lVar1 + 0x178) = fVar2;
  *(float *)(lVar1 + 0x17c) = in_s1;
  *(float *)(lVar1 + 0x180) = in_s2;
  *(float *)(lVar1 + 0x260) = fVar2 * fVar3;
  *(float *)(lVar1 + 0x264) = in_s1 * fVar3;
  *(float *)(lVar1 + 0x268) = in_s2 * fVar3;
  *(undefined4 *)(lVar1 + 0x26c) = 0;
  return;
}

