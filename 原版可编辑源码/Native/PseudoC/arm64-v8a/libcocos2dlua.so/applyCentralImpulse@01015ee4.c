
/* cocos2d::Physics3DRigidBody::applyCentralImpulse(cocos2d::Vec3 const&) */

void cocos2d::Physics3DRigidBody::applyCentralImpulse(Vec3 *param_1)

{
  Vec3 *in_x1;
  long lVar1;
  float fVar2;
  float in_s1;
  float fVar3;
  float in_s2;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x78);
                    /* try { // try from 01015ef8 to 01115f13 has its CatchHandler @ 01015f54 */
  fVar2 = (float)convertVec3TobtVector3(in_x1);
  fVar3 = *(float *)(lVar1 + 0x174);
                    /* try { // try from 01015f14 to 01115f6f has its CatchHandler @ 01015e18 */
  uVar4 = *(undefined8 *)(lVar1 + 0x154);
  *(undefined8 *)(lVar1 + 0x154) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar1 + 0x178) >> 0x20) * in_s1 * fVar3 +
                (float)((ulong)uVar4 >> 0x20),
                (float)*(undefined8 *)(lVar1 + 0x178) * fVar2 * fVar3 + (float)uVar4);
  *(float *)(lVar1 + 0x15c) = fVar3 * in_s2 * *(float *)(lVar1 + 0x180) + *(float *)(lVar1 + 0x15c);
  return;
}

