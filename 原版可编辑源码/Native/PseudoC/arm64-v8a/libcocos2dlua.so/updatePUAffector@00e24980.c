
/* cocos2d::PUColorAffector::updatePUAffector(cocos2d::PUParticle3D*, float) */

void cocos2d::PUColorAffector::updatePUAffector(PUParticle3D *param_1,float param_2)

{
  PUParticle3D *pPVar1;
  long lVar2;
  bool bVar3;
  long in_x1;
  PUParticle3D *pPVar4;
  PUParticle3D *pPVar5;
  long lVar6;
  PUParticle3D *pPVar7;
  PUParticle3D *pPVar8;
  undefined4 in_register_00005004;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  Vec4 aVStack_b0 [16];
  Vec4 aVStack_a0 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_68;
  
  uVar9 = CONCAT44(in_register_00005004,param_2);
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (*(long *)(param_1 + 0xc0) == 0) goto LAB_00e24bf4;
                    /* try { // try from 00e249c4 to 00f249cf has its CatchHandler @ 00e24e90 */
  Vec4::Vec4((Vec4 *)&local_80,(Vec4 *)Vec4::ONE);
  pPVar7 = *(PUParticle3D **)(param_1 + 0xb0);
  pPVar1 = param_1 + 0xb8;
  fVar10 = (*(float *)(in_x1 + 0x130) - *(float *)(in_x1 + 300)) / *(float *)(in_x1 + 0x130);
  pPVar4 = pPVar7;
  pPVar8 = pPVar7;
joined_r0x00e249e8:
                    /* try { // try from 00e249e8 to 00f249f7 has its CatchHandler @ 00e24e3c */
  if (pPVar8 == pPVar1) goto LAB_00e24a9c;
  if (*(float *)(pPVar8 + 0x1c) <= fVar10) {
    pPVar5 = *(PUParticle3D **)(pPVar8 + 8);
    pPVar4 = pPVar1;
    if (*(PUParticle3D **)(pPVar8 + 8) == (PUParticle3D *)0x0) {
      pPVar5 = pPVar8 + 0x10;
      bVar3 = *(PUParticle3D **)*(PUParticle3D **)pPVar5 != pPVar8;
      pPVar8 = *(PUParticle3D **)pPVar5;
      if (bVar3) {
        do {
          lVar6 = *(long *)pPVar5;
          pPVar5 = (PUParticle3D *)(lVar6 + 0x10);
          pPVar8 = *(PUParticle3D **)pPVar5;
        } while (*(long *)pPVar8 != lVar6);
      }
    }
    else {
      do {
        pPVar8 = pPVar5;
        pPVar5 = *(PUParticle3D **)pPVar8;
      } while (*(PUParticle3D **)pPVar8 != (PUParticle3D *)0x0);
    }
    goto joined_r0x00e249e8;
  }
  if (pPVar8 == pPVar7) goto LAB_00e24ac8;
  pPVar4 = *(PUParticle3D **)pPVar8;
  if (*(PUParticle3D **)pPVar8 != (PUParticle3D *)0x0) goto LAB_00e24a64;
  do {
                    /* try { // try from 00e24a74 to 00f24a87 has its CatchHandler @ 00e24e40 */
    pPVar7 = *(PUParticle3D **)(pPVar8 + 0x10);
    bVar3 = *(PUParticle3D **)pPVar7 == pPVar8;
    pPVar8 = pPVar7;
  } while (bVar3);
                    /* try { // try from 00e24a88 to 00f24a93 has its CatchHandler @ 00e24e38 */
  pPVar4 = *(PUParticle3D **)(pPVar7 + 8);
  goto joined_r0x00e24a90;
LAB_00e24a64:
  do {
    pPVar7 = pPVar4;
    pPVar4 = *(PUParticle3D **)(pPVar7 + 8);
  } while (*(PUParticle3D **)(pPVar7 + 8) != (PUParticle3D *)0x0);
  goto LAB_00e24ac8;
LAB_00e24a9c:
  pPVar8 = *(PUParticle3D **)pPVar4;
  if (*(PUParticle3D **)pPVar4 == (PUParticle3D *)0x0) {
    do {
      pPVar7 = *(PUParticle3D **)(pPVar4 + 0x10);
      bVar3 = *(PUParticle3D **)pPVar7 == pPVar4;
      pPVar4 = pPVar7;
    } while (bVar3);
  }
  else {
    do {
      pPVar7 = pPVar8;
      pPVar8 = *(PUParticle3D **)(pPVar7 + 8);
    } while (*(PUParticle3D **)(pPVar7 + 8) != (PUParticle3D *)0x0);
  }
LAB_00e24ac8:
  pPVar4 = *(PUParticle3D **)(pPVar7 + 8);
joined_r0x00e24a90:
  if (pPVar4 == (PUParticle3D *)0x0) {
    pPVar4 = pPVar7 + 0x10;
    pPVar8 = *(PUParticle3D **)pPVar4;
    if (*(PUParticle3D **)pPVar8 != pPVar7) {
      do {
        lVar6 = *(long *)pPVar4;
        pPVar4 = (PUParticle3D *)(lVar6 + 0x10);
        pPVar8 = *(PUParticle3D **)pPVar4;
      } while (*(long *)pPVar8 != lVar6);
    }
  }
  else {
    do {
      pPVar8 = pPVar4;
                    /* try { // try from 00e24ad8 to 00f24ae3 has its CatchHandler @ 00e24e30 */
      pPVar4 = *(PUParticle3D **)pPVar8;
    } while (*(PUParticle3D **)pPVar8 != (PUParticle3D *)0x0);
  }
  if (pPVar8 == pPVar1) {
    uStack_78 = *(undefined8 *)(pPVar7 + 0x28);
    local_80 = *(undefined8 *)(pPVar7 + 0x20);
  }
  else {
    Vec4::Vec4(aVStack_b0,(Vec4 *)(pPVar8 + 0x20));
    Vec4::subtract(aVStack_b0,(Vec4 *)(pPVar7 + 0x20));
                    /* try { // try from 00e24b30 to 00f24b3b has its CatchHandler @ 00e24e40 */
    fVar11 = *(float *)(pPVar7 + 0x1c);
    fVar12 = *(float *)(pPVar8 + 0x1c);
    Vec4::Vec4(aVStack_a0,aVStack_b0);
    Vec4::scale(aVStack_a0,(fVar10 - fVar11) / (fVar12 - fVar11));
    Vec4::Vec4((Vec4 *)&local_90,(Vec4 *)(pPVar7 + 0x20));
    Vec4::add((Vec4 *)&local_90,aVStack_a0);
                    /* try { // try from 00e24b74 to 00f24b7b has its CatchHandler @ 00e24e04 */
    uStack_78 = uStack_88;
    local_80 = local_90;
                    /* try { // try from 00e24b7c to 00f24bfb has its CatchHandler @ 00e247ec */
    Vec4::~Vec4((Vec4 *)&local_90);
    Vec4::~Vec4(aVStack_a0);
    Vec4::~Vec4(aVStack_b0);
  }
  if (*(int *)(param_1 + 200) == 1) {
    *(undefined8 *)(in_x1 + 0x2c) = uStack_78;
    *(undefined8 *)(in_x1 + 0x24) = local_80;
  }
  else {
    Vec4::Vec4((Vec4 *)&local_90,(float)local_80 * *(float *)(in_x1 + 0xdc),
               local_80._4_4_ * *(float *)(in_x1 + 0xe0),(float)uStack_78 * *(float *)(in_x1 + 0xe4)
               ,uStack_78._4_4_ * *(float *)(in_x1 + 0xe8));
    *(undefined8 *)(in_x1 + 0x2c) = uStack_88;
    *(undefined8 *)(in_x1 + 0x24) = local_90;
    Vec4::~Vec4((Vec4 *)&local_90);
  }
  uVar9 = Vec4::~Vec4((Vec4 *)&local_80);
LAB_00e24bf4:
                    /* try { // try from 00e24bfc to 00f24c03 has its CatchHandler @ 00e24dec */
  if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00e24c04 to 00f24c8f has its CatchHandler @ 00e247ec */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar9);
}

