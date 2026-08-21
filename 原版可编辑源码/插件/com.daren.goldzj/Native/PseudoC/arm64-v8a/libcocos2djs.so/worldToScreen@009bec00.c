
/* cocos2d::renderer::Camera::worldToScreen(cocos2d::Vec3&, cocos2d::Vec3 const&, int, int) */

Vec3 * __thiscall
cocos2d::renderer::Camera::worldToScreen
          (Camera *this,Vec3 *param_1,Vec3 *param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar4;
  undefined8 uVar3;
  undefined8 uVar5;
  
  calcMatrices(this,param_3,param_4);
                    /* try { // try from 009bec38 to 00abed1b has its CatchHandler @ 009bea90 */
  uVar1 = *(undefined8 *)(this + 0x6c);
  uVar5 = *(undefined8 *)(this + 0x74);
  uVar2 = NEON_scvtf(CONCAT44(param_4,param_3),4);
  fVar4 = (float)((ulong)uVar2 >> 0x20);
  Vec3::transformMat4(param_1,param_2,(Mat4 *)(this + 0x14c));
  uVar3 = NEON_fmov(0x3f800000,4);
  *(ulong *)param_1 =
       CONCAT44((float)((ulong)uVar1 >> 0x20) * fVar4 +
                (float)((ulong)uVar5 >> 0x20) * fVar4 *
                ((float)((ulong)*(undefined8 *)param_1 >> 0x20) + (float)((ulong)uVar3 >> 0x20)) *
                0.5,(float)uVar1 * (float)uVar2 +
                    (float)uVar5 * (float)uVar2 *
                    ((float)*(undefined8 *)param_1 + (float)uVar3) * 0.5);
  *(float *)(param_1 + 8) = *(float *)(param_1 + 8) * 0.5 + 0.5;
                    /* catch() { ... } // from try @ 009beb10 with catch @ 009becac */
                    /* catch() { ... } // from try @ 009beb04 with catch @ 009becb0 */
                    /* catch() { ... } // from try @ 009beae4 with catch @ 009becb4 */
  return param_1;
}

