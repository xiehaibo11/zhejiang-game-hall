
/* cocos2d::PUBoxCollider::updatePUAffector(cocos2d::PUParticle3D*, float) */

void cocos2d::PUBoxCollider::updatePUAffector(PUParticle3D *param_1,float param_2)

{
  PUParticle3D PVar1;
  long lVar2;
  byte bVar3;
  PUParticle3D *in_x1;
  Vec3 *pVVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  AABB aAStack_60 [24];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pVVar4 = (Vec3 *)(in_x1 + 8);
  fVar5 = *(float *)(param_1 + 0xbc);
  fVar7 = *(float *)(in_x1 + 0xb4);
  fVar6 = *(float *)(in_x1 + 0x10);
  *(ulong *)(param_1 + 0xfc) =
       CONCAT44((float)((ulong)*(undefined8 *)(in_x1 + 0xac) >> 0x20) * fVar5 +
                (float)((ulong)*(undefined8 *)pVVar4 >> 0x20),
                (float)*(undefined8 *)(in_x1 + 0xac) * fVar5 + (float)*(undefined8 *)pVVar4);
  *(float *)(param_1 + 0x104) = fVar5 * fVar7 + fVar6;
                    /* catch() { ... } // from try @ 00e23ba0 with catch @ 00e23c38 */
  if (*(int *)(param_1 + 0xb4) == 1) {
    AABB::AABB(aAStack_60);
    PUBaseCollider::populateAlignedBox
              ((PUBaseCollider *)param_1,aAStack_60,pVVar4,*(float *)(in_x1 + 0x44),
               *(float *)(in_x1 + 0x48),*(float *)(in_x1 + 0x4c));
    PVar1 = param_1[0x108];
    bVar3 = AABB::intersects(aAStack_60,(AABB *)(param_1 + 0xe4));
    if (PVar1 == (PUParticle3D)(bVar3 & 1)) {
      PUBaseCollider::populateAlignedBox
                ((PUBaseCollider *)param_1,aAStack_60,(Vec3 *)(param_1 + 0xfc),
                 *(float *)(in_x1 + 0x44),*(float *)(in_x1 + 0x48),*(float *)(in_x1 + 0x4c));
      PVar1 = param_1[0x108];
      bVar3 = AABB::intersects(aAStack_60,(AABB *)(param_1 + 0xe4));
      if (PVar1 == (PUParticle3D)(bVar3 & 1)) goto LAB_00e23d48;
    }
    else {
LAB_00e23cf8:
      fVar5 = *(float *)(param_1 + 0xbc);
      *(ulong *)(in_x1 + 8) =
           CONCAT44((float)((ulong)*(undefined8 *)(in_x1 + 8) >> 0x20) -
                    (float)((ulong)*(undefined8 *)(in_x1 + 0xac) >> 0x20) * fVar5,
                    (float)*(undefined8 *)(in_x1 + 8) - (float)*(undefined8 *)(in_x1 + 0xac) * fVar5
                   );
      *(float *)(in_x1 + 0x10) = *(float *)(in_x1 + 0x10) - fVar5 * *(float *)(in_x1 + 0xb4);
    }
  }
  else {
                    /* catch() { ... } // from try @ 00e23ab4 with catch @ 00e23c3c */
    if (*(int *)(param_1 + 0xb4) != 0) goto LAB_00e23d48;
    PVar1 = param_1[0x108];
    bVar3 = AABB::containPoint((AABB *)(param_1 + 0xe4),pVVar4);
    if (PVar1 != (PUParticle3D)(bVar3 & 1)) goto LAB_00e23cf8;
    PVar1 = param_1[0x108];
    bVar3 = AABB::containPoint((AABB *)(param_1 + 0xe4),(Vec3 *)(param_1 + 0xfc));
    if (PVar1 == (PUParticle3D)(bVar3 & 1)) goto LAB_00e23d48;
  }
  calculateDirectionAfterCollision((PUBoxCollider *)param_1,in_x1);
  PUBaseCollider::calculateRotationSpeedAfterCollision((PUBaseCollider *)param_1,in_x1);
  *(uint *)(in_x1 + 0x124) = *(uint *)(in_x1 + 0x124) | 4;
LAB_00e23d48:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

