
/* cocos2d::Physics3DRigidBody::applyTorque(cocos2d::Vec3 const&) */

void cocos2d::Physics3DRigidBody::applyTorque(Vec3 *param_1)

{
  Vec3 *in_x1;
  long lVar1;
  float fVar2;
  float in_s1;
  float in_s2;
  
  lVar1 = *(long *)(param_1 + 0x78);
                    /* catch() { ... } // from try @ 01015ef8 with catch @ 01015f54 */
  fVar2 = (float)convertVec3TobtVector3(in_x1);
                    /* catch() { ... } // from try @ 01015fb4 with catch @ 01015f70 */
  *(ulong *)(lVar1 + 0x1c8) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar1 + 0x250) >> 0x20) * in_s1 +
                (float)((ulong)*(undefined8 *)(lVar1 + 0x1c8) >> 0x20),
                (float)*(undefined8 *)(lVar1 + 0x250) * fVar2 +
                (float)*(undefined8 *)(lVar1 + 0x1c8));
  *(float *)(lVar1 + 0x1d0) = in_s2 * *(float *)(lVar1 + 600) + *(float *)(lVar1 + 0x1d0);
  return;
}

