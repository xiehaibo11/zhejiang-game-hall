
void FUN_010b443c(undefined8 param_1,ulong param_2,ulong param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  bool bVar5;
  ulong extraout_x1;
  ulong extraout_x1_00;
  undefined2 *extraout_x8;
  short *psVar6;
  undefined2 *puVar7;
  undefined2 *extraout_x8_00;
  ushort *puVar8;
  ulong uVar9;
  ulong extraout_x9;
  ulong extraout_x9_00;
  undefined2 *puVar10;
  char *pcVar11;
  undefined4 *puVar12;
  byte *pbVar13;
  ulong uVar14;
  undefined8 *puVar15;
  double *pdVar16;
  float *pfVar17;
  undefined8 *puVar18;
  ulong *puVar19;
  ulong uVar20;
  int iVar21;
  int iVar22;
  double dVar23;
  undefined8 uVar24;
  float fVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  
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
  uVar3 = (uint)(*(byte *)((param_2 & 0xffffffff00000000 | 10) + (ulong)*(uint *)(param_2 - 1)) >> 3
                );
  if (10 < uVar3 - 0x11) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  uVar9 = param_5 - param_4;
  puVar7 = (undefined2 *)(*(long *)(param_3 + 0x27) + (ulong)*(uint *)(param_3 + 0x2f));
  switch(uVar3) {
  case 0x11:
    if (uVar9 != 0) {
      lVar2 = *(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f);
      if ((uVar9 < 0x10) ||
         ((puVar7 < (undefined2 *)(lVar2 + param_5) &&
          ((undefined2 *)(lVar2 + param_4) < puVar7 + uVar9)))) {
        uVar14 = 0;
      }
      else {
        uVar14 = uVar9 & 0xfffffffffffffff0;
        puVar15 = (undefined8 *)(param_4 + lVar2 + 8);
        puVar19 = (ulong *)(puVar7 + 8);
        uVar20 = uVar14;
        do {
          uVar24 = puVar15[-1];
          uVar26 = *puVar15;
          puVar15 = puVar15 + 2;
          uVar20 = uVar20 - 0x10;
          puVar19[-1] = (ulong)CONCAT16((char)((ulong)uVar24 >> 0x38),
                                        (uint6)CONCAT14((char)((ulong)uVar24 >> 0x30),
                                                        (uint)CONCAT12((char)((ulong)uVar24 >> 0x28)
                                                                       ,(ushort)(byte)((ulong)uVar24
                                                                                      >> 0x20))));
          puVar19[-2] = (ulong)CONCAT16((char)((ulong)uVar24 >> 0x18),
                                        (uint6)CONCAT14((char)((ulong)uVar24 >> 0x10),
                                                        (uint)(CONCAT12((char)((ulong)uVar24 >> 8),
                                                                        (short)uVar24) & 0xff00ff)))
          ;
          puVar19[1] = (ulong)CONCAT16((char)((ulong)uVar26 >> 0x38),
                                       (uint6)CONCAT14((char)((ulong)uVar26 >> 0x30),
                                                       (uint)CONCAT12((char)((ulong)uVar26 >> 0x28),
                                                                      (ushort)(byte)((ulong)uVar26
                                                                                    >> 0x20))));
          *puVar19 = (ulong)CONCAT16((char)((ulong)uVar26 >> 0x18),
                                     (uint6)CONCAT14((char)((ulong)uVar26 >> 0x10),
                                                     (uint)(CONCAT12((char)((ulong)uVar26 >> 8),
                                                                     (short)uVar26) & 0xff00ff)));
          puVar19 = puVar19 + 4;
        } while (uVar20 != 0);
        if (uVar9 == uVar14) {
          return;
        }
      }
      param_5 = (uVar14 + param_4) - param_5;
      puVar8 = puVar7 + uVar14;
      pbVar13 = (byte *)(lVar2 + uVar14 + param_4);
      do {
        bVar5 = param_5 != -1;
        param_5 = param_5 + 1;
        *puVar8 = (ushort)*pbVar13;
        puVar8 = puVar8 + 1;
        pbVar13 = pbVar13 + 1;
      } while (bVar5);
    }
    break;
  case 0x12:
    if (uVar9 != 0) {
      lVar2 = *(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f);
      if ((uVar9 < 0x10) ||
         ((puVar7 < (undefined2 *)(lVar2 + param_5) &&
          ((undefined2 *)(lVar2 + param_4) < puVar7 + uVar9)))) {
        uVar14 = 0;
      }
      else {
        uVar14 = uVar9 & 0xfffffffffffffff0;
        puVar15 = (undefined8 *)(param_4 + lVar2 + 8);
        puVar18 = (undefined8 *)(puVar7 + 8);
        uVar20 = uVar14;
        do {
          uVar24 = puVar15[-1];
          uVar26 = *puVar15;
          puVar15 = puVar15 + 2;
          uVar20 = uVar20 - 0x10;
          puVar18[-1] = CONCAT26((short)(char)((ulong)uVar24 >> 0x38),
                                 CONCAT24((short)(char)((ulong)uVar24 >> 0x30),
                                          CONCAT22((short)(char)((ulong)uVar24 >> 0x28),
                                                   (short)(char)((ulong)uVar24 >> 0x20))));
          puVar18[-2] = CONCAT26((short)(char)((ulong)uVar24 >> 0x18),
                                 CONCAT24((short)(char)((ulong)uVar24 >> 0x10),
                                          CONCAT22((short)(char)((ulong)uVar24 >> 8),
                                                   (short)(char)uVar24)));
          puVar18[1] = CONCAT26((short)(char)((ulong)uVar26 >> 0x38),
                                CONCAT24((short)(char)((ulong)uVar26 >> 0x30),
                                         CONCAT22((short)(char)((ulong)uVar26 >> 0x28),
                                                  (short)(char)((ulong)uVar26 >> 0x20))));
          *puVar18 = CONCAT26((short)(char)((ulong)uVar26 >> 0x18),
                              CONCAT24((short)(char)((ulong)uVar26 >> 0x10),
                                       CONCAT22((short)(char)((ulong)uVar26 >> 8),
                                                (short)(char)uVar26)));
          puVar18 = puVar18 + 4;
        } while (uVar20 != 0);
        if (uVar9 == uVar14) {
          return;
        }
      }
      param_5 = (uVar14 + param_4) - param_5;
      psVar6 = puVar7 + uVar14;
      pcVar11 = (char *)(lVar2 + uVar14 + param_4);
      do {
        bVar5 = param_5 != -1;
        param_5 = param_5 + 1;
        *psVar6 = (short)*pcVar11;
        psVar6 = psVar6 + 1;
        pcVar11 = pcVar11 + 1;
      } while (bVar5);
    }
    break;
  case 0x14:
    if (uVar9 != 0) {
      lVar2 = *(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f);
      if ((uVar9 < 0x10) ||
         ((puVar7 < (undefined2 *)(lVar2 + param_5 * 2) &&
          ((undefined2 *)(lVar2 + param_4 * 2) < puVar7 + uVar9)))) {
        uVar14 = 0;
      }
      else {
        uVar14 = uVar9 & 0xfffffffffffffff0;
        puVar15 = (undefined8 *)(lVar2 + param_4 * 2 + 0x10);
        puVar18 = (undefined8 *)(puVar7 + 8);
        uVar20 = uVar14;
        do {
          puVar1 = puVar15 + -1;
          uVar24 = puVar15[-2];
          uVar27 = puVar15[1];
          uVar26 = *puVar15;
          puVar15 = puVar15 + 4;
          uVar20 = uVar20 - 0x10;
          puVar18[-1] = *puVar1;
          puVar18[-2] = uVar24;
          puVar18[1] = uVar27;
          *puVar18 = uVar26;
          puVar18 = puVar18 + 4;
        } while (uVar20 != 0);
        if (uVar9 == uVar14) {
          return;
        }
      }
      param_5 = (uVar14 + param_4) - param_5;
      puVar7 = puVar7 + uVar14;
      puVar10 = (undefined2 *)(lVar2 + (uVar14 + param_4) * 2);
      do {
        bVar5 = param_5 != -1;
        param_5 = param_5 + 1;
        *puVar7 = *puVar10;
        puVar7 = puVar7 + 1;
        puVar10 = puVar10 + 1;
      } while (bVar5);
    }
    break;
  case 0x15:
    if (uVar9 != 0) {
      lVar2 = *(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f);
      if ((uVar9 < 8) ||
         ((puVar7 < (undefined2 *)(lVar2 + param_5 * 4) &&
          ((undefined2 *)(lVar2 + param_4 * 4) < puVar7 + uVar9)))) {
        uVar14 = 0;
      }
      else {
        uVar14 = uVar9 & 0xfffffffffffffff8;
        puVar15 = (undefined8 *)(lVar2 + param_4 * 4 + 0x10);
        puVar18 = (undefined8 *)(puVar7 + 4);
        uVar20 = uVar14;
        do {
          puVar1 = puVar15 + -2;
          puVar4 = puVar15 + -1;
          uVar26 = puVar15[1];
          uVar24 = *puVar15;
          puVar15 = puVar15 + 4;
          uVar20 = uVar20 - 8;
          puVar18[-1] = CONCAT26((short)((ulong)*puVar4 >> 0x20),
                                 CONCAT24((short)*puVar4,
                                          CONCAT22((short)((ulong)*puVar1 >> 0x20),(short)*puVar1)))
          ;
          *puVar18 = CONCAT26((short)((ulong)uVar26 >> 0x20),
                              CONCAT24((short)uVar26,
                                       CONCAT22((short)((ulong)uVar24 >> 0x20),(short)uVar24)));
          puVar18 = puVar18 + 2;
        } while (uVar20 != 0);
        if (uVar9 == uVar14) {
          return;
        }
      }
      param_5 = (uVar14 + param_4) - param_5;
      puVar7 = puVar7 + uVar14;
      puVar12 = (undefined4 *)(lVar2 + (uVar14 + param_4) * 4);
      do {
        bVar5 = param_5 != -1;
        param_5 = param_5 + 1;
        *puVar7 = (short)*puVar12;
        puVar7 = puVar7 + 1;
        puVar12 = puVar12 + 1;
      } while (bVar5);
    }
    break;
  case 0x16:
    if (uVar9 != 0) {
      lVar2 = *(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f);
      if ((uVar9 < 8) ||
         ((puVar7 < (undefined2 *)(lVar2 + param_5 * 4) &&
          ((undefined2 *)(lVar2 + param_4 * 4) < puVar7 + uVar9)))) {
        uVar14 = 0;
      }
      else {
        uVar14 = uVar9 & 0xfffffffffffffff8;
        puVar15 = (undefined8 *)(lVar2 + param_4 * 4 + 0x10);
        puVar18 = (undefined8 *)(puVar7 + 4);
        uVar20 = uVar14;
        do {
          puVar1 = puVar15 + -2;
          puVar4 = puVar15 + -1;
          uVar26 = puVar15[1];
          uVar24 = *puVar15;
          puVar15 = puVar15 + 4;
          uVar20 = uVar20 - 8;
          puVar18[-1] = CONCAT26((short)((ulong)*puVar4 >> 0x20),
                                 CONCAT24((short)*puVar4,
                                          CONCAT22((short)((ulong)*puVar1 >> 0x20),(short)*puVar1)))
          ;
          *puVar18 = CONCAT26((short)((ulong)uVar26 >> 0x20),
                              CONCAT24((short)uVar26,
                                       CONCAT22((short)((ulong)uVar24 >> 0x20),(short)uVar24)));
          puVar18 = puVar18 + 2;
        } while (uVar20 != 0);
        if (uVar9 == uVar14) {
          return;
        }
      }
      param_5 = (uVar14 + param_4) - param_5;
      puVar7 = puVar7 + uVar14;
      puVar12 = (undefined4 *)(lVar2 + (uVar14 + param_4) * 4);
      do {
        bVar5 = param_5 != -1;
        param_5 = param_5 + 1;
        *puVar7 = (short)*puVar12;
        puVar7 = puVar7 + 1;
        puVar12 = puVar12 + 1;
      } while (bVar5);
    }
    break;
  case 0x17:
    if (uVar9 != 0) {
      pfVar17 = (float *)(*(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f) + param_4 * 4
                         );
      do {
        fVar25 = *pfVar17;
        dVar23 = (double)fVar25;
        if (((fVar25 < -2.1474836e+09) || (2147483647.0 < dVar23)) ||
           ((ABS(dVar23) == INFINITY ||
            ((NAN(ABS(dVar23)) || (iVar21 = (int)fVar25, (double)(int)fVar25 != dVar23)))))) {
          uVar3 = 0xfffffbce;
          if (((ulong)dVar23 & 0x7ff0000000000000) != 0) {
            uVar3 = ((uint)((ulong)dVar23 >> 0x34) & 0x7ff) - 0x433;
          }
          if ((int)uVar3 < 0) {
            if ((int)uVar3 < -0x34) goto LAB_010b4808;
            uVar14 = (ulong)dVar23 & 0xfffffffffffff;
            if (((ulong)dVar23 & 0x7ff0000000000000) != 0) {
              uVar14 = (ulong)dVar23 & 0xfffffffffffff | 0x10000000000000;
            }
            iVar22 = (int)(uVar14 >> ((ulong)-uVar3 & 0x3f));
          }
          else {
            if (0x1f < (int)uVar3) {
LAB_010b4808:
              iVar21 = 0;
              goto LAB_010b480c;
            }
            uVar14 = (ulong)dVar23 & 0xfffffffffffff;
            if (((ulong)dVar23 & 0x7ff0000000000000) != 0) {
              uVar14 = (ulong)dVar23 & 0xfffffffffffff | 0x10000000000000;
            }
            iVar22 = (int)(uVar14 << ((ulong)uVar3 & 0x3f));
          }
          iVar21 = -iVar22;
          if (-1 < (long)dVar23) {
            iVar21 = iVar22;
          }
        }
LAB_010b480c:
        *puVar7 = (short)iVar21;
        uVar9 = uVar9 - 1;
        pfVar17 = pfVar17 + 1;
        puVar7 = puVar7 + 1;
      } while (uVar9 != 0);
    }
    break;
  case 0x18:
    if (uVar9 != 0) {
      pdVar16 = (double *)
                (*(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f) + param_4 * 8);
      do {
        dVar23 = *pdVar16;
        if ((((dVar23 < -2147483648.0) || (2147483647.0 < dVar23)) || (ABS(dVar23) == INFINITY)) ||
           ((NAN(ABS(dVar23)) || (iVar21 = (int)dVar23, dVar23 != (double)(int)dVar23)))) {
          uVar3 = 0xfffffbce;
          if (((ulong)dVar23 & 0x7ff0000000000000) != 0) {
            uVar3 = ((uint)((ulong)dVar23 >> 0x34) & 0x7ff) - 0x433;
          }
          if ((int)uVar3 < 0) {
            if ((int)uVar3 < -0x34) goto LAB_010b4658;
            uVar14 = (ulong)dVar23 & 0xfffffffffffff;
            if (((ulong)dVar23 & 0x7ff0000000000000) != 0) {
              uVar14 = (ulong)dVar23 & 0xfffffffffffff | 0x10000000000000;
            }
            iVar22 = (int)(uVar14 >> ((ulong)-uVar3 & 0x3f));
          }
          else {
            if (0x1f < (int)uVar3) {
LAB_010b4658:
              iVar21 = 0;
              goto LAB_010b465c;
            }
            uVar14 = (ulong)dVar23 & 0xfffffffffffff;
            if (((ulong)dVar23 & 0x7ff0000000000000) != 0) {
              uVar14 = (ulong)dVar23 & 0xfffffffffffff | 0x10000000000000;
            }
            iVar22 = (int)(uVar14 << ((ulong)uVar3 & 0x3f));
          }
          iVar21 = -iVar22;
          if (-1 < (long)dVar23) {
            iVar21 = iVar22;
          }
        }
LAB_010b465c:
        *puVar7 = (short)iVar21;
        uVar9 = uVar9 - 1;
        pdVar16 = pdVar16 + 1;
        puVar7 = puVar7 + 1;
      } while (uVar9 != 0);
    }
    break;
  case 0x1a:
    if (uVar9 == 0) {
      return;
    }
    FUN_010b4df0();
    param_2 = extraout_x1;
    puVar7 = extraout_x8;
    uVar9 = extraout_x9;
  case 0x13:
    if (uVar9 != 0) {
      lVar2 = *(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f);
      if ((uVar9 < 0x10) ||
         ((puVar7 < (undefined2 *)(lVar2 + param_5 * 2) &&
          ((undefined2 *)(lVar2 + param_4 * 2) < puVar7 + uVar9)))) {
        uVar14 = 0;
      }
      else {
        uVar14 = uVar9 & 0xfffffffffffffff0;
        puVar15 = (undefined8 *)(lVar2 + param_4 * 2 + 0x10);
        puVar18 = (undefined8 *)(puVar7 + 8);
        uVar20 = uVar14;
        do {
          puVar1 = puVar15 + -1;
          uVar24 = puVar15[-2];
          uVar27 = puVar15[1];
          uVar26 = *puVar15;
          puVar15 = puVar15 + 4;
          uVar20 = uVar20 - 0x10;
          puVar18[-1] = *puVar1;
          puVar18[-2] = uVar24;
          puVar18[1] = uVar27;
          *puVar18 = uVar26;
          puVar18 = puVar18 + 4;
        } while (uVar20 != 0);
        if (uVar9 == uVar14) {
          return;
        }
      }
      param_5 = (uVar14 + param_4) - param_5;
      puVar7 = puVar7 + uVar14;
      puVar10 = (undefined2 *)(lVar2 + (uVar14 + param_4) * 2);
      do {
        bVar5 = param_5 != -1;
        param_5 = param_5 + 1;
        *puVar7 = *puVar10;
        puVar7 = puVar7 + 1;
        puVar10 = puVar10 + 1;
      } while (bVar5);
    }
    break;
  case 0x1b:
    if (uVar9 == 0) {
      return;
    }
    FUN_010b4e04();
    param_2 = extraout_x1_00;
    puVar7 = extraout_x8_00;
    uVar9 = extraout_x9_00;
  case 0x19:
    if (uVar9 != 0) {
      lVar2 = *(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f);
      if ((uVar9 < 0x10) ||
         ((puVar7 < (undefined2 *)(lVar2 + param_5) &&
          ((undefined2 *)(lVar2 + param_4) < puVar7 + uVar9)))) {
        uVar14 = 0;
      }
      else {
        uVar14 = uVar9 & 0xfffffffffffffff0;
        puVar15 = (undefined8 *)(param_4 + lVar2 + 8);
        puVar19 = (ulong *)(puVar7 + 8);
        uVar20 = uVar14;
        do {
          uVar24 = puVar15[-1];
          uVar26 = *puVar15;
          puVar15 = puVar15 + 2;
          uVar20 = uVar20 - 0x10;
          puVar19[-1] = (ulong)CONCAT16((char)((ulong)uVar24 >> 0x38),
                                        (uint6)CONCAT14((char)((ulong)uVar24 >> 0x30),
                                                        (uint)CONCAT12((char)((ulong)uVar24 >> 0x28)
                                                                       ,(ushort)(byte)((ulong)uVar24
                                                                                      >> 0x20))));
          puVar19[-2] = (ulong)CONCAT16((char)((ulong)uVar24 >> 0x18),
                                        (uint6)CONCAT14((char)((ulong)uVar24 >> 0x10),
                                                        (uint)(CONCAT12((char)((ulong)uVar24 >> 8),
                                                                        (short)uVar24) & 0xff00ff)))
          ;
          puVar19[1] = (ulong)CONCAT16((char)((ulong)uVar26 >> 0x38),
                                       (uint6)CONCAT14((char)((ulong)uVar26 >> 0x30),
                                                       (uint)CONCAT12((char)((ulong)uVar26 >> 0x28),
                                                                      (ushort)(byte)((ulong)uVar26
                                                                                    >> 0x20))));
          *puVar19 = (ulong)CONCAT16((char)((ulong)uVar26 >> 0x18),
                                     (uint6)CONCAT14((char)((ulong)uVar26 >> 0x10),
                                                     (uint)(CONCAT12((char)((ulong)uVar26 >> 8),
                                                                     (short)uVar26) & 0xff00ff)));
          puVar19 = puVar19 + 4;
        } while (uVar20 != 0);
        if (uVar9 == uVar14) {
          return;
        }
      }
      param_5 = (uVar14 + param_4) - param_5;
      puVar8 = puVar7 + uVar14;
      pbVar13 = (byte *)(lVar2 + uVar14 + param_4);
      do {
        bVar5 = param_5 != -1;
        param_5 = param_5 + 1;
        *puVar8 = (ushort)*pbVar13;
        puVar8 = puVar8 + 1;
        pbVar13 = pbVar13 + 1;
      } while (bVar5);
    }
  }
  return;
}

