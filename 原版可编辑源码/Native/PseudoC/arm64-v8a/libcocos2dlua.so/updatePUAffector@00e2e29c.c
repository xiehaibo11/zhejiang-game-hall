
/* cocos2d::PUSphereCollider::updatePUAffector(cocos2d::PUParticle3D*, float) */

void cocos2d::PUSphereCollider::updatePUAffector(PUParticle3D *param_1,float param_2)

{
  long lVar1;
  PUParticle3D *in_x1;
  Vec3 *pVVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  AABB aAStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pVVar2 = (Vec3 *)(in_x1 + 8);
  fVar6 = *(float *)(param_1 + 0xbc);
  fVar8 = (float)*(undefined8 *)(in_x1 + 0xac) * fVar6 + (float)*(undefined8 *)pVVar2;
  fVar9 = (float)((ulong)*(undefined8 *)(in_x1 + 0xac) >> 0x20) * fVar6 +
          (float)((ulong)*(undefined8 *)pVVar2 >> 0x20);
  fVar7 = fVar6 * *(float *)(in_x1 + 0xb4) + *(float *)(in_x1 + 0x10);
  *(ulong *)(param_1 + 0xd4) = CONCAT44(fVar9,fVar8);
  *(float *)(param_1 + 0xdc) = fVar7;
  if (*(int *)(param_1 + 0xb4) == 1) {
    AABB::AABB(aAStack_50);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e2e1fc with catch @ 00e2e3a8
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e2e318 with catch @ 00e2e3ac
                        */
    PUBaseCollider::populateAlignedBox
              ((PUBaseCollider *)param_1,aAStack_50,pVVar2,*(float *)(in_x1 + 0x44),
               *(float *)(in_x1 + 0x48),*(float *)(in_x1 + 0x4c));
  }
  else if (*(int *)(param_1 + 0xb4) == 0) {
                    /* try { // try from 00e2e318 to 00f2e31b has its CatchHandler @ 00e2e3ac */
                    /* try { // try from 00e2e31c to 00f2e43f has its CatchHandler @ 00e2e1bc */
    fVar11 = (float)((ulong)*(undefined8 *)pVVar2 >> 0x20);
    fVar10 = (float)*(undefined8 *)pVVar2;
    fVar3 = fVar10 - *(float *)(param_1 + 0x4c);
    fVar4 = fVar11 - *(float *)(param_1 + 0x50);
    fVar5 = *(float *)(in_x1 + 0x10) - *(float *)(param_1 + 0x54);
    fVar12 = *(float *)(param_1 + 0xc0) *
             (*(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x44) + *(float *)(param_1 + 0x48))
             * 0.3333;
    if (param_1[0xe0] ==
        (PUParticle3D)(fVar12 < SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5))) {
      *(ulong *)(in_x1 + 8) =
           CONCAT44(fVar11 - fVar6 * (float)((ulong)*(undefined8 *)(in_x1 + 0xac) >> 0x20),
                    fVar10 - fVar6 * (float)*(undefined8 *)(in_x1 + 0xac));
      *(float *)(in_x1 + 0x10) = *(float *)(in_x1 + 0x10) - fVar6 * *(float *)(in_x1 + 0xb4);
    }
    else {
      fVar8 = fVar8 - *(float *)(param_1 + 0x4c);
      fVar9 = fVar9 - *(float *)(param_1 + 0x50);
      fVar7 = fVar7 - *(float *)(param_1 + 0x54);
      if (param_1[0xe0] !=
          (PUParticle3D)(fVar12 < SQRT(fVar8 * fVar8 + fVar9 * fVar9 + fVar7 * fVar7)))
      goto LAB_00e2e41c;
    }
    calculateDirectionAfterCollision(param_1);
    PUBaseCollider::calculateRotationSpeedAfterCollision((PUBaseCollider *)param_1,in_x1);
    *(uint *)(in_x1 + 0x124) = *(uint *)(in_x1 + 0x124) | 4;
  }
LAB_00e2e41c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

