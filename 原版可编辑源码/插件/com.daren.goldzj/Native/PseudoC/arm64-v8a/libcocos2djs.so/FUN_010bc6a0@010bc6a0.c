
void FUN_010bc6a0(undefined8 param_1,ulong param_2,ulong param_3,long param_4,long param_5)

{
  undefined1 (*pauVar1) [16];
  long lVar2;
  uint uVar3;
  bool bVar4;
  ulong extraout_x1;
  ulong extraout_x1_00;
  float *extraout_x8;
  float *pfVar5;
  float *extraout_x8_00;
  ulong uVar6;
  ulong extraout_x9;
  ulong extraout_x9_00;
  undefined4 *puVar7;
  ushort *puVar8;
  short *psVar9;
  char *pcVar10;
  int *piVar11;
  byte *pbVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined1 (*pauVar15) [16];
  double *pdVar16;
  float *pfVar17;
  ulong uVar18;
  float fVar19;
  double dVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  
  if ((*(uint *)((param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 + 0xb)) + 0x1b) >> 2 & 1)
      != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!source.WasDetached()");
  }
  if ((*(uint *)((param_3 & 0xffffffff00000000 | (ulong)*(uint *)(param_3 + 0xb)) + 0x1b) >> 2 & 1)
      == 0) {
    uVar3 = (uint)(*(byte *)((param_2 & 0xffffffff00000000 | 10) + (ulong)*(uint *)(param_2 - 1)) >>
                  3);
    if (10 < uVar3 - 0x11) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar6 = param_5 - param_4;
    pfVar5 = (float *)(*(long *)(param_3 + 0x27) + (ulong)*(uint *)(param_3 + 0x2f));
    switch(uVar3) {
    case 0x11:
      if (uVar6 != 0) {
        pbVar12 = (byte *)(*(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f) + param_4);
        do {
          uVar6 = uVar6 - 1;
          *pfVar5 = (float)*pbVar12;
          pfVar5 = pfVar5 + 1;
          pbVar12 = pbVar12 + 1;
        } while (uVar6 != 0);
      }
      break;
    case 0x12:
      if (uVar6 != 0) {
        pcVar10 = (char *)(*(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f) + param_4);
        do {
          uVar6 = uVar6 - 1;
          *pfVar5 = (float)(int)*pcVar10;
          pfVar5 = pfVar5 + 1;
          pcVar10 = pcVar10 + 1;
        } while (uVar6 != 0);
      }
      break;
    case 0x14:
      if (uVar6 != 0) {
        lVar2 = *(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f);
        if ((uVar6 < 8) ||
           ((pfVar5 < (float *)(lVar2 + param_5 * 2) &&
            ((float *)(lVar2 + param_4 * 2) < pfVar5 + uVar6)))) {
          uVar13 = 0;
        }
        else {
          uVar13 = uVar6 & 0xfffffffffffffff8;
          puVar14 = (undefined8 *)(lVar2 + param_4 * 2 + 8);
          pfVar17 = pfVar5 + 4;
          uVar18 = uVar13;
          do {
            uVar21 = puVar14[-1];
            uVar24 = *puVar14;
            puVar14 = puVar14 + 2;
            uVar18 = uVar18 - 8;
            auVar23._0_4_ = (int)(short)uVar21;
            auVar23._4_4_ = (int)(short)((ulong)uVar21 >> 0x10);
            auVar23._8_4_ = (int)(short)((ulong)uVar21 >> 0x20);
            auVar23._12_4_ = (int)(short)((ulong)uVar21 >> 0x30);
            auVar26._0_4_ = (int)(short)uVar24;
            auVar26._4_4_ = (int)(short)((ulong)uVar24 >> 0x10);
            auVar26._8_4_ = (int)(short)((ulong)uVar24 >> 0x20);
            auVar26._12_4_ = (int)(short)((ulong)uVar24 >> 0x30);
            auVar23 = NEON_scvtf(auVar23,4);
            auVar26 = NEON_scvtf(auVar26,4);
            *(long *)(pfVar17 + -2) = auVar23._8_8_;
            *(long *)(pfVar17 + -4) = auVar23._0_8_;
            *(long *)(pfVar17 + 2) = auVar26._8_8_;
            *(long *)pfVar17 = auVar26._0_8_;
            pfVar17 = pfVar17 + 8;
          } while (uVar18 != 0);
          if (uVar6 == uVar13) {
            return;
          }
        }
        param_5 = (uVar13 + param_4) - param_5;
        pfVar5 = pfVar5 + uVar13;
        psVar9 = (short *)(lVar2 + (uVar13 + param_4) * 2);
        do {
          bVar4 = param_5 != -1;
          param_5 = param_5 + 1;
          *pfVar5 = (float)(int)*psVar9;
          pfVar5 = pfVar5 + 1;
          psVar9 = psVar9 + 1;
        } while (bVar4);
      }
      break;
    case 0x15:
      if (uVar6 != 0) {
        lVar2 = *(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f);
        if ((uVar6 < 8) ||
           ((pfVar5 < (float *)(lVar2 + param_5 * 4) &&
            ((float *)(lVar2 + param_4 * 4) < pfVar5 + uVar6)))) {
          uVar13 = 0;
        }
        else {
          uVar13 = uVar6 & 0xfffffffffffffff8;
          pauVar15 = (undefined1 (*) [16])(lVar2 + param_4 * 4 + 0x10);
          pfVar17 = pfVar5 + 4;
          uVar18 = uVar13;
          do {
            pauVar1 = pauVar15 + -1;
            auVar23 = *pauVar15;
            pauVar15 = pauVar15 + 2;
            uVar18 = uVar18 - 8;
            auVar26 = NEON_ucvtf(*pauVar1,4);
            auVar23 = NEON_ucvtf(auVar23,4);
            *(long *)(pfVar17 + -2) = auVar26._8_8_;
            *(long *)(pfVar17 + -4) = auVar26._0_8_;
            *(long *)(pfVar17 + 2) = auVar23._8_8_;
            *(long *)pfVar17 = auVar23._0_8_;
            pfVar17 = pfVar17 + 8;
          } while (uVar18 != 0);
          if (uVar6 == uVar13) {
            return;
          }
        }
        param_5 = (uVar13 + param_4) - param_5;
        pfVar5 = pfVar5 + uVar13;
        puVar7 = (undefined4 *)(lVar2 + (uVar13 + param_4) * 4);
        do {
          bVar4 = param_5 != -1;
          param_5 = param_5 + 1;
          fVar19 = (float)NEON_ucvtf(*puVar7);
          *pfVar5 = fVar19;
          pfVar5 = pfVar5 + 1;
          puVar7 = puVar7 + 1;
        } while (bVar4);
      }
      break;
    case 0x16:
      if (uVar6 != 0) {
        lVar2 = *(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f);
        if ((uVar6 < 8) ||
           ((pfVar5 < (float *)(lVar2 + param_5 * 4) &&
            ((float *)(lVar2 + param_4 * 4) < pfVar5 + uVar6)))) {
          uVar13 = 0;
        }
        else {
          uVar13 = uVar6 & 0xfffffffffffffff8;
          pauVar15 = (undefined1 (*) [16])(lVar2 + param_4 * 4 + 0x10);
          pfVar17 = pfVar5 + 4;
          uVar18 = uVar13;
          do {
            pauVar1 = pauVar15 + -1;
            auVar23 = *pauVar15;
            pauVar15 = pauVar15 + 2;
            uVar18 = uVar18 - 8;
            auVar26 = NEON_scvtf(*pauVar1,4);
            auVar23 = NEON_scvtf(auVar23,4);
            *(long *)(pfVar17 + -2) = auVar26._8_8_;
            *(long *)(pfVar17 + -4) = auVar26._0_8_;
            *(long *)(pfVar17 + 2) = auVar23._8_8_;
            *(long *)pfVar17 = auVar23._0_8_;
            pfVar17 = pfVar17 + 8;
          } while (uVar18 != 0);
          if (uVar6 == uVar13) {
            return;
          }
        }
        param_5 = (uVar13 + param_4) - param_5;
        pfVar5 = pfVar5 + uVar13;
        piVar11 = (int *)(lVar2 + (uVar13 + param_4) * 4);
        do {
          bVar4 = param_5 != -1;
          param_5 = param_5 + 1;
          *pfVar5 = (float)*piVar11;
          pfVar5 = pfVar5 + 1;
          piVar11 = piVar11 + 1;
        } while (bVar4);
      }
      break;
    case 0x17:
      if (uVar6 != 0) {
        pfVar17 = (float *)(*(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f) +
                           param_4 * 4);
        do {
          fVar19 = *pfVar17;
          if (fVar19 <= 3.4028235e+38) {
            if (fVar19 < -3.4028235e+38) {
              if (-3.4028235e+38 <= fVar19) {
                fVar19 = -3.4028235e+38;
              }
              else {
                fVar19 = -INFINITY;
              }
            }
          }
          else if (3.4028235e+38 < fVar19) {
            fVar19 = INFINITY;
          }
          else {
            fVar19 = 3.4028235e+38;
          }
          *pfVar5 = fVar19;
          uVar6 = uVar6 - 1;
          pfVar17 = pfVar17 + 1;
          pfVar5 = pfVar5 + 1;
        } while (uVar6 != 0);
      }
      break;
    case 0x18:
      if (uVar6 != 0) {
        pdVar16 = (double *)
                  (*(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f) + param_4 * 8);
        do {
          dVar20 = *pdVar16;
          if (dVar20 <= 3.4028234663852886e+38) {
            if (-3.4028234663852886e+38 <= dVar20) {
              fVar19 = (float)dVar20;
            }
            else if (-3.4028235677973362e+38 <= dVar20) {
              fVar19 = -3.4028235e+38;
            }
            else {
              fVar19 = -INFINITY;
            }
          }
          else if (dVar20 <= 3.4028235677973362e+38) {
            fVar19 = 3.4028235e+38;
          }
          else {
            fVar19 = INFINITY;
          }
          *pfVar5 = fVar19;
          uVar6 = uVar6 - 1;
          pdVar16 = pdVar16 + 1;
          pfVar5 = pfVar5 + 1;
        } while (uVar6 != 0);
      }
      break;
    case 0x1a:
      if (uVar6 == 0) {
        return;
      }
      FUN_010bcd2c();
      param_2 = extraout_x1;
      pfVar5 = extraout_x8;
      uVar6 = extraout_x9;
    case 0x13:
      if (uVar6 != 0) {
        lVar2 = *(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f);
        if ((uVar6 < 8) ||
           ((pfVar5 < (float *)(lVar2 + param_5 * 2) &&
            ((float *)(lVar2 + param_4 * 2) < pfVar5 + uVar6)))) {
          uVar13 = 0;
        }
        else {
          uVar13 = uVar6 & 0xfffffffffffffff8;
          puVar14 = (undefined8 *)(lVar2 + param_4 * 2 + 8);
          pfVar17 = pfVar5 + 4;
          uVar18 = uVar13;
          do {
            uVar21 = puVar14[-1];
            uVar24 = *puVar14;
            puVar14 = puVar14 + 2;
            uVar18 = uVar18 - 8;
            auVar22._2_2_ = 0;
            auVar22._0_2_ = (ushort)uVar21;
            auVar22._4_2_ = (short)((ulong)uVar21 >> 0x10);
            auVar22._6_2_ = 0;
            auVar22._8_2_ = (short)((ulong)uVar21 >> 0x20);
            auVar22._10_2_ = 0;
            auVar22._12_2_ = (short)((ulong)uVar21 >> 0x30);
            auVar22._14_2_ = 0;
            auVar25._2_2_ = 0;
            auVar25._0_2_ = (ushort)uVar24;
            auVar25._4_2_ = (short)((ulong)uVar24 >> 0x10);
            auVar25._6_2_ = 0;
            auVar25._8_2_ = (short)((ulong)uVar24 >> 0x20);
            auVar25._10_2_ = 0;
            auVar25._12_2_ = (short)((ulong)uVar24 >> 0x30);
            auVar25._14_2_ = 0;
            auVar23 = NEON_ucvtf(auVar22,4);
            auVar26 = NEON_ucvtf(auVar25,4);
            *(long *)(pfVar17 + -2) = auVar23._8_8_;
            *(long *)(pfVar17 + -4) = auVar23._0_8_;
            *(long *)(pfVar17 + 2) = auVar26._8_8_;
            *(long *)pfVar17 = auVar26._0_8_;
            pfVar17 = pfVar17 + 8;
          } while (uVar18 != 0);
          if (uVar6 == uVar13) {
            return;
          }
        }
        param_5 = (uVar13 + param_4) - param_5;
        pfVar5 = pfVar5 + uVar13;
        puVar8 = (ushort *)(lVar2 + (uVar13 + param_4) * 2);
        do {
          bVar4 = param_5 != -1;
          param_5 = param_5 + 1;
          *pfVar5 = (float)*puVar8;
          pfVar5 = pfVar5 + 1;
          puVar8 = puVar8 + 1;
        } while (bVar4);
      }
      break;
    case 0x1b:
      if (uVar6 == 0) {
        return;
      }
      FUN_010bcd40();
      param_2 = extraout_x1_00;
      pfVar5 = extraout_x8_00;
      uVar6 = extraout_x9_00;
    case 0x19:
      if (uVar6 == 0) {
        return;
      }
      pbVar12 = (byte *)(*(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f) + param_4);
      do {
        uVar6 = uVar6 - 1;
        *pfVar5 = (float)*pbVar12;
        pfVar5 = pfVar5 + 1;
        pbVar12 = pbVar12 + 1;
      } while (uVar6 != 0);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","!destination.WasDetached()");
}

