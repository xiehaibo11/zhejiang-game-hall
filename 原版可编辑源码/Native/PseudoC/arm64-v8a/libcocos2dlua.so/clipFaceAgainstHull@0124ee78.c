
/* btPolyhedralContactClipping::clipFaceAgainstHull(btVector3 const&, btConvexPolyhedron const&,
   btTransform const&, btAlignedObjectArray<btVector3>&, float, float,
   btDiscreteCollisionDetectorInterface::Result&) */

void btPolyhedralContactClipping::clipFaceAgainstHull
               (btVector3 *param_1,btConvexPolyhedron *param_2,btTransform *param_3,
               btAlignedObjectArray *param_4,float param_5,float param_6,Result *param_7)

{
  float *pfVar1;
  uint uVar2;
  undefined8 *puVar3;
  btAlignedObjectArray *pbVar4;
  int iVar5;
  void *pvVar6;
  long lVar7;
  long lVar8;
  btAlignedObjectArray *pbVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  float *pfVar15;
  ulong uVar16;
  float fVar17;
  undefined8 uVar18;
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
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float *local_e0;
  float *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  ulong uStack_b8;
  btAlignedObjectArray abStack_b0 [4];
  undefined8 local_ac;
  void *local_a0;
  char local_98;
  
  local_98 = '\x01';
  local_a0 = (void *)0x0;
  local_ac = 0;
  iVar13 = *(int *)(param_4 + 4);
  if (0 < iVar13) {
    pvVar6 = (void *)btAlignedAllocInternal((long)iVar13 << 4,0x10);
    lVar7 = (long)(int)local_ac;
    if (0 < (int)local_ac) {
      lVar11 = 0;
      do {
        lVar7 = lVar7 + -1;
        uVar18 = *(undefined8 *)((long)local_a0 + lVar11);
        ((undefined8 *)((long)pvVar6 + lVar11))[1] = ((undefined8 *)((long)local_a0 + lVar11))[1];
        *(undefined8 *)((long)pvVar6 + lVar11) = uVar18;
        lVar11 = lVar11 + 0x10;
      } while (lVar7 != 0);
    }
    if ((local_a0 != (void *)0x0) && (local_98 != '\0')) {
      btAlignedFreeInternal(local_a0);
    }
    local_98 = 1;
    local_a0 = pvVar6;
    local_ac = CONCAT44(iVar13,(int)local_ac);
  }
  local_98 = '\x01';
  if (0 < *(int *)(param_2 + 0x2c)) {
    lVar7 = 0;
    iVar13 = -1;
    pfVar15 = (float *)(*(long *)(param_2 + 0x38) + 0x28);
    fVar17 = 3.4028235e+38;
    do {
      fVar31 = pfVar15[-2];
      fVar34 = pfVar15[-1];
      fVar37 = *pfVar15;
      fVar31 = (fVar31 * *(float *)param_3 + fVar34 * *(float *)(param_3 + 4) +
               fVar37 * *(float *)(param_3 + 8)) * *(float *)param_1 +
               (fVar31 * *(float *)(param_3 + 0x10) + fVar34 * *(float *)(param_3 + 0x14) +
               fVar37 * *(float *)(param_3 + 0x18)) * *(float *)(param_1 + 4) +
               (fVar31 * *(float *)(param_3 + 0x20) + fVar34 * *(float *)(param_3 + 0x24) +
               fVar37 * *(float *)(param_3 + 0x28)) * *(float *)(param_1 + 8);
      iVar5 = (int)lVar7;
      if (fVar17 <= fVar31) {
        fVar31 = fVar17;
        iVar5 = iVar13;
      }
      iVar13 = iVar5;
      lVar7 = lVar7 + 1;
      pfVar15 = pfVar15 + 0xc;
      fVar17 = fVar31;
    } while (lVar7 < *(int *)(param_2 + 0x2c));
    if (-1 < iVar13) {
      lVar7 = *(long *)(param_2 + 0x38);
      uVar2 = *(uint *)(lVar7 + (long)iVar13 * 0x30 + 4);
      lVar11 = (long)iVar13;
      if ((int)uVar2 < 1) {
        lVar8 = lVar7 + lVar11 * 0x30;
        local_d8 = (float *)(lVar8 + 0x20);
        local_e0 = (float *)(lVar8 + 0x24);
        pfVar15 = (float *)(lVar8 + 0x28);
      }
      else {
        lVar8 = lVar7 + lVar11 * 0x30;
        local_d8 = (float *)(lVar8 + 0x20);
        uVar16 = 0;
        local_e0 = (float *)(lVar8 + 0x24);
        pfVar15 = (float *)(lVar8 + 0x28);
        pbVar4 = param_4;
        pbVar9 = abStack_b0;
        do {
          param_4 = pbVar9;
          pbVar9 = pbVar4;
          fVar17 = *(float *)param_3;
          fVar31 = *(float *)(param_3 + 4);
          fVar37 = *(float *)(param_3 + 0x10);
          fVar19 = *(float *)(param_3 + 0x14);
          fVar24 = *local_d8;
          fVar21 = *(float *)(param_3 + 0x20);
          fVar22 = *(float *)(param_3 + 0x24);
          fVar34 = *(float *)(param_3 + 8);
          fVar26 = *local_e0;
          fVar20 = *(float *)(param_3 + 0x18);
          fVar23 = *(float *)(param_3 + 0x28);
          fVar28 = *pfVar15;
          lVar12 = uVar16 * 4;
          uVar16 = uVar16 + 1;
          lVar10 = 0;
          if (uVar16 != uVar2) {
            lVar10 = (long)(int)uVar16;
          }
          pfVar1 = (float *)(*(long *)(param_2 + 0x18) +
                            (long)*(int *)(*(long *)(lVar8 + 0x10) + lVar12) * 0x10);
          fVar27 = fVar17 * fVar24 + fVar31 * fVar26 + fVar34 * fVar28;
          fVar30 = fVar37 * fVar24 + fVar19 * fVar26 + fVar20 * fVar28;
          fVar25 = fVar21 * fVar24 + fVar22 * fVar26 + fVar23 * fVar28;
          fVar29 = *pfVar1;
          fVar32 = pfVar1[1];
          fVar35 = pfVar1[2];
          pfVar1 = (float *)(*(long *)(param_2 + 0x18) +
                            (long)*(int *)(*(long *)(lVar8 + 0x10) + lVar10 * 4) * 0x10);
          fVar28 = fVar29 - *pfVar1;
          fVar33 = fVar32 - pfVar1[1];
          fVar36 = fVar35 - pfVar1[2];
          fVar24 = fVar28 * fVar17 + fVar33 * fVar31 + fVar36 * fVar34;
          fVar26 = fVar28 * fVar37 + fVar33 * fVar19 + fVar36 * fVar20;
          fVar28 = fVar28 * fVar21 + fVar33 * fVar22 + fVar36 * fVar23;
          fVar33 = fVar28 * fVar27 - fVar24 * fVar25;
          fVar24 = fVar24 * fVar30 - fVar26 * fVar27;
          fVar26 = -(fVar26 * fVar25 - fVar28 * fVar30);
          local_c0 = CONCAT44(-fVar33,fVar26);
          uStack_b8 = (ulong)(uint)-fVar24;
          clipFace(pbVar9,param_4,(btVector3 *)&local_c0,
                   -(((fVar29 * fVar17 + fVar32 * fVar31 + fVar35 * fVar34 +
                      *(float *)(param_3 + 0x30)) * fVar26 -
                     (fVar29 * fVar37 + fVar32 * fVar19 + fVar35 * fVar20 +
                     *(float *)(param_3 + 0x34)) * fVar33) -
                    (fVar29 * fVar21 + fVar32 * fVar22 + fVar35 * fVar23 +
                    *(float *)(param_3 + 0x38)) * fVar24));
          iVar13 = *(int *)(pbVar9 + 4);
          if (iVar13 < 0) {
            if (*(int *)(pbVar9 + 8) < 0) {
              if (*(void **)(pbVar9 + 0x10) != (void *)0x0) {
                if (pbVar9[0x18] != (btAlignedObjectArray)0x0) {
                  btAlignedFreeInternal(*(void **)(pbVar9 + 0x10));
                }
                *(undefined8 *)(pbVar9 + 0x10) = 0;
              }
              pbVar9[0x18] = (btAlignedObjectArray)0x1;
              *(undefined8 *)(pbVar9 + 0x10) = 0;
              *(undefined4 *)(pbVar9 + 8) = 0;
            }
            lVar10 = -(long)iVar13;
            lVar12 = (long)iVar13 << 4;
            do {
              lVar14 = *(long *)(pbVar9 + 0x10);
              lVar10 = lVar10 + -1;
              ((undefined8 *)(lVar14 + lVar12))[1] = uStack_c8;
              *(undefined8 *)(lVar14 + lVar12) = local_d0;
              lVar12 = lVar12 + 0x10;
            } while (lVar10 != 0);
          }
          *(undefined4 *)(pbVar9 + 4) = 0;
          pbVar4 = param_4;
        } while ((long)uVar16 < (long)(int)uVar2);
      }
      iVar13 = *(int *)(param_4 + 4);
      if (0 < iVar13) {
        fVar17 = *local_d8;
        fVar37 = *pfVar15;
        fVar31 = *local_e0;
        fVar21 = fVar17 * *(float *)param_3 + fVar31 * *(float *)(param_3 + 4) +
                 fVar37 * *(float *)(param_3 + 8);
        fVar34 = *(float *)(param_3 + 0x30);
        fVar19 = *(float *)(param_3 + 0x34);
        fVar22 = fVar17 * *(float *)(param_3 + 0x10) + fVar31 * *(float *)(param_3 + 0x14) +
                 fVar37 * *(float *)(param_3 + 0x18);
        fVar20 = *(float *)(param_3 + 0x38);
        fVar31 = fVar17 * *(float *)(param_3 + 0x20) + fVar31 * *(float *)(param_3 + 0x24) +
                 fVar37 * *(float *)(param_3 + 0x28);
        fVar17 = *(float *)(lVar7 + lVar11 * 0x30 + 0x2c);
        lVar11 = 0;
        lVar7 = 0;
        do {
          pfVar15 = (float *)(*(long *)(param_4 + 0x10) + lVar11);
          fVar23 = (fVar17 - (fVar21 * fVar34 + fVar22 * fVar19 + fVar31 * fVar20)) +
                   fVar21 * *pfVar15 + fVar22 * pfVar15[1] + fVar31 * pfVar15[2];
          fVar37 = param_5;
          if (param_5 < fVar23) {
            fVar37 = fVar23;
          }
          if (fVar37 <= param_6) {
            puVar3 = (undefined8 *)(*(long *)(param_4 + 0x10) + lVar11);
            uStack_b8 = puVar3[1];
            local_c0 = *puVar3;
            (**(code **)(*(long *)param_7 + 0x20))(param_7,param_1,&local_c0);
            iVar13 = *(int *)(param_4 + 4);
          }
          lVar7 = lVar7 + 1;
          lVar11 = lVar11 + 0x10;
        } while (lVar7 < iVar13);
      }
    }
  }
  if ((local_a0 != (void *)0x0) && (local_98 != '\0')) {
    btAlignedFreeInternal(local_a0);
  }
  return;
}

