
void speex_decorrelate(long param_1,long param_2,undefined8 *param_3,uint param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  float fVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  undefined4 *puVar16;
  short *psVar17;
  long lVar18;
  long lVar19;
  undefined4 *puVar20;
  long lVar21;
  ulong uVar22;
  undefined8 *puVar23;
  undefined2 *puVar24;
  float *pfVar25;
  uint uVar26;
  float *pfVar27;
  undefined8 *puVar28;
  long lVar29;
  int iVar30;
  undefined8 *puVar31;
  long lVar32;
  ulong uVar33;
  short sVar34;
  float fVar35;
  float fVar36;
  undefined8 uVar37;
  double dVar38;
  undefined1 auVar39 [16];
  double dVar40;
  undefined8 uVar41;
  undefined1 auVar42 [16];
  double __x;
  float fVar43;
  float fVar44;
  float fVar45;
  
  uVar12 = (ulong)*(uint *)(param_1 + 4);
  param_4 = param_4 & ((int)param_4 >> 0x1f ^ 0xffffffffU);
  if (99 < (int)param_4) {
    param_4 = 100;
  }
  if (0 < (int)*(uint *)(param_1 + 4)) {
    lVar9 = *(long *)(param_1 + 0x38);
    lVar15 = *(long *)(param_1 + 0x40);
    fVar7 = (float)(int)param_4 * 0.01;
    lVar19 = *(long *)(param_1 + 0x48);
    puVar31 = (undefined8 *)(param_2 + 8);
    __x = (double)fVar7 * 0.4;
    iVar30 = 0;
    lVar32 = 0;
    dVar40 = SQRT(__x);
    puVar28 = param_3;
    do {
      lVar21 = lVar32 * 4;
      uVar4 = *(uint *)(param_1 + 8);
      uVar33 = (ulong)uVar4;
      lVar2 = *(long *)(param_1 + 0x28);
      lVar3 = *(long *)(param_1 + 0x30);
      uVar5 = *(uint *)(lVar9 + lVar21);
      iVar11 = *(int *)(lVar15 + lVar21);
      fVar45 = *(float *)(lVar19 + lVar21);
      lVar9 = (long)(int)uVar4;
      if (0 < (int)uVar4) {
        if (uVar4 < 8) {
LAB_0012c9c0:
          uVar14 = 0;
LAB_0012c9c4:
          lVar15 = uVar33 - uVar14;
          puVar16 = (undefined4 *)(lVar2 + (uVar14 + (long)(int)(uVar4 * iVar30)) * 4);
          puVar20 = (undefined4 *)(lVar2 + (uVar14 + lVar9 + (long)(int)(uVar4 * iVar30)) * 4);
          do {
            lVar15 = lVar15 + -1;
            *puVar16 = *puVar20;
            puVar16 = puVar16 + 1;
            puVar20 = puVar20 + 1;
          } while (lVar15 != 0);
        }
        else {
          iVar10 = (int)lVar32 * uVar4 * 2;
          lVar15 = lVar9 + iVar10;
          if (((ulong)(lVar2 + (long)iVar10 * 4) < lVar2 + (lVar15 + uVar33) * 4) &&
             ((ulong)(lVar2 + lVar15 * 4) < lVar2 + ((long)iVar10 + uVar33) * 4)) goto LAB_0012c9c0;
          uVar14 = uVar33 & 0xfffffff8;
          puVar13 = (undefined8 *)(lVar2 + (long)(int)(uVar4 * iVar30) * 4);
          uVar22 = uVar14;
          do {
            puVar23 = (undefined8 *)((long)puVar13 + lVar9 * 4);
            uVar37 = *puVar23;
            uVar41 = puVar23[2];
            uVar6 = puVar23[3];
            uVar22 = uVar22 - 8;
            puVar13[1] = puVar23[1];
            *puVar13 = uVar37;
            puVar13[3] = uVar6;
            puVar13[2] = uVar41;
            puVar13 = puVar13 + 4;
          } while (uVar22 != 0);
          if (uVar14 != uVar33) goto LAB_0012c9c4;
        }
        if (0 < (int)uVar4) {
          uVar14 = 0;
          iVar10 = (int)uVar12;
          if ((7 < uVar4) && (iVar10 == 1)) {
            uVar14 = uVar33 & 0xfffffff8;
            puVar13 = (undefined8 *)(lVar2 + (lVar9 + (int)(uVar4 * iVar30)) * 4 + 0x10);
            uVar12 = uVar14;
            puVar23 = puVar31;
            do {
              uVar37 = puVar23[-1];
              uVar41 = *puVar23;
              puVar23 = puVar23 + 2;
              uVar12 = uVar12 - 8;
              auVar39._0_4_ = (int)(short)uVar37;
              auVar39._4_4_ = (int)(short)((ulong)uVar37 >> 0x10);
              auVar39._8_4_ = (int)(short)((ulong)uVar37 >> 0x20);
              auVar39._12_4_ = (int)(short)((ulong)uVar37 >> 0x30);
              auVar42._0_4_ = (int)(short)uVar41;
              auVar42._4_4_ = (int)(short)((ulong)uVar41 >> 0x10);
              auVar42._8_4_ = (int)(short)((ulong)uVar41 >> 0x20);
              auVar42._12_4_ = (int)(short)((ulong)uVar41 >> 0x30);
              auVar39 = NEON_scvtf(auVar39,4);
              auVar42 = NEON_scvtf(auVar42,4);
              puVar13[-1] = auVar39._8_8_;
              puVar13[-2] = auVar39._0_8_;
              puVar13[1] = auVar42._8_8_;
              *puVar13 = auVar42._0_8_;
              puVar13 = puVar13 + 4;
            } while (uVar12 != 0);
            if (uVar14 == uVar33) goto code_r0x0012caac;
          }
          lVar15 = uVar33 - uVar14;
          psVar17 = (short *)(param_2 + (lVar32 + uVar14 * (long)iVar10) * 2);
          pfVar25 = (float *)(lVar2 + (uVar14 + lVar9 + (long)(int)(uVar4 * iVar30)) * 4);
          do {
            sVar34 = *psVar17;
            lVar15 = lVar15 + -1;
            psVar17 = psVar17 + iVar10;
            *pfVar25 = (float)(int)sVar34;
            pfVar25 = pfVar25 + 1;
          } while (lVar15 != 0);
        }
      }
code_r0x0012caac:
      uVar26 = uVar4;
      dVar38 = (double)fVar7 * 0.63246;
      if (1.0 < fVar7) {
        dVar38 = dVar40;
        if (NAN(dVar40)) {
          dVar38 = sqrt(__x);
        }
        uVar26 = *(uint *)(param_1 + 8);
      }
      fVar35 = (float)(1.0 - dVar38);
      if (fVar35 <= 0.0) {
        fVar35 = 0.0;
      }
      if (0 < (int)uVar26) {
        lVar19 = *(long *)(param_1 + 0x10);
        lVar18 = *(long *)(param_1 + 0x20);
        lVar15 = 0;
        pfVar25 = (float *)(lVar2 + (lVar9 + iVar11 + (long)(int)(uVar4 * iVar30)) * 4 + -0x50);
        do {
          uVar1 = uVar26 + (int)lVar15;
          lVar29 = lVar15 * 4;
          uVar33 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
          lVar8 = lVar3 + lVar32 * 0x50;
          uVar12 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2;
          uVar1 = 0;
          if ((int)(uVar5 + 1) < iVar11) {
            uVar1 = uVar5 + 1;
          }
          fVar36 = (*(float *)(lVar19 + (long)(int)(uVar26 + iVar11 + (int)lVar15) * 4) *
                    fVar45 * (*pfVar25 - fVar35 * pfVar25[-1]) +
                   *(float *)(lVar2 + (lVar9 + (int)(uVar4 * iVar30)) * 4 + lVar29 + -0x50) *
                   *(float *)(lVar19 + uVar33)) -
                   fVar45 * (*(float *)(lVar8 + uVar12) -
                            fVar35 * *(float *)(lVar8 + (long)(int)uVar1 * 4));
          *(float *)(lVar18 + lVar29) = fVar36;
          *(float *)(lVar8 + uVar12) = fVar36;
          lVar15 = lVar15 + 1;
          pfVar25 = pfVar25 + 1;
          *(float *)(lVar18 + lVar29) = *(float *)(lVar19 + uVar33) * *(float *)(lVar18 + lVar29);
          uVar5 = uVar1;
        } while (lVar15 < (int)uVar26);
      }
      uVar5 = *(int *)(param_1 + 0x18) * 0x19660d + 0x3c6ef35f;
      *(uint *)(param_1 + 0x18) = uVar5;
      uVar5 = (iVar11 + (uVar5 >> 0x10) % 3) - 1;
      if ((int)uVar5 < 6) {
        uVar5 = 5;
      }
      if (9 < (int)uVar5) {
        uVar5 = 10;
      }
      dVar38 = pow((double)(fVar7 + -1.0) * 0.04 + 0.96,(double)(int)uVar5);
      uVar26 = *(int *)(param_1 + 0x18) * 0x19660d + 0x3c6ef35f;
      fVar36 = 0.98 / (fVar35 + 1.0);
      *(uint *)(param_1 + 0x18) = uVar26;
      puVar13 = (undefined8 *)(lVar3 + lVar32 * 0x50);
      if ((float)dVar38 <= fVar36) {
        fVar36 = (float)dVar38;
      }
      puVar13[7] = 0;
      puVar13[6] = 0;
      puVar13[9] = 0;
      puVar13[8] = 0;
      puVar13[3] = 0;
      puVar13[2] = 0;
      puVar13[5] = 0;
      puVar13[4] = 0;
      puVar13[1] = 0;
      *puVar13 = 0;
      fVar44 = (float)(uVar26 & 0x7fffff | 0x3f800000) + -1.5;
      fVar45 = (fVar44 + fVar44) * 0.4 + fVar45;
      uVar26 = *(uint *)(param_1 + 8);
      fVar44 = fVar36;
      if (fVar45 <= fVar36) {
        fVar44 = fVar45;
      }
      fVar45 = -fVar36;
      if (-fVar36 <= fVar44) {
        fVar45 = fVar44;
      }
      if ((int)uVar26 < 1) {
        iVar11 = 0;
      }
      else {
        lVar18 = *(long *)(param_1 + 0x10);
        lVar8 = *(long *)(param_1 + 0x20);
        lVar9 = lVar9 + (int)(uVar4 * iVar30);
        lVar19 = 0;
        uVar12 = (ulong)uVar26;
        fVar36 = 0.0;
        lVar15 = 1;
        iVar10 = 0;
        while( true ) {
          pfVar25 = (float *)(lVar2 + (lVar9 + (ulong)uVar5) * 4 + -0x50 + lVar19);
          lVar29 = lVar3 + lVar32 * 0x50;
          iVar11 = 0;
          if (iVar10 + 1 < (int)uVar5) {
            iVar11 = iVar10 + 1;
          }
          pfVar27 = (float *)(lVar29 + (long)iVar11 * 4);
          fVar36 = (*(float *)(lVar18 + (ulong)uVar5 * 4 + lVar19) *
                    fVar45 * (*pfVar25 - fVar35 * pfVar25[-1]) +
                   *(float *)(lVar2 + lVar9 * 4 + lVar19 + -0x50) * *(float *)(lVar18 + lVar19)) -
                   fVar45 * (fVar36 - fVar35 * *pfVar27);
          *(float *)(lVar29 + (long)iVar10 * 4) = fVar36;
          *(float *)(lVar8 + lVar19) =
               *(float *)(lVar8 + lVar19) + *(float *)(lVar18 + lVar19) * fVar36;
          if ((int)uVar26 <= lVar15) break;
          fVar36 = *pfVar27;
          lVar15 = lVar15 + 1;
          lVar19 = lVar19 + 4;
          iVar10 = iVar11;
        }
        if (0 < (int)uVar26) {
          iVar10 = *(int *)(param_1 + 4);
          pfVar25 = *(float **)(param_1 + 0x20);
          uVar33 = 0;
          if ((3 < uVar26) && (iVar10 == 1)) {
            uVar33 = uVar12 & 0xfffffffc;
            uVar14 = uVar33;
            puVar13 = puVar28;
            pfVar27 = pfVar25;
            do {
              fVar35 = *pfVar27;
              fVar36 = pfVar27[1];
              fVar44 = pfVar27[2];
              fVar43 = pfVar27[3];
              uVar14 = uVar14 - 4;
              fVar35 = (float)((uint)fVar35 ^
                              ((uint)fVar35 ^ 0x46fffe00) & -(uint)(32767.0 < fVar35));
              fVar36 = (float)((uint)fVar36 ^
                              ((uint)fVar36 ^ 0x46fffe00) & -(uint)(32767.0 < fVar36));
              fVar44 = (float)((uint)fVar44 ^
                              ((uint)fVar44 ^ 0x46fffe00) & -(uint)(32767.0 < fVar44));
              fVar43 = (float)((uint)fVar43 ^
                              ((uint)fVar43 ^ 0x46fffe00) & -(uint)(32767.0 < fVar43));
              *puVar13 = CONCAT26((short)(int)(float)((uint)fVar43 ^
                                                     ((uint)fVar43 ^ 0xc6fffe00) &
                                                     -(uint)(fVar43 < -32767.0)),
                                  CONCAT24((short)(int)(float)((uint)fVar44 ^
                                                              ((uint)fVar44 ^ 0xc6fffe00) &
                                                              -(uint)(fVar44 < -32767.0)),
                                           CONCAT22((short)(int)(float)((uint)fVar36 ^
                                                                       ((uint)fVar36 ^ 0xc6fffe00) &
                                                                       -(uint)(fVar36 < -32767.0)),
                                                    (short)(int)(float)((uint)fVar35 ^
                                                                       ((uint)fVar35 ^ 0xc6fffe00) &
                                                                       -(uint)(fVar35 < -32767.0))))
                                 );
              puVar13 = puVar13 + 1;
              pfVar27 = pfVar27 + 4;
            } while (uVar14 != 0);
            if (uVar33 == uVar12) goto LAB_0012ce9c;
          }
          puVar24 = (undefined2 *)((long)param_3 + (lVar32 + uVar33 * (long)iVar10) * 2);
          lVar9 = uVar12 - uVar33;
          pfVar25 = pfVar25 + uVar33;
          do {
            lVar9 = lVar9 + -1;
            fVar35 = *pfVar25;
            if (32767.0 < *pfVar25) {
              fVar35 = 32767.0;
            }
            if (fVar35 <= -32767.0) {
              fVar35 = -32767.0;
            }
            *puVar24 = (short)(int)fVar35;
            puVar24 = puVar24 + iVar10;
            pfVar25 = pfVar25 + 1;
          } while (lVar9 != 0);
        }
      }
LAB_0012ce9c:
      lVar9 = *(long *)(param_1 + 0x38);
      lVar32 = lVar32 + 1;
      iVar30 = iVar30 + 2;
      puVar31 = (undefined8 *)((long)puVar31 + 2);
      *(int *)(lVar9 + lVar21) = iVar11;
      lVar15 = *(long *)(param_1 + 0x40);
      puVar28 = (undefined8 *)((long)puVar28 + 2);
      *(uint *)(lVar15 + lVar21) = uVar5;
      lVar19 = *(long *)(param_1 + 0x48);
      *(float *)(lVar19 + lVar21) = fVar45;
      uVar12 = (ulong)*(int *)(param_1 + 4);
    } while (lVar32 < (long)uVar12);
  }
  return;
}

