
/* btConvexHullInternal::compute(void const*, bool, int, int) */

void __thiscall
btConvexHullInternal::compute
          (btConvexHullInternal *this,void *param_1,bool param_2,int param_3,int param_4)

{
  double *pdVar1;
  float *pfVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  float *pfVar6;
  double *pdVar7;
  bool bVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  float fVar16;
  uint uVar17;
  undefined8 *puVar18;
  long lVar19;
  float fVar20;
  float fVar21;
  double *pdVar22;
  float *pfVar23;
  undefined8 *puVar24;
  int iVar25;
  int *piVar26;
  int iVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  double dVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  btAlignedObjectArray<btConvexHullInternal::Point32> abStack_80 [4];
  long local_7c;
  undefined8 *local_70;
  char local_68;
  
  fVar32 = -1e+30;
  fVar29 = 1e+30;
  if (param_2) {
    if (param_4 < 1) {
LAB_01267e48:
      fVar28 = -1e+30;
      fVar31 = -1e+30;
      fVar20 = 1e+30;
      fVar16 = 1e+30;
    }
    else {
      pdVar22 = (double *)((long)param_1 + 0x10);
      fVar35 = fVar32;
      fVar34 = fVar29;
      iVar27 = param_4;
      fVar37 = 1e+30;
      fVar36 = 1e+30;
      fVar38 = -1e+30;
      fVar21 = -1e+30;
      do {
        iVar27 = iVar27 + -1;
        fVar28 = (float)pdVar22[-2];
        fVar31 = (float)pdVar22[-1];
        fVar20 = fVar28;
        if (fVar36 <= fVar28) {
          fVar20 = fVar36;
        }
        fVar32 = (float)*pdVar22;
        fVar16 = fVar31;
        if (fVar37 <= fVar31) {
          fVar16 = fVar37;
        }
        fVar29 = fVar32;
        if (fVar34 <= fVar32) {
          fVar29 = fVar34;
        }
        if (fVar28 <= fVar21) {
          fVar28 = fVar21;
        }
        if (fVar31 <= fVar38) {
          fVar31 = fVar38;
        }
        if (fVar32 <= fVar35) {
          fVar32 = fVar35;
        }
        pdVar22 = (double *)((long)pdVar22 + (long)param_3);
        fVar35 = fVar32;
        fVar34 = fVar29;
        fVar37 = fVar16;
        fVar36 = fVar20;
        fVar38 = fVar31;
        fVar21 = fVar28;
      } while (iVar27 != 0);
    }
  }
  else {
    if (param_4 < 1) goto LAB_01267e48;
    pfVar23 = (float *)((long)param_1 + 4);
    fVar35 = fVar32;
    fVar34 = fVar29;
    fVar37 = 1e+30;
    fVar36 = 1e+30;
    fVar38 = -1e+30;
    fVar21 = -1e+30;
    iVar27 = param_4;
    do {
      fVar28 = pfVar23[-1];
      fVar31 = *pfVar23;
      fVar32 = pfVar23[1];
      fVar20 = fVar28;
      if (fVar36 <= fVar28) {
        fVar20 = fVar36;
      }
      fVar16 = fVar31;
      if (fVar37 <= fVar31) {
        fVar16 = fVar37;
      }
      fVar29 = fVar32;
      if (fVar34 <= fVar32) {
        fVar29 = fVar34;
      }
      if (fVar28 <= fVar21) {
        fVar28 = fVar21;
      }
      if (fVar31 <= fVar38) {
        fVar31 = fVar38;
      }
      iVar27 = iVar27 + -1;
      if (fVar32 <= fVar35) {
        fVar32 = fVar35;
      }
      pfVar23 = (float *)((long)pfVar23 + (long)param_3);
      fVar35 = fVar32;
      fVar34 = fVar29;
      fVar37 = fVar16;
      fVar36 = fVar20;
      fVar38 = fVar31;
      fVar21 = fVar28;
    } while (iVar27 != 0);
  }
  fVar34 = fVar28 - fVar20;
  fVar37 = fVar31 - fVar16;
  bVar8 = fVar34 < fVar37;
  fVar36 = fVar32 - fVar29;
  fVar35 = fVar37;
  if (!bVar8) {
    fVar35 = fVar34;
  }
  fVar38 = fVar34;
  if (!bVar8) {
    fVar38 = fVar37;
  }
  uVar11 = 2;
  if (fVar36 <= fVar35) {
    uVar11 = (uint)bVar8;
  }
  uVar17 = (uint)!bVar8;
  if (fVar36 <= fVar38) {
    uVar17 = 2;
  }
  *(uint *)(this + 0xac) = uVar11;
  if (uVar17 == uVar11) {
    uVar17 = (uVar11 + 1) % 3;
  }
  iVar27 = (uVar11 ^ 3) - uVar17;
  *(uint *)(this + 0xa4) = uVar17;
  *(int *)(this + 0xa8) = iVar27;
  fVar34 = fVar34 * 9.788567e-05;
  fVar37 = fVar37 * 9.788567e-05;
  fVar36 = fVar36 * 9.788567e-05;
  if ((iVar27 + 1) % 3 != uVar11) {
    fVar34 = -fVar34;
    fVar37 = -fVar37;
    fVar36 = -fVar36;
  }
  fVar35 = 1.0 / fVar34;
  if (fVar34 == 0.0) {
    fVar35 = fVar34;
  }
  fVar38 = 1.0 / fVar37;
  if (fVar37 == 0.0) {
    fVar38 = fVar37;
  }
  fVar21 = 1.0 / fVar36;
  if (fVar36 == 0.0) {
    fVar21 = fVar36;
  }
  *(float *)this = fVar34;
  *(float *)(this + 4) = fVar37;
  *(float *)(this + 8) = fVar36;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(float *)(this + 0x10) = (fVar28 + fVar20) * 0.5;
  *(float *)(this + 0x14) = (fVar31 + fVar16) * 0.5;
  *(float *)(this + 0x18) = (fVar32 + fVar29) * 0.5;
  local_68 = '\x01';
  local_70 = (undefined8 *)0x0;
  local_7c = 0;
  if (0 < param_4) {
    puVar9 = (undefined8 *)
             btAlignedAllocInternal
                       (-(ulong)((uint)param_4 >> 0x1f) & 0xfffffff000000000 |
                        (ulong)(uint)param_4 << 4,0x10);
    lVar12 = (long)(int)local_7c;
    if ((int)local_7c < 1) {
      if (local_70 != (undefined8 *)0x0) goto LAB_01267fec;
    }
    else {
      lVar15 = 0;
      do {
        uVar10 = *(undefined8 *)((long)local_70 + lVar15);
        lVar12 = lVar12 + -1;
        ((undefined8 *)((long)puVar9 + lVar15))[1] = ((undefined8 *)((long)local_70 + lVar15))[1];
        *(undefined8 *)((long)puVar9 + lVar15) = uVar10;
        lVar15 = lVar15 + 0x10;
      } while (lVar12 != 0);
LAB_01267fec:
      if (local_68 != '\0') {
        btAlignedFreeInternal(local_70);
      }
    }
    local_68 = 1;
    local_70 = puVar9;
    local_7c = (ulong)(uint)param_4 << 0x20;
    puVar9[1] = uStack_98;
    *puVar9 = local_a0;
    if (param_4 != 1) {
      lVar15 = (long)param_4 + -1;
      lVar12 = 0x10;
      do {
        lVar15 = lVar15 + -1;
        ((undefined8 *)((long)puVar9 + lVar12))[1] = uStack_98;
        *(undefined8 *)((long)puVar9 + lVar12) = local_a0;
        lVar12 = lVar12 + 0x10;
      } while (lVar15 != 0);
    }
  }
  local_68 = '\x01';
  local_7c = CONCAT44(local_7c._4_4_,param_4);
  if (param_2) {
    if (param_4 < 1) goto LAB_01268198;
    fVar29 = *(float *)(this + 0x10);
    fVar32 = *(float *)(this + 0x14);
    fVar34 = *(float *)(this + 0x18);
    iVar27 = *(int *)(this + 0xa4);
    iVar14 = *(int *)(this + 0xa8);
    iVar25 = *(int *)(this + 0xac);
    uVar13 = 0;
    pdVar22 = (double *)((long)param_1 + 0x10);
    piVar26 = (int *)(local_70 + 1);
    do {
      pdVar1 = pdVar22 + -2;
      pdVar7 = pdVar22 + -1;
      dVar33 = *pdVar22;
      pdVar22 = (double *)((long)pdVar22 + (long)param_3);
      fVar37 = (float)dVar33 - fVar34;
      local_a0 = CONCAT44(fVar38 * ((float)*pdVar7 - fVar32),fVar35 * ((float)*pdVar1 - fVar29));
      piVar26[-2] = (int)*(float *)((long)&local_a0 + (long)iVar14 * 4);
      piVar26[-1] = (int)*(float *)((long)&local_a0 + (long)iVar25 * 4);
      *piVar26 = (int)*(float *)((long)&local_a0 + (long)iVar27 * 4);
      piVar26[1] = (int)uVar13;
      uVar13 = uVar13 + 1;
      piVar26 = piVar26 + 4;
    } while ((uint)param_4 != uVar13);
  }
  else {
    if (param_4 < 1) goto LAB_01268198;
    iVar27 = *(int *)(this + 0xa4);
    iVar14 = *(int *)(this + 0xa8);
    iVar25 = *(int *)(this + 0xac);
    fVar29 = *(float *)(this + 0x10);
    fVar32 = *(float *)(this + 0x14);
    fVar34 = *(float *)(this + 0x18);
    uVar13 = 0;
    pfVar23 = (float *)((long)param_1 + 8);
    piVar26 = (int *)(local_70 + 1);
    do {
      pfVar2 = pfVar23 + -2;
      pfVar6 = pfVar23 + -1;
      fVar37 = *pfVar23;
      pfVar23 = (float *)((long)pfVar23 + (long)param_3);
      fVar37 = fVar37 - fVar34;
      local_a0 = CONCAT44(fVar38 * (*pfVar6 - fVar32),fVar35 * (*pfVar2 - fVar29));
      piVar26[-2] = (int)*(float *)((long)&local_a0 + (long)iVar14 * 4);
      piVar26[-1] = (int)*(float *)((long)&local_a0 + (long)iVar25 * 4);
      *piVar26 = (int)*(float *)((long)&local_a0 + (long)iVar27 * 4);
      piVar26[1] = (int)uVar13;
      uVar13 = uVar13 + 1;
      piVar26 = piVar26 + 4;
    } while ((uint)param_4 != uVar13);
  }
  uStack_98 = (ulong)(uint)(fVar21 * fVar37);
  if (1 < param_4) {
    btAlignedObjectArray<btConvexHullInternal::Point32>::quickSortInternal<pointCmp>
              (abStack_80,(pointCmp *)&local_a0,0,param_4 + -1);
  }
LAB_01268198:
  iVar27 = *(int *)(this + 0x84);
  *(int *)(this + 0x38) = param_4;
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(this + 0x20);
  *(undefined8 *)(this + 0x30) = 0;
  if (iVar27 < param_4) {
    if (*(int *)(this + 0x88) < param_4) {
      if (param_4 == 0) {
        lVar12 = 0;
        iVar14 = iVar27;
      }
      else {
        lVar12 = btAlignedAllocInternal
                           (-(ulong)((uint)param_4 >> 0x1f) & 0xfffffff800000000 |
                            (ulong)(uint)param_4 << 3,0x10);
        iVar14 = *(int *)(this + 0x84);
      }
      if (0 < iVar14) {
        lVar15 = 0;
        do {
          lVar19 = lVar15 * 8;
          lVar15 = lVar15 + 1;
          *(undefined8 *)(lVar12 + lVar19) = *(undefined8 *)(*(long *)(this + 0x90) + lVar19);
        } while (iVar14 != lVar15);
      }
      if (*(void **)(this + 0x90) != (void *)0x0) {
        if (this[0x98] != (btConvexHullInternal)0x0) {
          btAlignedFreeInternal(*(void **)(this + 0x90));
        }
        *(undefined8 *)(this + 0x90) = 0;
      }
      *(long *)(this + 0x90) = lVar12;
      this[0x98] = (btConvexHullInternal)0x1;
      *(int *)(this + 0x88) = param_4;
    }
    lVar12 = (long)iVar27;
    do {
      *(undefined8 *)(*(long *)(this + 0x90) + lVar12 * 8) = 0;
      lVar12 = lVar12 + 1;
    } while (param_4 != lVar12);
  }
  *(int *)(this + 0x84) = param_4;
  if (0 < param_4) {
    lVar12 = 0;
    do {
      puVar9 = *(undefined8 **)(this + 0x30);
      if (puVar9 == (undefined8 *)0x0) {
        puVar9 = *(undefined8 **)(this + 0x28);
        if (puVar9 == (undefined8 *)0x0) {
          puVar9 = (undefined8 *)btAlignedAllocInternal(0x18,0x10);
          iVar27 = *(int *)(this + 0x38);
          puVar9[2] = 0;
          *(int *)(puVar9 + 1) = iVar27;
          uVar10 = btAlignedAllocInternal((long)iVar27 << 7,0x10);
          *puVar9 = uVar10;
          puVar9[2] = *(undefined8 *)(this + 0x20);
          *(undefined8 **)(this + 0x20) = puVar9;
        }
        else {
          *(undefined8 *)(this + 0x28) = puVar9[2];
        }
        iVar27 = *(int *)(puVar9 + 1);
        puVar9 = (undefined8 *)*puVar9;
        if (0 < iVar27) {
          puVar18 = puVar9 + 0x10;
          puVar3 = puVar18;
          if (iVar27 == 1) {
            puVar3 = (undefined8 *)0x0;
          }
          *puVar9 = puVar3;
          if (iVar27 != 1) {
            iVar14 = iVar27;
            if (iVar27 < 3) {
              iVar14 = 2;
            }
            uVar13 = (ulong)(iVar14 - 2U) + 1;
            if (uVar13 < 2) {
LAB_01268360:
              iVar14 = 1;
            }
            else {
              uVar11 = ~(iVar14 - 2U) & 1;
              lVar15 = uVar13 - uVar11;
              if (lVar15 == 0) goto LAB_01268360;
              lVar19 = 0;
              iVar14 = (int)lVar15 + 1;
              puVar18 = puVar18 + lVar15 * 0x10;
              puVar3 = puVar9;
              do {
                puVar24 = puVar3 + 0x20;
                iVar25 = (int)lVar19;
                lVar19 = lVar19 + 2;
                puVar5 = puVar3 + 0x30;
                puVar4 = puVar24;
                if (iVar27 <= (int)lVar19) {
                  puVar4 = (undefined8 *)0x0;
                }
                if (iVar27 <= iVar25 + 3) {
                  puVar5 = (undefined8 *)0x0;
                }
                puVar3[0x10] = puVar4;
                *puVar24 = puVar5;
                puVar3 = puVar24;
              } while (lVar15 != lVar19);
              if (uVar11 == 0) goto LAB_0126838c;
            }
            do {
              iVar14 = iVar14 + 1;
              puVar3 = puVar18 + 0x10;
              if (iVar27 <= iVar14) {
                puVar3 = (undefined8 *)0x0;
              }
              *puVar18 = puVar3;
              puVar18 = puVar18 + 0x10;
            } while (iVar14 < iVar27);
          }
        }
      }
LAB_0126838c:
      *(undefined8 *)(this + 0x30) = *puVar9;
      puVar9[4] = 0;
      puVar9[1] = 0;
      *puVar9 = 0;
      puVar9[3] = 0;
      puVar9[2] = 0;
      *(undefined4 *)(puVar9 + 0xf) = 0xffffffff;
      uVar30 = (local_70 + lVar12 * 2)[1];
      uVar10 = local_70[lVar12 * 2];
      *(undefined4 *)(puVar9 + 0xf) = 0xffffffff;
      puVar9[0xe] = uVar30;
      puVar9[0xd] = uVar10;
      *(undefined8 **)(*(long *)(this + 0x90) + lVar12 * 8) = puVar9;
      lVar12 = lVar12 + 1;
    } while (lVar12 < param_4);
  }
  if ((local_70 != (undefined8 *)0x0) && (local_68 != '\0')) {
    btAlignedFreeInternal(local_70);
  }
  local_68 = '\x01';
  local_70 = (void *)0x0;
  local_7c = 0;
  *(undefined4 *)(this + 0xa0) = 0xfffffffd;
  *(int *)(this + 0x58) = param_4 * 6;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0x48) = *(undefined8 *)(this + 0x40);
  *(undefined8 *)(this + 0x50) = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  computeInternal(this,0,param_4,(IntermediateHull *)&local_a0);
  *(undefined8 *)(this + 0xb8) = local_a0;
  if ((local_70 != (void *)0x0) && (local_68 != '\0')) {
    btAlignedFreeInternal(local_70);
  }
  return;
}

