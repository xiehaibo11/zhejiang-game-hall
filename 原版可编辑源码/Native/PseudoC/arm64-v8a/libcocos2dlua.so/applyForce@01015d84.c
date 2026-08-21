
/* cocos2d::Physics3DRigidBody::applyForce(cocos2d::Vec3 const&, cocos2d::Vec3 const&) */

void cocos2d::Physics3DRigidBody::applyForce(Vec3 *param_1,Vec3 *param_2)

{
  Vec3 *in_x2;
  long lVar1;
  float fVar2;
  float fVar3;
  float in_s1;
  float fVar4;
  float in_s2;
  float fVar5;
  
                    /* catch() { ... } // from try @ 01015dcc with catch @ 01015d90 */
  lVar1 = *(long *)(param_1 + 0x78);
  fVar2 = (float)convertVec3TobtVector3(param_2);
  fVar4 = in_s1;
  fVar5 = in_s2;
  fVar3 = (float)convertVec3TobtVector3(in_x2);
                    /* try { // try from 01015dc4 to 01115dcb has its CatchHandler @ 01015dfc */
                    /* try { // try from 01015dcc to 01115e17 has its CatchHandler @ 01015d90 */
  fVar2 = fVar2 * (float)*(undefined8 *)(lVar1 + 0x178);
  in_s1 = in_s1 * (float)((ulong)*(undefined8 *)(lVar1 + 0x178) >> 0x20);
  *(ulong *)(lVar1 + 0x1b8) =
       CONCAT44(in_s1 + (float)((ulong)*(undefined8 *)(lVar1 + 0x1b8) >> 0x20),
                fVar2 + (float)*(undefined8 *)(lVar1 + 0x1b8));
  in_s2 = in_s2 * *(float *)(lVar1 + 0x180);
  *(float *)(lVar1 + 0x1c0) = in_s2 + *(float *)(lVar1 + 0x1c0);
                    /* catch() { ... } // from try @ 01015dc4 with catch @ 01015dfc */
                    /* try { // try from 01015e18 to 01115ef7 has its CatchHandler @ 01015e18
                       catch() { ... } // from try @ 01015e18 with catch @ 01015e18
                       catch() { ... } // from try @ 01015f14 with catch @ 01015e18 */
  *(ulong *)(lVar1 + 0x1c8) =
       CONCAT44((fVar2 * fVar5 - fVar3 * in_s2) *
                (float)((ulong)*(undefined8 *)(lVar1 + 0x250) >> 0x20) +
                (float)((ulong)*(undefined8 *)(lVar1 + 0x1c8) >> 0x20),
                (fVar4 * in_s2 - fVar5 * in_s1) * (float)*(undefined8 *)(lVar1 + 0x250) +
                (float)*(undefined8 *)(lVar1 + 0x1c8));
  *(float *)(lVar1 + 0x1d0) =
       (fVar3 * in_s1 - fVar4 * fVar2) * *(float *)(lVar1 + 600) + *(float *)(lVar1 + 0x1d0);
  return;
}

