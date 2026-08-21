
void FUN_010ba578(undefined8 param_1,ulong param_2,ulong param_3,long param_4,long param_5)

{
  long lVar1;
  undefined8 *puVar2;
  bool bVar3;
  ulong extraout_x1;
  ulong extraout_x1_00;
  uint *extraout_x8;
  uint *puVar4;
  uint *extraout_x8_00;
  ulong uVar5;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ushort *puVar6;
  short *psVar7;
  char *pcVar8;
  uint *puVar9;
  byte *pbVar10;
  ulong uVar11;
  undefined8 *puVar12;
  double *pdVar13;
  float *pfVar14;
  ulong *puVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  double dVar19;
  undefined8 uVar20;
  float fVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  if ((*(uint *)((param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 + 0xb)) + 0x1b) >> 2 & 1)
      != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!source.WasDetached()");
  }
  if ((*(uint *)((param_3 & 0xffffffff00000000 | (ulong)*(uint *)(param_3 + 0xb)) + 0x1b) >> 2 & 1)
      != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!destination.WasDetached()");
  }
  uVar17 = (uint)(*(byte *)((param_2 & 0xffffffff00000000 | 10) + (ulong)*(uint *)(param_2 - 1)) >>
                 3);
  if (10 < uVar17 - 0x11) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  uVar5 = param_5 - param_4;
  puVar4 = (uint *)(*(long *)(param_3 + 0x27) + (ulong)*(uint *)(param_3 + 0x2f));
  switch(uVar17) {
  case 0x11:
    if (uVar5 != 0) {
      pbVar10 = (byte *)(*(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f) + param_4);
      do {
        uVar5 = uVar5 - 1;
        *puVar4 = (uint)*pbVar10;
        puVar4 = puVar4 + 1;
        pbVar10 = pbVar10 + 1;
      } while (uVar5 != 0);
    }
    break;
  case 0x12:
    if (uVar5 != 0) {
      pcVar8 = (char *)(*(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f) + param_4);
      do {
        uVar5 = uVar5 - 1;
        *puVar4 = (int)*pcVar8;
        puVar4 = puVar4 + 1;
        pcVar8 = pcVar8 + 1;
      } while (uVar5 != 0);
    }
    break;
  case 0x14:
    if (uVar5 != 0) {
      lVar1 = *(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f);
      if ((uVar5 < 8) ||
         ((puVar4 < (uint *)(lVar1 + param_5 * 2) &&
          ((uint *)(lVar1 + param_4 * 2) < puVar4 + uVar5)))) {
        uVar11 = 0;
      }
      else {
        uVar11 = uVar5 & 0xfffffffffffffff8;
        puVar12 = (undefined8 *)(lVar1 + param_4 * 2 + 8);
        puVar9 = puVar4 + 4;
        uVar16 = uVar11;
        do {
          uVar20 = puVar12[-1];
          uVar22 = *puVar12;
          puVar12 = puVar12 + 2;
          uVar16 = uVar16 - 8;
          *(ulong *)(puVar9 + -2) =
               CONCAT44((int)(short)((ulong)uVar20 >> 0x30),(int)(short)((ulong)uVar20 >> 0x20));
          *(ulong *)(puVar9 + -4) = CONCAT44((int)(short)((ulong)uVar20 >> 0x10),(int)(short)uVar20)
          ;
          *(ulong *)(puVar9 + 2) =
               CONCAT44((int)(short)((ulong)uVar22 >> 0x30),(int)(short)((ulong)uVar22 >> 0x20));
          *(ulong *)puVar9 = CONCAT44((int)(short)((ulong)uVar22 >> 0x10),(int)(short)uVar22);
          puVar9 = puVar9 + 8;
        } while (uVar16 != 0);
        if (uVar5 == uVar11) {
          return;
        }
      }
      param_5 = (uVar11 + param_4) - param_5;
      puVar4 = puVar4 + uVar11;
      psVar7 = (short *)(lVar1 + (uVar11 + param_4) * 2);
      do {
        bVar3 = param_5 != -1;
        param_5 = param_5 + 1;
        *puVar4 = (int)*psVar7;
        puVar4 = puVar4 + 1;
        psVar7 = psVar7 + 1;
      } while (bVar3);
    }
    break;
  case 0x15:
    if (uVar5 != 0) {
      lVar1 = *(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f);
      if ((uVar5 < 8) ||
         ((puVar4 < (uint *)(lVar1 + param_5 * 4) &&
          ((uint *)(lVar1 + param_4 * 4) < puVar4 + uVar5)))) {
        uVar11 = 0;
      }
      else {
        uVar11 = uVar5 & 0xfffffffffffffff8;
        puVar12 = (undefined8 *)(lVar1 + param_4 * 4 + 0x10);
        puVar9 = puVar4 + 4;
        uVar16 = uVar11;
        do {
          puVar2 = puVar12 + -1;
          uVar20 = puVar12[-2];
          uVar23 = puVar12[1];
          uVar22 = *puVar12;
          puVar12 = puVar12 + 4;
          uVar16 = uVar16 - 8;
          *(undefined8 *)(puVar9 + -2) = *puVar2;
          *(undefined8 *)(puVar9 + -4) = uVar20;
          *(undefined8 *)(puVar9 + 2) = uVar23;
          *(undefined8 *)puVar9 = uVar22;
          puVar9 = puVar9 + 8;
        } while (uVar16 != 0);
        if (uVar5 == uVar11) {
          return;
        }
      }
      param_5 = (uVar11 + param_4) - param_5;
      puVar4 = puVar4 + uVar11;
      puVar9 = (uint *)(lVar1 + (uVar11 + param_4) * 4);
      do {
        bVar3 = param_5 != -1;
        param_5 = param_5 + 1;
        *puVar4 = *puVar9;
        puVar4 = puVar4 + 1;
        puVar9 = puVar9 + 1;
      } while (bVar3);
    }
    break;
  case 0x16:
    if (uVar5 != 0) {
      lVar1 = *(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f);
      if ((uVar5 < 8) ||
         ((puVar4 < (uint *)(lVar1 + param_5 * 4) &&
          ((uint *)(lVar1 + param_4 * 4) < puVar4 + uVar5)))) {
        uVar11 = 0;
      }
      else {
        uVar11 = uVar5 & 0xfffffffffffffff8;
        puVar12 = (undefined8 *)(lVar1 + param_4 * 4 + 0x10);
        puVar9 = puVar4 + 4;
        uVar16 = uVar11;
        do {
          puVar2 = puVar12 + -1;
          uVar20 = puVar12[-2];
          uVar23 = puVar12[1];
          uVar22 = *puVar12;
          puVar12 = puVar12 + 4;
          uVar16 = uVar16 - 8;
          *(undefined8 *)(puVar9 + -2) = *puVar2;
          *(undefined8 *)(puVar9 + -4) = uVar20;
          *(undefined8 *)(puVar9 + 2) = uVar23;
          *(undefined8 *)puVar9 = uVar22;
          puVar9 = puVar9 + 8;
        } while (uVar16 != 0);
        if (uVar5 == uVar11) {
          return;
        }
      }
      param_5 = (uVar11 + param_4) - param_5;
      puVar4 = puVar4 + uVar11;
      puVar9 = (uint *)(lVar1 + (uVar11 + param_4) * 4);
      do {
        bVar3 = param_5 != -1;
        param_5 = param_5 + 1;
        *puVar4 = *puVar9;
        puVar4 = puVar4 + 1;
        puVar9 = puVar9 + 1;
      } while (bVar3);
    }
    break;
  case 0x17:
    if (uVar5 != 0) {
      pfVar14 = (float *)(*(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f) + param_4 * 4
                         );
      do {
        fVar21 = *pfVar14;
        dVar19 = (double)fVar21;
        if (((fVar21 < -2.1474836e+09) || (2147483647.0 < dVar19)) ||
           ((ABS(dVar19) == INFINITY ||
            ((NAN(ABS(dVar19)) || (uVar17 = (int)fVar21, (double)(int)fVar21 != dVar19)))))) {
          uVar17 = 0xfffffbce;
          if (((ulong)dVar19 & 0x7ff0000000000000) != 0) {
            uVar17 = ((uint)((ulong)dVar19 >> 0x34) & 0x7ff) - 0x433;
          }
          if ((int)uVar17 < 0) {
            if ((int)uVar17 < -0x34) goto LAB_010ba8dc;
            uVar11 = (ulong)dVar19 & 0xfffffffffffff;
            if (((ulong)dVar19 & 0x7ff0000000000000) != 0) {
              uVar11 = (ulong)dVar19 & 0xfffffffffffff | 0x10000000000000;
            }
            uVar18 = (uint)(uVar11 >> ((ulong)-uVar17 & 0x3f));
          }
          else {
            if (0x1f < (int)uVar17) {
LAB_010ba8dc:
              uVar17 = 0;
              goto LAB_010ba8e0;
            }
            uVar11 = (ulong)dVar19 & 0xfffffffffffff;
            if (((ulong)dVar19 & 0x7ff0000000000000) != 0) {
              uVar11 = (ulong)dVar19 & 0xfffffffffffff | 0x10000000000000;
            }
            uVar18 = (uint)(uVar11 << ((ulong)uVar17 & 0x3f));
          }
          uVar17 = -uVar18;
          if (-1 < (long)dVar19) {
            uVar17 = uVar18;
          }
        }
LAB_010ba8e0:
        *puVar4 = uVar17;
        uVar5 = uVar5 - 1;
        pfVar14 = pfVar14 + 1;
        puVar4 = puVar4 + 1;
      } while (uVar5 != 0);
    }
    break;
  case 0x18:
    if (uVar5 != 0) {
      pdVar13 = (double *)
                (*(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f) + param_4 * 8);
      do {
        dVar19 = *pdVar13;
        if ((((dVar19 < -2147483648.0) || (2147483647.0 < dVar19)) || (ABS(dVar19) == INFINITY)) ||
           ((NAN(ABS(dVar19)) || (uVar17 = (int)dVar19, dVar19 != (double)(int)dVar19)))) {
          uVar17 = 0xfffffbce;
          if (((ulong)dVar19 & 0x7ff0000000000000) != 0) {
            uVar17 = ((uint)((ulong)dVar19 >> 0x34) & 0x7ff) - 0x433;
          }
          if ((int)uVar17 < 0) {
            if ((int)uVar17 < -0x34) goto LAB_010ba760;
            uVar11 = (ulong)dVar19 & 0xfffffffffffff;
            if (((ulong)dVar19 & 0x7ff0000000000000) != 0) {
              uVar11 = (ulong)dVar19 & 0xfffffffffffff | 0x10000000000000;
            }
            uVar18 = (uint)(uVar11 >> ((ulong)-uVar17 & 0x3f));
          }
          else {
            if (0x1f < (int)uVar17) {
LAB_010ba760:
              uVar17 = 0;
              goto LAB_010ba764;
            }
            uVar11 = (ulong)dVar19 & 0xfffffffffffff;
            if (((ulong)dVar19 & 0x7ff0000000000000) != 0) {
              uVar11 = (ulong)dVar19 & 0xfffffffffffff | 0x10000000000000;
            }
            uVar18 = (uint)(uVar11 << ((ulong)uVar17 & 0x3f));
          }
          uVar17 = -uVar18;
          if (-1 < (long)dVar19) {
            uVar17 = uVar18;
          }
        }
LAB_010ba764:
        *puVar4 = uVar17;
        uVar5 = uVar5 - 1;
        pdVar13 = pdVar13 + 1;
        puVar4 = puVar4 + 1;
      } while (uVar5 != 0);
    }
    break;
  case 0x1a:
    if (uVar5 == 0) {
      return;
    }
    FUN_010badd0();
    param_2 = extraout_x1;
    puVar4 = extraout_x8;
    uVar5 = extraout_x9;
  case 0x13:
    if (uVar5 != 0) {
      lVar1 = *(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f);
      if ((uVar5 < 8) ||
         ((puVar4 < (uint *)(lVar1 + param_5 * 2) &&
          ((uint *)(lVar1 + param_4 * 2) < puVar4 + uVar5)))) {
        uVar11 = 0;
      }
      else {
        uVar11 = uVar5 & 0xfffffffffffffff8;
        puVar12 = (undefined8 *)(lVar1 + param_4 * 2 + 8);
        puVar15 = (ulong *)(puVar4 + 4);
        uVar16 = uVar11;
        do {
          uVar20 = puVar12[-1];
          uVar22 = *puVar12;
          puVar12 = puVar12 + 2;
          uVar16 = uVar16 - 8;
          puVar15[-1] = (ulong)CONCAT24((short)((ulong)uVar20 >> 0x30),
                                        (uint)(ushort)((ulong)uVar20 >> 0x20));
          puVar15[-2] = (ulong)(CONCAT24((short)((ulong)uVar20 >> 0x10),(int)uVar20) &
                               0xffff0000ffff);
          puVar15[1] = (ulong)CONCAT24((short)((ulong)uVar22 >> 0x30),
                                       (uint)(ushort)((ulong)uVar22 >> 0x20));
          *puVar15 = (ulong)(CONCAT24((short)((ulong)uVar22 >> 0x10),(int)uVar22) & 0xffff0000ffff);
          puVar15 = puVar15 + 4;
        } while (uVar16 != 0);
        if (uVar5 == uVar11) {
          return;
        }
      }
      param_5 = (uVar11 + param_4) - param_5;
      puVar4 = puVar4 + uVar11;
      puVar6 = (ushort *)(lVar1 + (uVar11 + param_4) * 2);
      do {
        bVar3 = param_5 != -1;
        param_5 = param_5 + 1;
        *puVar4 = (uint)*puVar6;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      } while (bVar3);
    }
    break;
  case 0x1b:
    if (uVar5 == 0) {
      return;
    }
    FUN_010bade4();
    param_2 = extraout_x1_00;
    puVar4 = extraout_x8_00;
    uVar5 = extraout_x9_00;
  case 0x19:
    if (uVar5 == 0) {
      return;
    }
    pbVar10 = (byte *)(*(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f) + param_4);
    do {
      uVar5 = uVar5 - 1;
      *puVar4 = (uint)*pbVar10;
      puVar4 = puVar4 + 1;
      pbVar10 = pbVar10 + 1;
    } while (uVar5 != 0);
    return;
  }
  return;
}

