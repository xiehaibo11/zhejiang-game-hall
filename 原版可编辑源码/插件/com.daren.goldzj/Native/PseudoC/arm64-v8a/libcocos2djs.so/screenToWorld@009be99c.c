
/* cocos2d::renderer::Camera::screenToWorld(cocos2d::Vec3&, cocos2d::Vec3 const&, int, int) */

Vec3 * __thiscall
cocos2d::renderer::Camera::screenToWorld
          (Camera *this,Vec3 *param_1,Vec3 *param_2,int param_3,int param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar6;
  undefined8 uVar5;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
                    /* try { // try from 009be9ac to 00abea8f has its CatchHandler @ 009be7c0 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  calcMatrices(this,param_3,param_4);
  uVar4 = NEON_scvtf(CONCAT44(param_4,param_3),4);
  fVar6 = (float)((ulong)uVar4 >> 0x20);
  fVar2 = (float)*(undefined8 *)param_2 - (float)*(undefined8 *)(this + 0x6c) * (float)uVar4;
  fVar3 = (float)((ulong)*(undefined8 *)param_2 >> 0x20) -
          (float)((ulong)*(undefined8 *)(this + 0x6c) >> 0x20) * fVar6;
  uVar5 = NEON_fmov(0xbf800000,4);
  uVar4 = CONCAT44((fVar3 + fVar3) / ((float)((ulong)*(undefined8 *)(this + 0x74) >> 0x20) * fVar6)
                   + (float)((ulong)uVar5 >> 0x20),
                   (fVar2 + fVar2) / ((float)*(undefined8 *)(this + 0x74) * (float)uVar4) +
                   (float)uVar5);
  if (this[0x18] == (Camera)0x0) {
    *(undefined8 *)param_1 = uVar4;
    *(undefined4 *)(param_1 + 8) = 0x3f800000;
    Vec3::transformMat4(param_1,param_1,(Mat4 *)(this + 0x18c));
    NodeProxy::getWorldPosition(*(NodeProxy **)(this + 0x10),(Vec3 *)(this + 0xc0));
    *(undefined8 *)(this + 0x1cc) = *(undefined8 *)(this + 0xc0);
    *(undefined4 *)(this + 0x1d4) = *(undefined4 *)(this + 200);
                    /* try { // try from 009bea90 to 00abeae3 has its CatchHandler @ 009bea90
                       catch() { ... } // from try @ 009bea90 with catch @ 009bea90
                       catch() { ... } // from try @ 009bec38 with catch @ 009bea90 */
    fVar2 = (float)MathUtil::lerp(*(float *)(this + 0x60) / *(float *)(this + 100),1.0,
                                  *(float *)(param_2 + 8));
    Vec3::lerp((Vec3 *)(this + 0x1cc),fVar2);
    *(undefined4 *)(param_1 + 8) = local_50;
    *(undefined8 *)param_1 = local_58;
    Vec3::~Vec3((Vec3 *)&local_58);
  }
  else {
    fVar2 = *(float *)(param_2 + 8);
                    /* catch() { ... } // from try @ 009be840 with catch @ 009bea20 */
                    /* catch() { ... } // from try @ 009be834 with catch @ 009bea24 */
    *(undefined8 *)param_1 = uVar4;
                    /* catch() { ... } // from try @ 009be814 with catch @ 009bea28 */
                    /* catch() { ... } // from try @ 009be84c with catch @ 009bea38 */
    *(float *)(param_1 + 8) = fVar2 + fVar2 + -1.0;
    Vec3::transformMat4(param_1,param_1,(Mat4 *)(this + 0x18c));
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 009beae4 to 00abeafb has its CatchHandler @ 009becb4 */
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

