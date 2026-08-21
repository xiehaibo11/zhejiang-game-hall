
/* cocos2d::Physics3DRigidBody::applyTorqueImpulse(cocos2d::Vec3 const&) */

void cocos2d::Physics3DRigidBody::applyTorqueImpulse(Vec3 *param_1)

{
  Vec3 *in_x1;
  long lVar1;
  float fVar2;
  float in_s1;
  float in_s2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x78);
  fVar2 = (float)convertVec3TobtVector3(in_x1);
                    /* try { // try from 01015fac to 01115fb3 has its CatchHandler @ 0101600c */
                    /* try { // try from 01015fb4 to 01116027 has its CatchHandler @ 01015f70 */
                    /* catch() { ... } // from try @ 01015fac with catch @ 0101600c */
  uVar3 = *(undefined8 *)(lVar1 + 0x164);
  *(undefined8 *)(lVar1 + 0x164) =
       CONCAT44((*(float *)(lVar1 + 0x134) * fVar2 + *(float *)(lVar1 + 0x138) * in_s1 +
                *(float *)(lVar1 + 0x13c) * in_s2) *
                (float)((ulong)*(undefined8 *)(lVar1 + 0x250) >> 0x20) +
                (float)((ulong)uVar3 >> 0x20),
                (*(float *)(lVar1 + 0x124) * fVar2 + *(float *)(lVar1 + 0x128) * in_s1 +
                *(float *)(lVar1 + 300) * in_s2) * (float)*(undefined8 *)(lVar1 + 0x250) +
                (float)uVar3);
  *(float *)(lVar1 + 0x16c) =
       (fVar2 * *(float *)(lVar1 + 0x144) + in_s1 * *(float *)(lVar1 + 0x148) +
       in_s2 * *(float *)(lVar1 + 0x14c)) * *(float *)(lVar1 + 600) + *(float *)(lVar1 + 0x16c);
  return;
}

