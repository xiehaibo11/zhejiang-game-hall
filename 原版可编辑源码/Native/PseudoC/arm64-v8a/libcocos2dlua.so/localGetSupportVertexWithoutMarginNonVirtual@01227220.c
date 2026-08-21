
/* btConvexShape::localGetSupportVertexWithoutMarginNonVirtual(btVector3 const&) const */

undefined1  [16] btConvexShape::localGetSupportVertexWithoutMarginNonVirtual(btVector3 *param_1)

{
  int iVar1;
  float *in_x1;
  long lVar2;
  undefined8 *puVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_90 [4];
  float local_80 [4];
  undefined8 local_70;
  undefined8 uStack_68;
  
  auVar10 = ZEXT816(0);
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    fVar13 = *(float *)(param_1 + 0x28);
    if (*in_x1 < 0.0) {
      fVar13 = -*(float *)(param_1 + 0x28);
    }
    auVar10 = ZEXT416((uint)fVar13);
    break;
  case 1:
    fVar9 = *in_x1;
    fVar11 = in_x1[1];
    fVar14 = in_x1[2];
    fVar12 = fVar9 * *(float *)(param_1 + 0x48) + fVar11 * *(float *)(param_1 + 0x4c) +
             fVar14 * *(float *)(param_1 + 0x50);
    fVar15 = fVar9 * *(float *)(param_1 + 0x58) + fVar11 * *(float *)(param_1 + 0x5c) +
             fVar14 * *(float *)(param_1 + 0x60);
    fVar13 = fVar15;
    if (fVar12 >= fVar15) {
      fVar13 = fVar12;
    }
    uVar5 = 2;
    if (fVar9 * *(float *)(param_1 + 0x68) + fVar11 * *(float *)(param_1 + 0x6c) +
        fVar14 * *(float *)(param_1 + 0x70) <= fVar13) {
      uVar5 = (ulong)(fVar12 < fVar15);
    }
    auVar10 = ZEXT416(*(uint *)(param_1 + 0x48 + uVar5 * 0x10));
    break;
  default:
    auVar10 = (**(code **)(*(long *)param_1 + 0x88))(param_1);
    break;
  case 4:
    lVar7 = *(long *)(param_1 + 0x80);
    fVar13 = *(float *)(param_1 + 0x18);
    if (*(int *)(param_1 + 0x74) < 1) goto LAB_012274e8;
    lVar2 = 0;
    iVar4 = -1;
    puVar3 = (undefined8 *)(lVar7 + 4);
    fVar9 = -3.4028235e+38;
    do {
      fVar11 = *in_x1 * fVar13 * *(float *)((long)puVar3 + -4) +
               (float)*(undefined8 *)(in_x1 + 1) * (float)*(undefined8 *)(param_1 + 0x1c) *
               (float)*puVar3 +
               (float)((ulong)*(undefined8 *)(in_x1 + 1) >> 0x20) *
               (float)((ulong)*(undefined8 *)(param_1 + 0x1c) >> 0x20) *
               (float)((ulong)*puVar3 >> 0x20);
      iVar1 = (int)lVar2;
      if (fVar11 <= fVar9) {
        fVar11 = fVar9;
        iVar1 = iVar4;
      }
      iVar4 = iVar1;
      lVar2 = lVar2 + 1;
      puVar3 = puVar3 + 2;
      fVar9 = fVar11;
    } while (*(int *)(param_1 + 0x74) != lVar2);
LAB_0122742c:
    lVar2 = (long)iVar4;
    goto LAB_012274ec;
  case 5:
    lVar7 = *(long *)(param_1 + 0x70);
    fVar13 = *(float *)(param_1 + 0x18);
    if (0 < *(int *)(param_1 + 0x78)) {
      lVar2 = 0;
      iVar4 = -1;
      puVar3 = (undefined8 *)(lVar7 + 4);
      fVar9 = -3.4028235e+38;
      do {
        fVar11 = *in_x1 * fVar13 * *(float *)((long)puVar3 + -4) +
                 (float)*(undefined8 *)(in_x1 + 1) * (float)*(undefined8 *)(param_1 + 0x1c) *
                 (float)*puVar3 +
                 (float)((ulong)*(undefined8 *)(in_x1 + 1) >> 0x20) *
                 (float)((ulong)*(undefined8 *)(param_1 + 0x1c) >> 0x20) *
                 (float)((ulong)*puVar3 >> 0x20);
        iVar1 = (int)lVar2;
        if (fVar11 <= fVar9) {
          fVar11 = fVar9;
          iVar1 = iVar4;
        }
        iVar4 = iVar1;
        lVar2 = lVar2 + 1;
        puVar3 = puVar3 + 2;
        fVar9 = fVar11;
      } while (*(int *)(param_1 + 0x78) != lVar2);
      goto LAB_0122742c;
    }
LAB_012274e8:
    lVar2 = -1;
LAB_012274ec:
    auVar10 = ZEXT416((uint)(fVar13 * *(float *)(lVar7 + lVar2 * 0x10)));
    break;
  case 8:
    break;
  case 10:
    lVar7 = (long)*(int *)(param_1 + 0x40);
    fVar13 = *in_x1;
    fVar12 = in_x1[1];
    fVar11 = in_x1[2];
    fVar14 = *(float *)(param_1 + lVar7 * 4 + 0x28);
    fVar15 = *(float *)(param_1 + (long)((*(int *)(param_1 + 0x40) + 2) % 3) * 4 + 0x28);
    fVar9 = fVar13 * fVar13 + fVar12 * fVar12 + fVar11 * fVar11;
    if (0.0001 <= fVar9) {
      fVar8 = SQRT(fVar9);
      if (NAN(fVar8)) {
        fVar8 = sqrtf(fVar9);
      }
      fVar8 = 1.0 / fVar8;
      fVar13 = fVar13 * fVar8;
      fVar12 = fVar12 * fVar8;
      fVar11 = fVar11 * fVar8;
    }
    else {
      fVar13 = 1.0;
      fVar12 = 0.0;
      fVar11 = 0.0;
    }
    local_70 = 0;
    uStack_68._0_4_ = 0.0;
    *(float *)((long)&local_70 + lVar7 * 4) = fVar14;
    fVar16 = *(float *)(param_1 + 0x38);
    fVar17 = (fVar15 * fVar13 + (float)local_70) - fVar13 * fVar16;
    fVar18 = fVar11 * ((fVar15 * fVar11 + (float)uStack_68) - fVar11 * fVar16) +
             fVar13 * fVar17 + fVar12 * ((fVar15 * fVar12 + local_70._4_4_) - fVar12 * fVar16);
    fVar9 = 0.0;
    fVar8 = -1e+18;
    if (-1e+18 < fVar18) {
      fVar9 = fVar17;
      fVar8 = fVar18;
    }
    local_70 = 0;
    uStack_68._0_4_ = 0.0;
    *(float *)((long)&local_70 + lVar7 * 4) = -fVar14;
    fVar14 = (fVar15 * fVar13 + (float)local_70) - fVar13 * fVar16;
    if (fVar11 * ((fVar15 * fVar11 + (float)uStack_68) - fVar11 * fVar16) +
        fVar13 * fVar14 + fVar12 * ((fVar15 * fVar12 + local_70._4_4_) - fVar12 * fVar16) <= fVar8)
    {
      fVar14 = fVar9;
    }
    auVar10 = ZEXT416((uint)fVar14);
    break;
  case 0xd:
    uStack_68 = *(undefined8 *)(param_1 + 0x30);
    local_70 = *(undefined8 *)(param_1 + 0x28);
    fVar13 = in_x1[1];
    local_80[0] = *in_x1;
    local_80[1] = fVar13;
    local_80[2] = in_x1[2];
    local_80[3] = 0.0;
    iVar4 = *(int *)(param_1 + 0x40);
    if (iVar4 == 2) {
      uVar5 = 0;
      uVar6 = 2;
      lVar7 = 1;
    }
    else {
      uVar6 = (ulong)(iVar4 == 1);
      uVar5 = (ulong)(iVar4 != 1);
      lVar7 = 2;
      fVar13 = in_x1[2];
    }
    fVar15 = *(float *)((ulong)local_80 | uVar5 << 2);
    fVar14 = *(float *)((long)&local_70 + (long)iVar4 * 4);
    fVar12 = *(float *)((ulong)&local_70 | uVar5 << 2);
    fVar11 = fVar15 * fVar15 + fVar13 * fVar13;
    fVar9 = SQRT(fVar11);
    if (NAN(fVar9)) {
      fVar9 = sqrtf(fVar11);
    }
    if (fVar9 == 0.0) {
      fVar11 = -fVar14;
      if (0.0 <= local_80[uVar6]) {
        fVar11 = fVar14;
      }
      fVar9 = 0.0;
    }
    else {
      fVar9 = fVar12 / fVar9;
      fVar12 = fVar9 * fVar15;
      fVar11 = -fVar14;
      if (0.0 <= local_80[uVar6]) {
        fVar11 = fVar14;
      }
      fVar9 = fVar9 * fVar13;
    }
    *(float *)((ulong)local_90 | uVar5 << 2) = fVar12;
    local_90[uVar6] = fVar11;
    local_90[lVar7] = fVar9;
    auVar10 = ZEXT416((uint)local_90[0]);
  }
  return auVar10;
}

