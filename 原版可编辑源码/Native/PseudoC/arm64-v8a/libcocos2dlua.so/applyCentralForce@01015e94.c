
/* cocos2d::Physics3DRigidBody::applyCentralForce(cocos2d::Vec3 const&) */

void cocos2d::Physics3DRigidBody::applyCentralForce(Vec3 *param_1)

{
  Vec3 *in_x1;
  long lVar1;
  float fVar2;
  float in_s1;
  float in_s2;
  
  lVar1 = *(long *)(param_1 + 0x78);
  fVar2 = (float)convertVec3TobtVector3(in_x1);
  *(ulong *)(lVar1 + 0x1b8) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar1 + 0x178) >> 0x20) * in_s1 +
                (float)((ulong)*(undefined8 *)(lVar1 + 0x1b8) >> 0x20),
                (float)*(undefined8 *)(lVar1 + 0x178) * fVar2 +
                (float)*(undefined8 *)(lVar1 + 0x1b8));
  *(float *)(lVar1 + 0x1c0) = in_s2 * *(float *)(lVar1 + 0x180) + *(float *)(lVar1 + 0x1c0);
  return;
}

