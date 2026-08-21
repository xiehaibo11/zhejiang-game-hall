
/* btPolyhedralContactClipping::clipHullAgainstHull(btVector3 const&, btConvexPolyhedron const&,
   btConvexPolyhedron const&, btTransform const&, btTransform const&, float, float,
   btDiscreteCollisionDetectorInterface::Result&) */

void btPolyhedralContactClipping::clipHullAgainstHull
               (btVector3 *param_1,btConvexPolyhedron *param_2,btConvexPolyhedron *param_3,
               btTransform *param_4,btTransform *param_5,float param_6,float param_7,Result *param_8
               )

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  float *pfVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  btAlignedObjectArray abStack_d0 [4];
  uint local_cc;
  uint uStack_c8;
  void *local_c0;
  char local_b8;
  float local_b0;
  float fStack_ac;
  float local_a8;
  undefined4 local_a4;
  
  fVar17 = *(float *)param_1;
  fVar19 = *(float *)(param_1 + 4);
  fVar21 = *(float *)(param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  fVar14 = fVar17 * fVar17 + fVar19 * fVar19 + fVar21 * fVar21;
  local_a8 = SQRT(fVar14);
  if (NAN(local_a8)) {
    local_a8 = sqrtf(fVar14);
  }
  local_a8 = 1.0 / local_a8;
  local_b0 = fVar17 * local_a8;
  fStack_ac = fVar19 * local_a8;
  local_a8 = fVar21 * local_a8;
  lVar7 = *(long *)(param_3 + 0x38);
  if (*(int *)(param_3 + 0x2c) < 1) {
    iVar9 = -1;
  }
  else {
    lVar11 = 0;
    iVar9 = -1;
    pfVar12 = (float *)(lVar7 + 0x28);
    fVar14 = -3.4028235e+38;
    do {
      fVar17 = pfVar12[-2];
      fVar19 = pfVar12[-1];
      fVar21 = *pfVar12;
      fVar17 = (fVar17 * *(float *)param_5 + fVar19 * *(float *)(param_5 + 4) +
               fVar21 * *(float *)(param_5 + 8)) * local_b0 +
               (fVar17 * *(float *)(param_5 + 0x10) + fVar19 * *(float *)(param_5 + 0x14) +
               fVar21 * *(float *)(param_5 + 0x18)) * fStack_ac +
               (fVar17 * *(float *)(param_5 + 0x20) + fVar19 * *(float *)(param_5 + 0x24) +
               fVar21 * *(float *)(param_5 + 0x28)) * local_a8;
      iVar2 = (int)lVar11;
      if (fVar17 <= fVar14) {
        fVar17 = fVar14;
        iVar2 = iVar9;
      }
      iVar9 = iVar2;
      lVar11 = lVar11 + 1;
      pfVar12 = pfVar12 + 0xc;
      fVar14 = fVar17;
    } while (lVar11 < *(int *)(param_3 + 0x2c));
  }
  local_c0 = (void *)0x0;
  local_cc = 0;
  uStack_c8 = 0;
  iVar2 = *(int *)(lVar7 + (long)iVar9 * 0x30 + 4);
  local_a4 = uVar1;
  if (0 < iVar2) {
    lVar11 = 0;
    do {
      local_b8 = '\x01';
      fVar14 = *(float *)param_5;
      fVar17 = *(float *)(param_5 + 4);
      fVar28 = *(float *)(param_5 + 8);
      fVar19 = *(float *)(param_5 + 0x10);
      fVar21 = *(float *)(param_5 + 0x14);
      fVar15 = *(float *)(param_5 + 0x18);
      fVar26 = *(float *)(param_5 + 0x20);
      fVar16 = *(float *)(param_5 + 0x24);
      pfVar12 = (float *)(*(long *)(param_3 + 0x18) +
                         (long)*(int *)(*(long *)(lVar7 + (long)iVar9 * 0x30 + 0x10) + lVar11 * 4) *
                         0x10);
      fVar25 = *(float *)(param_5 + 0x28);
      fVar20 = *(float *)(param_5 + 0x30);
      fVar22 = *(float *)(param_5 + 0x34);
      fVar18 = *pfVar12;
      fVar27 = pfVar12[1];
      fVar24 = pfVar12[2];
      fVar23 = *(float *)(param_5 + 0x38);
      uVar6 = local_cc;
      pvVar5 = local_c0;
      uVar4 = uStack_c8;
      if (local_cc == uStack_c8) {
        uVar3 = uStack_c8 << 1;
        if (uStack_c8 == 0) {
          uVar3 = 1;
        }
        uVar6 = uStack_c8;
        if ((int)uStack_c8 < (int)uVar3) {
          uVar4 = uVar3;
          if (uVar3 == 0) {
            pvVar5 = (void *)0x0;
            uVar6 = uStack_c8;
            if ((int)uStack_c8 < 1) goto LAB_0124f680;
LAB_0124f650:
            lVar8 = 0;
            lVar10 = (long)(int)uVar6;
            do {
              uVar13 = *(undefined8 *)((long)local_c0 + lVar8);
              lVar10 = lVar10 + -1;
              ((undefined8 *)((long)pvVar5 + lVar8))[1] =
                   ((undefined8 *)((long)local_c0 + lVar8))[1];
              *(undefined8 *)((long)pvVar5 + lVar8) = uVar13;
              lVar8 = lVar8 + 0x10;
            } while (lVar10 != 0);
          }
          else {
            pvVar5 = (void *)btAlignedAllocInternal
                                       (-(ulong)(uVar3 >> 0x1f) & 0xfffffff000000000 |
                                        (ulong)uVar3 << 4,0x10);
            uVar6 = local_cc;
            if (0 < (int)local_cc) goto LAB_0124f650;
LAB_0124f680:
            if (local_c0 == (void *)0x0) goto LAB_0124f6bc;
          }
          if (local_b8 != '\0') {
            btAlignedFreeInternal(local_c0);
            uVar6 = local_cc;
          }
        }
      }
LAB_0124f6bc:
      uStack_c8 = uVar4;
      local_c0 = pvVar5;
      pfVar12 = (float *)((long)local_c0 + (long)(int)uVar6 * 0x10);
      *pfVar12 = fVar18 * fVar14 + fVar27 * fVar17 + fVar24 * fVar28 + fVar20;
      pfVar12[1] = fVar18 * fVar19 + fVar27 * fVar21 + fVar24 * fVar15 + fVar22;
      pfVar12[2] = fVar18 * fVar26 + fVar27 * fVar16 + fVar24 * fVar25 + fVar23;
      pfVar12[3] = 0.0;
      lVar11 = lVar11 + 1;
      local_cc = local_cc + 1;
    } while (lVar11 < iVar2);
  }
  local_b8 = '\x01';
  if (-1 < iVar9) {
    clipFaceAgainstHull((btVector3 *)&local_b0,param_2,param_4,abStack_d0,param_6,param_7,param_8);
  }
  if ((local_c0 != (void *)0x0) && (local_b8 != '\0')) {
    btAlignedFreeInternal(local_c0);
  }
  return;
}

