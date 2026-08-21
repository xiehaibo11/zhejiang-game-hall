
/* cocos2d::PUPlaneCollider::updatePUAffector(cocos2d::PUParticle3D*, float) */

void __thiscall
cocos2d::PUPlaneCollider::updatePUAffector
          (PUPlaneCollider *this,PUParticle3D *param_1,float param_2)

{
  long lVar1;
  Vec3 *pVVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  AABB aAStack_60 [24];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pVVar2 = (Vec3 *)(param_1 + 8);
  fVar3 = *(float *)(this + 0xbc);
  fVar4 = *(float *)(param_1 + 0xb4);
  fVar5 = *(float *)(param_1 + 0x10);
                    /* try { // try from 00e2ad28 to 00f2adbb has its CatchHandler @ 00e2ad28
                       catch() { ... } // from try @ 00e2ad28 with catch @ 00e2ad28
                       catch() { ... } // from try @ 00e2adc8 with catch @ 00e2ad28 */
  *(ulong *)(this + 0xcc) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0xac) >> 0x20) * fVar3 +
                (float)((ulong)*(undefined8 *)pVVar2 >> 0x20),
                (float)*(undefined8 *)(param_1 + 0xac) * fVar3 + (float)*(undefined8 *)pVVar2);
  *(float *)(this + 0xd4) = fVar3 * fVar4 + fVar5;
  if (*(int *)(this + 0xb4) == 1) {
    AABB::AABB(aAStack_60);
    PUBaseCollider::populateAlignedBox
              ((PUBaseCollider *)this,aAStack_60,pVVar2,*(float *)(param_1 + 0x44),
               *(float *)(param_1 + 0x48),*(float *)(param_1 + 0x4c));
  }
  else if (*(int *)(this + 0xb4) == 0) {
    fVar3 = (float)PUPlane::getDistance((PUPlane *)(this + 0xd8),pVVar2);
    if (fVar3 <= 0.0) {
      fVar3 = *(float *)(this + 0xbc);
                    /* try { // try from 00e2adbc to 00f2adc7 has its CatchHandler @ 00e2aea8 */
      *(ulong *)(param_1 + 8) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20) -
                    (float)((ulong)*(undefined8 *)(param_1 + 0xac) >> 0x20) * fVar3,
                    (float)*(undefined8 *)(param_1 + 8) -
                    (float)*(undefined8 *)(param_1 + 0xac) * fVar3);
                    /* try { // try from 00e2adc8 to 00f2aebf has its CatchHandler @ 00e2ad28 */
      *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) - fVar3 * *(float *)(param_1 + 0xb4);
    }
    else {
      fVar3 = (float)PUPlane::getDistance((PUPlane *)(this + 0xd8),(Vec3 *)(this + 0xcc));
      if (0.0 < fVar3) goto LAB_00e2adf4;
    }
    calculateDirectionAfterCollision(this,param_1,param_2);
    PUBaseCollider::calculateRotationSpeedAfterCollision((PUBaseCollider *)this,param_1);
    *(uint *)(param_1 + 0x124) = *(uint *)(param_1 + 0x124) | 4;
  }
LAB_00e2adf4:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

