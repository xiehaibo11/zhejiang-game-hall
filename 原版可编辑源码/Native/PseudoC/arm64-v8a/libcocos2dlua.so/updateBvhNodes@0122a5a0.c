
/* WARNING: Type propagation algorithm not settling */
/* btOptimizedBvh::updateBvhNodes(btStridingMeshInterface*, int, int, int) */

void btOptimizedBvh::updateBvhNodes
               (btStridingMeshInterface *param_1,int param_2,int param_3,int param_4)

{
  ushort *puVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  long *plVar12;
  long lVar13;
  double *pdVar14;
  float *pfVar15;
  ushort *puVar16;
  long lVar17;
  double *pdVar18;
  double *pdVar19;
  float *pfVar20;
  int iVar21;
  ulong uVar22;
  ushort *puVar23;
  float fVar24;
  double dVar25;
  float fVar26;
  double dVar27;
  float fVar28;
  float fVar29;
  double dVar30;
  float fVar31;
  double dVar32;
  float fVar33;
  float fVar34;
  double dVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  double dVar39;
  float fVar40;
  double dVar41;
  float fVar42;
  double dVar43;
  double dVar44;
  float fVar45;
  double dVar46;
  double dVar47;
  int local_a4;
  undefined8 local_a0;
  long local_98;
  int local_8c;
  int local_88 [2];
  long local_78;
  
  plVar12 = (long *)(ulong)(uint)param_2;
  uVar22 = (ulong)(uint)param_4;
  local_78 = 0;
  local_8c = 0;
  local_a0 = 0;
  local_98 = 0;
  local_88[0] = 2;
  local_88[1] = 0;
  local_a4 = 2;
  if (param_3 < param_4) {
    uVar11 = 0xffffffff;
    fVar9 = 1e+18;
    fVar10 = -1e+18;
    do {
      lVar17 = *(long *)(param_1 + 0xb8);
      lVar13 = 0;
      iVar21 = (int)uVar22;
      puVar23 = (ushort *)(lVar17 + (long)iVar21 * 0x10 + -8);
      while (uVar4 = *(uint *)(puVar23 + 2), (int)uVar4 < 0) {
        puVar16 = (ushort *)(lVar17 + (long)(iVar21 + (int)lVar13) * 0x10);
        iVar5 = *(int *)(puVar16 + 6);
        uVar6 = *puVar16;
        iVar3 = iVar5;
        if (iVar5 < 0) {
          iVar3 = -1;
        }
        puVar23[-4] = uVar6;
        puVar1 = (ushort *)(lVar17 + (long)(iVar21 + (int)lVar13 + (iVar3 - iVar5) + 1) * 0x10);
        lVar13 = lVar13 + -1;
        uVar7 = *puVar1;
        if (uVar6 <= *puVar1) {
          uVar7 = uVar6;
        }
        puVar23[-4] = uVar7;
        uVar7 = puVar16[3];
        puVar23[-1] = uVar7;
        uVar6 = puVar1[3];
        if (puVar1[3] <= uVar7) {
          uVar6 = uVar7;
        }
        puVar23[-1] = uVar6;
        uVar7 = puVar16[1];
        puVar23[-3] = uVar7;
        uVar6 = puVar1[1];
        if (uVar7 <= puVar1[1]) {
          uVar6 = uVar7;
        }
        puVar23[-3] = uVar6;
        uVar7 = puVar16[4];
        *puVar23 = uVar7;
        uVar6 = puVar1[4];
        if (puVar1[4] <= uVar7) {
          uVar6 = uVar7;
        }
        *puVar23 = uVar6;
        uVar7 = puVar16[2];
        puVar23[-2] = uVar7;
        uVar6 = puVar1[2];
        if (uVar7 <= puVar1[2]) {
          uVar6 = uVar7;
        }
        puVar23[-2] = uVar6;
        uVar7 = puVar16[5];
        puVar23[1] = uVar7;
        uVar6 = puVar1[5];
        if (puVar1[5] <= uVar7) {
          uVar6 = uVar7;
        }
        puVar23[1] = uVar6;
        puVar23 = puVar23 + -8;
        if (iVar21 + lVar13 <= (long)param_3) goto LAB_0122aa98;
      }
      uVar8 = uVar4 >> 0x15;
      uVar22 = (lVar13 + (uVar22 & 0xffffffff)) - 1;
      if (uVar8 != uVar11) {
        if (-1 < (int)uVar11) {
          (**(code **)(*plVar12 + 0x30))(plVar12);
        }
        (**(code **)(*plVar12 + 0x20))
                  (plVar12,&local_78,local_88 + 1,local_88,&local_8c,&local_98,(long)&local_a0 + 4,
                   &local_a0,&local_a4,uVar8);
        uVar11 = uVar8;
      }
      puVar16 = (ushort *)(local_98 + (long)local_a0._4_4_ * (long)(int)(uVar4 & 0x1fffff));
      if (local_a4 == 3) {
        lVar13 = (long)local_8c;
        pdVar18 = (double *)(local_78 + lVar13 * (ulong)puVar16[2]);
        if (local_88[0] != 0) {
          dVar25 = *pdVar18;
          fVar28 = *(float *)(plVar12 + 1);
          dVar35 = pdVar18[2];
          fVar36 = *(float *)(plVar12 + 2);
          dVar32 = (double)*(float *)((long)plVar12 + 0xc);
          pdVar19 = (double *)(local_78 + lVar13 * (ulong)puVar16[1]);
          pdVar14 = (double *)(local_78 + lVar13 * (ulong)*puVar16);
          dVar41 = pdVar18[1] * dVar32;
          dVar27 = *pdVar19;
          dVar44 = pdVar19[1];
          dVar43 = *pdVar14;
          dVar46 = pdVar14[1];
          dVar47 = pdVar19[2];
          goto LAB_0122a830;
        }
        fVar29 = *(float *)(pdVar18 + 1);
        fVar34 = *(float *)(plVar12 + 1);
        fVar36 = *(float *)((long)plVar12 + 0xc);
        fVar40 = *(float *)(plVar12 + 2);
        pfVar20 = (float *)(local_78 + lVar13 * (ulong)puVar16[1]);
        pfVar15 = (float *)(local_78 + lVar13 * (ulong)*puVar16);
        fVar26 = *(float *)pdVar18 * fVar34;
        fVar24 = *(float *)((long)pdVar18 + 4) * fVar36;
        fVar31 = *pfVar20;
        fVar33 = pfVar20[1];
        fVar28 = *pfVar15;
        fVar37 = pfVar20[2];
LAB_0122a8f4:
        fVar31 = fVar31 * fVar34;
        fVar28 = fVar28 * fVar34;
        fVar33 = fVar33 * fVar36;
        fVar36 = pfVar15[1] * fVar36;
        fVar29 = fVar29 * fVar40;
        fVar37 = fVar37 * fVar40;
        fVar40 = pfVar15[2] * fVar40;
      }
      else {
        lVar13 = (long)local_8c;
        pdVar14 = (double *)(local_78 + lVar13 * *(int *)(puVar16 + 4));
        if (local_88[0] == 0) {
          fVar29 = *(float *)(pdVar14 + 1);
          fVar34 = *(float *)(plVar12 + 1);
          fVar36 = *(float *)((long)plVar12 + 0xc);
          fVar40 = *(float *)(plVar12 + 2);
          pfVar20 = (float *)(local_78 + lVar13 * *(int *)(puVar16 + 2));
          pfVar15 = (float *)(local_78 + lVar13 * *(int *)puVar16);
          fVar26 = *(float *)pdVar14 * fVar34;
          fVar24 = *(float *)((long)pdVar14 + 4) * fVar36;
          fVar31 = *pfVar20;
          fVar33 = pfVar20[1];
          fVar28 = *pfVar15;
          fVar37 = pfVar20[2];
          goto LAB_0122a8f4;
        }
        dVar25 = *pdVar14;
        fVar28 = *(float *)(plVar12 + 1);
        dVar35 = pdVar14[2];
        fVar36 = *(float *)(plVar12 + 2);
        dVar32 = (double)*(float *)((long)plVar12 + 0xc);
        dVar41 = pdVar14[1] * dVar32;
        pdVar18 = (double *)(local_78 + lVar13 * *(int *)(puVar16 + 2));
        pdVar14 = (double *)(local_78 + lVar13 * *(int *)puVar16);
        dVar27 = *pdVar18;
        dVar44 = pdVar18[1];
        dVar43 = *pdVar14;
        dVar46 = pdVar14[1];
        dVar47 = pdVar18[2];
LAB_0122a830:
        dVar30 = (double)fVar28;
        dVar39 = (double)fVar36;
        fVar26 = (float)(dVar25 * dVar30);
        fVar24 = (float)dVar41;
        fVar29 = (float)(dVar35 * dVar39);
        fVar31 = (float)(dVar27 * dVar30);
        fVar33 = (float)(dVar44 * dVar32);
        fVar37 = (float)(dVar47 * dVar39);
        fVar28 = (float)(dVar43 * dVar30);
        fVar36 = (float)(dVar46 * dVar32);
        fVar40 = (float)(pdVar14[2] * dVar39);
      }
      fVar34 = fVar28;
      if (1e+18 <= fVar28) {
        fVar34 = fVar9;
      }
      fVar2 = fVar36;
      if (1e+18 <= fVar36) {
        fVar2 = fVar9;
      }
      fVar45 = fVar40;
      if (1e+18 <= fVar40) {
        fVar45 = fVar9;
      }
      if (fVar28 <= -1e+18) {
        fVar28 = fVar10;
      }
      if (fVar36 <= -1e+18) {
        fVar36 = fVar10;
      }
      if (fVar40 <= -1e+18) {
        fVar40 = fVar10;
      }
      fVar42 = fVar31;
      if (fVar34 <= fVar31) {
        fVar42 = fVar34;
      }
      fVar34 = fVar33;
      if (fVar2 <= fVar33) {
        fVar34 = fVar2;
      }
      fVar2 = fVar37;
      if (fVar45 <= fVar37) {
        fVar2 = fVar45;
      }
      fVar45 = *(float *)(param_1 + 0xc);
      if (fVar31 <= fVar28) {
        fVar31 = fVar28;
      }
      if (fVar33 <= fVar36) {
        fVar33 = fVar36;
      }
      if (fVar37 <= fVar40) {
        fVar37 = fVar40;
      }
      fVar28 = fVar26;
      if (fVar42 <= fVar26) {
        fVar28 = fVar42;
      }
      fVar40 = *(float *)(param_1 + 0x2c);
      fVar42 = *(float *)(param_1 + 0x10);
      fVar36 = fVar24;
      if (fVar34 <= fVar24) {
        fVar36 = fVar34;
      }
      fVar38 = *(float *)(param_1 + 0x30);
      fVar34 = fVar29;
      if (fVar2 <= fVar29) {
        fVar34 = fVar2;
      }
      puVar23[-4] = (ushort)(int)((fVar28 - *(float *)(param_1 + 8)) * *(float *)(param_1 + 0x28)) &
                    0xfffe;
      if (fVar26 <= fVar31) {
        fVar26 = fVar31;
      }
      puVar23[-3] = (ushort)(int)((fVar36 - fVar45) * fVar40) & 0xfffe;
      puVar23[-2] = (ushort)(int)((fVar34 - fVar42) * fVar38) & 0xfffe;
      if (fVar24 <= fVar33) {
        fVar24 = fVar33;
      }
      fVar28 = *(float *)(param_1 + 0xc);
      fVar36 = *(float *)(param_1 + 0x10);
      if (fVar29 <= fVar37) {
        fVar29 = fVar37;
      }
      fVar40 = *(float *)(param_1 + 0x2c);
      fVar31 = *(float *)(param_1 + 0x30);
      puVar23[-1] = (ushort)(int)((fVar26 - *(float *)(param_1 + 8)) * *(float *)(param_1 + 0x28) +
                                 1.0) | 1;
      *puVar23 = (ushort)(int)((fVar24 - fVar28) * fVar40 + 1.0) | 1;
      puVar23[1] = (ushort)(int)((fVar29 - fVar36) * fVar31 + 1.0) | 1;
    } while (param_3 < (int)uVar22);
LAB_0122aa98:
    if (-1 < (int)uVar11) {
      (**(code **)(*plVar12 + 0x30))(plVar12);
    }
  }
  return;
}

