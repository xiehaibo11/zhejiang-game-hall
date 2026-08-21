
void FUN_010b228c(undefined8 param_1,ulong param_2,ulong param_3,long param_4,long param_5)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  bool bVar5;
  ulong extraout_x1;
  ulong extraout_x1_00;
  undefined1 *extraout_x8;
  undefined1 *puVar6;
  undefined1 *extraout_x8_00;
  ulong uVar7;
  ulong extraout_x9;
  ulong extraout_x9_00;
  undefined4 *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  double *pdVar12;
  float *pfVar13;
  undefined8 *puVar14;
  ulong uVar15;
  int iVar16;
  int iVar17;
  double dVar18;
  undefined8 uVar19;
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
  uVar2 = (uint)(*(byte *)((param_2 & 0xffffffff00000000 | 10) + (ulong)*(uint *)(param_2 - 1)) >> 3
                );
  if (10 < uVar2 - 0x11) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  uVar7 = param_5 - param_4;
  puVar6 = (undefined1 *)(*(long *)(param_3 + 0x27) + (ulong)*(uint *)(param_3 + 0x2f));
  switch(uVar2) {
  case 0x11:
    if (uVar7 != 0) {
      lVar1 = *(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f);
      if ((uVar7 < 0x20) ||
         ((puVar6 < (undefined1 *)(lVar1 + param_5) &&
          ((undefined1 *)(lVar1 + param_4) < puVar6 + uVar7)))) {
        uVar10 = 0;
      }
      else {
        uVar10 = uVar7 & 0xffffffffffffffe0;
        puVar11 = (undefined8 *)(param_4 + lVar1 + 0x10);
        puVar14 = (undefined8 *)(puVar6 + 0x10);
        uVar15 = uVar10;
        do {
          puVar3 = puVar11 + -1;
          uVar19 = puVar11[-2];
          uVar22 = puVar11[1];
          uVar20 = *puVar11;
          puVar11 = puVar11 + 4;
          uVar15 = uVar15 - 0x20;
          puVar14[-1] = *puVar3;
          puVar14[-2] = uVar19;
          puVar14[1] = uVar22;
          *puVar14 = uVar20;
          puVar14 = puVar14 + 4;
        } while (uVar15 != 0);
        if (uVar7 == uVar10) {
          return;
        }
      }
      param_5 = (uVar10 + param_4) - param_5;
      puVar6 = puVar6 + uVar10;
      puVar9 = (undefined1 *)(lVar1 + uVar10 + param_4);
      do {
        bVar5 = param_5 != -1;
        param_5 = param_5 + 1;
        *puVar6 = *puVar9;
        puVar6 = puVar6 + 1;
        puVar9 = puVar9 + 1;
      } while (bVar5);
    }
    break;
  case 0x12:
    if (uVar7 != 0) {
      lVar1 = *(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f);
      if ((uVar7 < 0x20) ||
         ((puVar6 < (undefined1 *)(lVar1 + param_5) &&
          ((undefined1 *)(lVar1 + param_4) < puVar6 + uVar7)))) {
        uVar10 = 0;
      }
      else {
        uVar10 = uVar7 & 0xffffffffffffffe0;
        puVar11 = (undefined8 *)(param_4 + lVar1 + 0x10);
        puVar14 = (undefined8 *)(puVar6 + 0x10);
        uVar15 = uVar10;
        do {
          puVar3 = puVar11 + -1;
          uVar19 = puVar11[-2];
          uVar22 = puVar11[1];
          uVar20 = *puVar11;
          puVar11 = puVar11 + 4;
          uVar15 = uVar15 - 0x20;
          puVar14[-1] = *puVar3;
          puVar14[-2] = uVar19;
          puVar14[1] = uVar22;
          *puVar14 = uVar20;
          puVar14 = puVar14 + 4;
        } while (uVar15 != 0);
        if (uVar7 == uVar10) {
          return;
        }
      }
      param_5 = (uVar10 + param_4) - param_5;
      puVar6 = puVar6 + uVar10;
      puVar9 = (undefined1 *)(lVar1 + uVar10 + param_4);
      do {
        bVar5 = param_5 != -1;
        param_5 = param_5 + 1;
        *puVar6 = *puVar9;
        puVar6 = puVar6 + 1;
        puVar9 = puVar9 + 1;
      } while (bVar5);
    }
    break;
  case 0x14:
    if (uVar7 != 0) {
      lVar1 = *(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f);
      if ((uVar7 < 0x10) ||
         ((puVar6 < (undefined1 *)(lVar1 + param_5 * 2) &&
          ((undefined1 *)(lVar1 + param_4 * 2) < puVar6 + uVar7)))) {
        uVar10 = 0;
      }
      else {
        uVar10 = uVar7 & 0xfffffffffffffff0;
        puVar11 = (undefined8 *)(lVar1 + param_4 * 2 + 0x10);
        puVar14 = (undefined8 *)(puVar6 + 8);
        uVar15 = uVar10;
        do {
          uVar20 = puVar11[-1];
          uVar19 = puVar11[-2];
          uVar23 = puVar11[1];
          uVar22 = *puVar11;
          puVar11 = puVar11 + 4;
          uVar15 = uVar15 - 0x10;
          puVar14[-1] = CONCAT17((char)((ulong)uVar20 >> 0x30),
                                 CONCAT16((char)((ulong)uVar20 >> 0x20),
                                          CONCAT15((char)((ulong)uVar20 >> 0x10),
                                                   CONCAT14((char)uVar20,
                                                            CONCAT13((char)((ulong)uVar19 >> 0x30),
                                                                     CONCAT12((char)((ulong)uVar19
                                                                                    >> 0x20),
                                                                              CONCAT11((char)((ulong
                                                  )uVar19 >> 0x10),(char)uVar19)))))));
          *puVar14 = CONCAT17((char)((ulong)uVar23 >> 0x30),
                              CONCAT16((char)((ulong)uVar23 >> 0x20),
                                       CONCAT15((char)((ulong)uVar23 >> 0x10),
                                                CONCAT14((char)uVar23,
                                                         CONCAT13((char)((ulong)uVar22 >> 0x30),
                                                                  CONCAT12((char)((ulong)uVar22 >>
                                                                                 0x20),
                                                                           CONCAT11((char)((ulong)
                                                  uVar22 >> 0x10),(char)uVar22)))))));
          puVar14 = puVar14 + 2;
        } while (uVar15 != 0);
        if (uVar7 == uVar10) {
          return;
        }
      }
      param_5 = (uVar10 + param_4) - param_5;
      puVar6 = puVar6 + uVar10;
      puVar9 = (undefined1 *)(lVar1 + (uVar10 + param_4) * 2);
      do {
        bVar5 = param_5 != -1;
        param_5 = param_5 + 1;
        *puVar6 = *puVar9;
        puVar6 = puVar6 + 1;
        puVar9 = puVar9 + 2;
      } while (bVar5);
    }
    break;
  case 0x15:
    if (uVar7 != 0) {
      lVar1 = *(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f);
      if ((uVar7 < 8) ||
         ((puVar6 < (undefined1 *)(lVar1 + param_5 * 4) &&
          ((undefined1 *)(lVar1 + param_4 * 4) < puVar6 + uVar7)))) {
        uVar10 = 0;
      }
      else {
        uVar10 = uVar7 & 0xfffffffffffffff8;
        puVar11 = (undefined8 *)(lVar1 + param_4 * 4 + 0x10);
        puVar9 = puVar6 + 4;
        uVar15 = uVar10;
        do {
          puVar14 = puVar11 + -2;
          puVar3 = puVar11 + -1;
          puVar4 = puVar11 + 1;
          uVar19 = *puVar11;
          puVar11 = puVar11 + 4;
          uVar15 = uVar15 - 8;
          *(ulong *)(puVar9 + -4) =
               CONCAT44(CONCAT13((char)((ulong)*puVar4 >> 0x20),
                                 CONCAT12((char)*puVar4,
                                          CONCAT11((char)((ulong)uVar19 >> 0x20),(char)uVar19))),
                        CONCAT13((char)((ulong)*puVar3 >> 0x20),
                                 CONCAT12((char)*puVar3,
                                          CONCAT11((char)((ulong)*puVar14 >> 0x20),(char)*puVar14)))
                       );
          puVar9 = puVar9 + 8;
        } while (uVar15 != 0);
        if (uVar7 == uVar10) {
          return;
        }
      }
      param_5 = (uVar10 + param_4) - param_5;
      puVar6 = puVar6 + uVar10;
      puVar8 = (undefined4 *)(lVar1 + (uVar10 + param_4) * 4);
      do {
        bVar5 = param_5 != -1;
        param_5 = param_5 + 1;
        *puVar6 = (char)*puVar8;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      } while (bVar5);
    }
    break;
  case 0x16:
    if (uVar7 != 0) {
      lVar1 = *(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f);
      if ((uVar7 < 8) ||
         ((puVar6 < (undefined1 *)(lVar1 + param_5 * 4) &&
          ((undefined1 *)(lVar1 + param_4 * 4) < puVar6 + uVar7)))) {
        uVar10 = 0;
      }
      else {
        uVar10 = uVar7 & 0xfffffffffffffff8;
        puVar11 = (undefined8 *)(lVar1 + param_4 * 4 + 0x10);
        puVar9 = puVar6 + 4;
        uVar15 = uVar10;
        do {
          puVar14 = puVar11 + -2;
          puVar3 = puVar11 + -1;
          puVar4 = puVar11 + 1;
          uVar19 = *puVar11;
          puVar11 = puVar11 + 4;
          uVar15 = uVar15 - 8;
          *(ulong *)(puVar9 + -4) =
               CONCAT44(CONCAT13((char)((ulong)*puVar4 >> 0x20),
                                 CONCAT12((char)*puVar4,
                                          CONCAT11((char)((ulong)uVar19 >> 0x20),(char)uVar19))),
                        CONCAT13((char)((ulong)*puVar3 >> 0x20),
                                 CONCAT12((char)*puVar3,
                                          CONCAT11((char)((ulong)*puVar14 >> 0x20),(char)*puVar14)))
                       );
          puVar9 = puVar9 + 8;
        } while (uVar15 != 0);
        if (uVar7 == uVar10) {
          return;
        }
      }
      param_5 = (uVar10 + param_4) - param_5;
      puVar6 = puVar6 + uVar10;
      puVar8 = (undefined4 *)(lVar1 + (uVar10 + param_4) * 4);
      do {
        bVar5 = param_5 != -1;
        param_5 = param_5 + 1;
        *puVar6 = (char)*puVar8;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      } while (bVar5);
    }
    break;
  case 0x17:
    if (uVar7 != 0) {
      pfVar13 = (float *)(*(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f) + param_4 * 4
                         );
      do {
        fVar21 = *pfVar13;
        dVar18 = (double)fVar21;
        if (((fVar21 < -2.1474836e+09) || (2147483647.0 < dVar18)) ||
           ((ABS(dVar18) == INFINITY ||
            ((NAN(ABS(dVar18)) || (iVar16 = (int)fVar21, (double)(int)fVar21 != dVar18)))))) {
          uVar2 = 0xfffffbce;
          if (((ulong)dVar18 & 0x7ff0000000000000) != 0) {
            uVar2 = ((uint)((ulong)dVar18 >> 0x34) & 0x7ff) - 0x433;
          }
          if ((int)uVar2 < 0) {
            if ((int)uVar2 < -0x34) goto LAB_010b2658;
            uVar10 = (ulong)dVar18 & 0xfffffffffffff;
            if (((ulong)dVar18 & 0x7ff0000000000000) != 0) {
              uVar10 = (ulong)dVar18 & 0xfffffffffffff | 0x10000000000000;
            }
            iVar17 = (int)(uVar10 >> ((ulong)-uVar2 & 0x3f));
          }
          else {
            if (0x1f < (int)uVar2) {
LAB_010b2658:
              iVar16 = 0;
              goto LAB_010b265c;
            }
            uVar10 = (ulong)dVar18 & 0xfffffffffffff;
            if (((ulong)dVar18 & 0x7ff0000000000000) != 0) {
              uVar10 = (ulong)dVar18 & 0xfffffffffffff | 0x10000000000000;
            }
            iVar17 = (int)(uVar10 << ((ulong)uVar2 & 0x3f));
          }
          iVar16 = -iVar17;
          if (-1 < (long)dVar18) {
            iVar16 = iVar17;
          }
        }
LAB_010b265c:
        *puVar6 = (char)iVar16;
        uVar7 = uVar7 - 1;
        pfVar13 = pfVar13 + 1;
        puVar6 = puVar6 + 1;
      } while (uVar7 != 0);
    }
    break;
  case 0x18:
    if (uVar7 != 0) {
      pdVar12 = (double *)
                (*(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f) + param_4 * 8);
      do {
        dVar18 = *pdVar12;
        if ((((dVar18 < -2147483648.0) || (2147483647.0 < dVar18)) || (ABS(dVar18) == INFINITY)) ||
           ((NAN(ABS(dVar18)) || (iVar16 = (int)dVar18, dVar18 != (double)(int)dVar18)))) {
          uVar2 = 0xfffffbce;
          if (((ulong)dVar18 & 0x7ff0000000000000) != 0) {
            uVar2 = ((uint)((ulong)dVar18 >> 0x34) & 0x7ff) - 0x433;
          }
          if ((int)uVar2 < 0) {
            if ((int)uVar2 < -0x34) goto LAB_010b24a8;
            uVar10 = (ulong)dVar18 & 0xfffffffffffff;
            if (((ulong)dVar18 & 0x7ff0000000000000) != 0) {
              uVar10 = (ulong)dVar18 & 0xfffffffffffff | 0x10000000000000;
            }
            iVar17 = (int)(uVar10 >> ((ulong)-uVar2 & 0x3f));
          }
          else {
            if (0x1f < (int)uVar2) {
LAB_010b24a8:
              iVar16 = 0;
              goto LAB_010b24ac;
            }
            uVar10 = (ulong)dVar18 & 0xfffffffffffff;
            if (((ulong)dVar18 & 0x7ff0000000000000) != 0) {
              uVar10 = (ulong)dVar18 & 0xfffffffffffff | 0x10000000000000;
            }
            iVar17 = (int)(uVar10 << ((ulong)uVar2 & 0x3f));
          }
          iVar16 = -iVar17;
          if (-1 < (long)dVar18) {
            iVar16 = iVar17;
          }
        }
LAB_010b24ac:
        *puVar6 = (char)iVar16;
        uVar7 = uVar7 - 1;
        pdVar12 = pdVar12 + 1;
        puVar6 = puVar6 + 1;
      } while (uVar7 != 0);
    }
    break;
  case 0x1a:
    if (uVar7 == 0) {
      return;
    }
    FUN_010b2c50();
    param_2 = extraout_x1;
    puVar6 = extraout_x8;
    uVar7 = extraout_x9;
  case 0x13:
    if (uVar7 != 0) {
      lVar1 = *(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f);
      if ((uVar7 < 0x10) ||
         ((puVar6 < (undefined1 *)(lVar1 + param_5 * 2) &&
          ((undefined1 *)(lVar1 + param_4 * 2) < puVar6 + uVar7)))) {
        uVar10 = 0;
      }
      else {
        uVar10 = uVar7 & 0xfffffffffffffff0;
        puVar11 = (undefined8 *)(lVar1 + param_4 * 2 + 0x10);
        puVar14 = (undefined8 *)(puVar6 + 8);
        uVar15 = uVar10;
        do {
          uVar20 = puVar11[-1];
          uVar19 = puVar11[-2];
          uVar23 = puVar11[1];
          uVar22 = *puVar11;
          puVar11 = puVar11 + 4;
          uVar15 = uVar15 - 0x10;
          puVar14[-1] = CONCAT17((char)((ulong)uVar20 >> 0x30),
                                 CONCAT16((char)((ulong)uVar20 >> 0x20),
                                          CONCAT15((char)((ulong)uVar20 >> 0x10),
                                                   CONCAT14((char)uVar20,
                                                            CONCAT13((char)((ulong)uVar19 >> 0x30),
                                                                     CONCAT12((char)((ulong)uVar19
                                                                                    >> 0x20),
                                                                              CONCAT11((char)((ulong
                                                  )uVar19 >> 0x10),(char)uVar19)))))));
          *puVar14 = CONCAT17((char)((ulong)uVar23 >> 0x30),
                              CONCAT16((char)((ulong)uVar23 >> 0x20),
                                       CONCAT15((char)((ulong)uVar23 >> 0x10),
                                                CONCAT14((char)uVar23,
                                                         CONCAT13((char)((ulong)uVar22 >> 0x30),
                                                                  CONCAT12((char)((ulong)uVar22 >>
                                                                                 0x20),
                                                                           CONCAT11((char)((ulong)
                                                  uVar22 >> 0x10),(char)uVar22)))))));
          puVar14 = puVar14 + 2;
        } while (uVar15 != 0);
        if (uVar7 == uVar10) {
          return;
        }
      }
      param_5 = (uVar10 + param_4) - param_5;
      puVar6 = puVar6 + uVar10;
      puVar9 = (undefined1 *)(lVar1 + (uVar10 + param_4) * 2);
      do {
        bVar5 = param_5 != -1;
        param_5 = param_5 + 1;
        *puVar6 = *puVar9;
        puVar6 = puVar6 + 1;
        puVar9 = puVar9 + 2;
      } while (bVar5);
    }
    break;
  case 0x1b:
    if (uVar7 == 0) {
      return;
    }
    FUN_010b2c64();
    param_2 = extraout_x1_00;
    puVar6 = extraout_x8_00;
    uVar7 = extraout_x9_00;
  case 0x19:
    if (uVar7 != 0) {
      lVar1 = *(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f);
      if ((uVar7 < 0x20) ||
         ((puVar6 < (undefined1 *)(lVar1 + param_5) &&
          ((undefined1 *)(lVar1 + param_4) < puVar6 + uVar7)))) {
        uVar10 = 0;
      }
      else {
        uVar10 = uVar7 & 0xffffffffffffffe0;
        puVar11 = (undefined8 *)(param_4 + lVar1 + 0x10);
        puVar14 = (undefined8 *)(puVar6 + 0x10);
        uVar15 = uVar10;
        do {
          puVar3 = puVar11 + -1;
          uVar19 = puVar11[-2];
          uVar22 = puVar11[1];
          uVar20 = *puVar11;
          puVar11 = puVar11 + 4;
          uVar15 = uVar15 - 0x20;
          puVar14[-1] = *puVar3;
          puVar14[-2] = uVar19;
          puVar14[1] = uVar22;
          *puVar14 = uVar20;
          puVar14 = puVar14 + 4;
        } while (uVar15 != 0);
        if (uVar7 == uVar10) {
          return;
        }
      }
      param_5 = (uVar10 + param_4) - param_5;
      puVar6 = puVar6 + uVar10;
      puVar9 = (undefined1 *)(lVar1 + uVar10 + param_4);
      do {
        bVar5 = param_5 != -1;
        param_5 = param_5 + 1;
        *puVar6 = *puVar9;
        puVar6 = puVar6 + 1;
        puVar9 = puVar9 + 1;
      } while (bVar5);
    }
  }
  return;
}

