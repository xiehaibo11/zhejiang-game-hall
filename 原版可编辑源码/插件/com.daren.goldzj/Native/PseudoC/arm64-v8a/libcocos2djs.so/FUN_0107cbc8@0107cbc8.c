
void FUN_0107cbc8(ulong param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  uint uVar2;
  double *pdVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined2 *puVar10;
  byte *pbVar11;
  double *pdVar12;
  undefined2 *puVar13;
  short *psVar14;
  ushort *puVar15;
  double *pdVar16;
  undefined8 *puVar17;
  ulong *puVar18;
  ulong uVar19;
  double *__dest;
  double *__src;
  ulong uVar20;
  double dVar21;
  float fVar22;
  double dVar23;
  double dVar24;
  ulong local_50;
  ulong local_48;
  
  local_50 = param_2;
  local_48 = param_1;
  if ((*(uint *)((param_1 & 0xffffffff00000000 | (ulong)*(uint *)(param_1 + 0xb)) + 0x1b) >> 2 & 1)
      != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!source.WasDetached()");
  }
  if ((*(uint *)((param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 + 0xb)) + 0x1b) >> 2 & 1)
      != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!destination.WasDetached()");
  }
  iVar4 = v8::internal::JSTypedArray::type((JSTypedArray *)&local_48);
  iVar5 = v8::internal::JSTypedArray::type((JSTypedArray *)&local_50);
  lVar6 = v8::internal::JSTypedArray::element_size((JSTypedArray *)&local_48);
  lVar7 = v8::internal::JSTypedArray::element_size((JSTypedArray *)&local_50);
  __src = (double *)(*(long *)(local_48 + 0x27) + (ulong)*(uint *)(local_48 + 0x2f));
  uVar1 = *(long *)(local_50 + 0x27) + (ulong)*(uint *)(local_50 + 0x2f);
  if ((iVar4 == iVar5) || (lVar6 == lVar7 && (2 < iVar4 - 7U && 2 < iVar5 - 7U))) {
    lVar6 = v8::internal::JSTypedArray::element_size((JSTypedArray *)&local_48);
    memmove((void *)(uVar1 + lVar6 * param_4),__src,lVar6 * param_3);
    return;
  }
  uVar20 = *(ulong *)(local_48 + 0x17);
  __dest = (double *)0x0;
  if ((uVar1 < (long)__src + uVar20) && (__src < (double *)(uVar1 + *(long *)(local_50 + 0x17)))) {
    __dest = operator_new__(uVar20);
    memcpy(__dest,__src,uVar20);
    __src = __dest;
  }
  switch(*(byte *)((local_48 & 0xffffffff00000000 | 10) + (ulong)*(uint *)(local_48 - 1)) >> 3) {
  case 0x11:
    if (param_3 != 0) {
      if ((param_3 < 0x10) ||
         ((uVar1 + param_4 * 2 < (long)__src + param_3 &&
          (__src < (double *)(uVar1 + (param_4 + param_3) * 2))))) {
        uVar20 = 0;
      }
      else {
        uVar20 = param_3 & 0xfffffffffffffff0;
        pdVar12 = __src + 1;
        puVar18 = (ulong *)(uVar1 + param_4 * 2 + 0x10);
        uVar19 = uVar20;
        do {
          dVar21 = pdVar12[-1];
          dVar23 = *pdVar12;
          pdVar12 = pdVar12 + 2;
          uVar19 = uVar19 - 0x10;
          puVar18[-1] = (ulong)CONCAT16((char)((ulong)dVar21 >> 0x38),
                                        (uint6)CONCAT14((char)((ulong)dVar21 >> 0x30),
                                                        (uint)CONCAT12((char)((ulong)dVar21 >> 0x28)
                                                                       ,(ushort)(byte)((ulong)dVar21
                                                                                      >> 0x20))));
          puVar18[-2] = (ulong)CONCAT16((char)((ulong)dVar21 >> 0x18),
                                        (uint6)CONCAT14((char)((ulong)dVar21 >> 0x10),
                                                        (uint)(CONCAT12((char)((ulong)dVar21 >> 8),
                                                                        SUB82(dVar21,0)) & 0xff00ff)
                                                       ));
          puVar18[1] = (ulong)CONCAT16((char)((ulong)dVar23 >> 0x38),
                                       (uint6)CONCAT14((char)((ulong)dVar23 >> 0x30),
                                                       (uint)CONCAT12((char)((ulong)dVar23 >> 0x28),
                                                                      (ushort)(byte)((ulong)dVar23
                                                                                    >> 0x20))));
          *puVar18 = (ulong)CONCAT16((char)((ulong)dVar23 >> 0x18),
                                     (uint6)CONCAT14((char)((ulong)dVar23 >> 0x10),
                                                     (uint)(CONCAT12((char)((ulong)dVar23 >> 8),
                                                                     SUB82(dVar23,0)) & 0xff00ff)));
          puVar18 = puVar18 + 4;
        } while (uVar19 != 0);
        if (uVar20 == param_3) break;
      }
      lVar6 = param_3 - uVar20;
      pbVar11 = (byte *)((long)__src + uVar20);
      puVar15 = (ushort *)(uVar1 + (uVar20 + param_4) * 2);
      do {
        lVar6 = lVar6 + -1;
        *puVar15 = (ushort)*pbVar11;
        pbVar11 = pbVar11 + 1;
        puVar15 = puVar15 + 1;
      } while (lVar6 != 0);
    }
    break;
  case 0x12:
    if (param_3 != 0) {
      if ((param_3 < 0x10) ||
         ((uVar1 + param_4 * 2 < (long)__src + param_3 &&
          (__src < (double *)(uVar1 + (param_4 + param_3) * 2))))) {
        uVar20 = 0;
      }
      else {
        uVar20 = param_3 & 0xfffffffffffffff0;
        pdVar12 = __src + 1;
        puVar17 = (undefined8 *)(uVar1 + param_4 * 2 + 0x10);
        uVar19 = uVar20;
        do {
          dVar21 = pdVar12[-1];
          dVar23 = *pdVar12;
          pdVar12 = pdVar12 + 2;
          uVar19 = uVar19 - 0x10;
          puVar17[-1] = CONCAT26((short)(char)((ulong)dVar21 >> 0x38),
                                 CONCAT24((short)(char)((ulong)dVar21 >> 0x30),
                                          CONCAT22((short)(char)((ulong)dVar21 >> 0x28),
                                                   (short)(char)((ulong)dVar21 >> 0x20))));
          puVar17[-2] = CONCAT26((short)(char)((ulong)dVar21 >> 0x18),
                                 CONCAT24((short)(char)((ulong)dVar21 >> 0x10),
                                          CONCAT22((short)(char)((ulong)dVar21 >> 8),
                                                   (short)SUB81(dVar21,0))));
          puVar17[1] = CONCAT26((short)(char)((ulong)dVar23 >> 0x38),
                                CONCAT24((short)(char)((ulong)dVar23 >> 0x30),
                                         CONCAT22((short)(char)((ulong)dVar23 >> 0x28),
                                                  (short)(char)((ulong)dVar23 >> 0x20))));
          *puVar17 = CONCAT26((short)(char)((ulong)dVar23 >> 0x18),
                              CONCAT24((short)(char)((ulong)dVar23 >> 0x10),
                                       CONCAT22((short)(char)((ulong)dVar23 >> 8),
                                                (short)SUB81(dVar23,0))));
          puVar17 = puVar17 + 4;
        } while (uVar19 != 0);
        if (uVar20 == param_3) break;
      }
      lVar6 = param_3 - uVar20;
      pcVar8 = (char *)((long)__src + uVar20);
      psVar14 = (short *)(uVar1 + (uVar20 + param_4) * 2);
      do {
        lVar6 = lVar6 + -1;
        *psVar14 = (short)*pcVar8;
        pcVar8 = pcVar8 + 1;
        psVar14 = psVar14 + 1;
      } while (lVar6 != 0);
    }
    break;
  case 0x13:
    goto switchD_0107cd08_caseD_13;
  case 0x14:
    if (param_3 != 0) {
      if ((param_3 < 0x10) ||
         (((void *)(uVar1 + param_4 * 2) < (void *)((long)__src + param_3 * 2) &&
          (__src < (double *)(uVar1 + (param_4 + param_3) * 2))))) {
        uVar20 = 0;
      }
      else {
        uVar20 = param_3 & 0xfffffffffffffff0;
        pdVar12 = __src + 2;
        pdVar16 = (double *)(uVar1 + param_4 * 2 + 0x10);
        uVar19 = uVar20;
        do {
          pdVar3 = pdVar12 + -1;
          dVar21 = pdVar12[-2];
          dVar24 = pdVar12[1];
          dVar23 = *pdVar12;
          pdVar12 = pdVar12 + 4;
          uVar19 = uVar19 - 0x10;
          pdVar16[-1] = *pdVar3;
          pdVar16[-2] = dVar21;
          pdVar16[1] = dVar24;
          *pdVar16 = dVar23;
          pdVar16 = pdVar16 + 4;
        } while (uVar19 != 0);
        if (uVar20 == param_3) break;
      }
      lVar6 = param_3 - uVar20;
      puVar10 = (undefined2 *)((long)__src + uVar20 * 2);
      puVar13 = (undefined2 *)(uVar1 + (uVar20 + param_4) * 2);
      do {
        lVar6 = lVar6 + -1;
        *puVar13 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar13 = puVar13 + 1;
      } while (lVar6 != 0);
    }
    break;
  case 0x15:
    if (param_3 != 0) {
      if ((param_3 < 8) ||
         (((void *)(uVar1 + param_4 * 2) < (void *)((long)__src + param_3 * 4) &&
          (__src < (double *)(uVar1 + (param_4 + param_3) * 2))))) {
        uVar20 = 0;
      }
      else {
        uVar20 = param_3 & 0xfffffffffffffff8;
        pdVar12 = __src + 2;
        puVar17 = (undefined8 *)(uVar1 + param_4 * 2 + 8);
        uVar19 = uVar20;
        do {
          pdVar16 = pdVar12 + -2;
          pdVar3 = pdVar12 + -1;
          dVar23 = pdVar12[1];
          dVar21 = *pdVar12;
          pdVar12 = pdVar12 + 4;
          uVar19 = uVar19 - 8;
          puVar17[-1] = CONCAT26((short)((ulong)*pdVar3 >> 0x20),
                                 CONCAT24(SUB82(*pdVar3,0),
                                          CONCAT22((short)((ulong)*pdVar16 >> 0x20),
                                                   SUB82(*pdVar16,0))));
          *puVar17 = CONCAT26((short)((ulong)dVar23 >> 0x20),
                              CONCAT24(SUB82(dVar23,0),
                                       CONCAT22((short)((ulong)dVar21 >> 0x20),SUB82(dVar21,0))));
          puVar17 = puVar17 + 2;
        } while (uVar19 != 0);
        if (uVar20 == param_3) break;
      }
      lVar6 = param_3 - uVar20;
      puVar9 = (undefined4 *)((long)__src + uVar20 * 4);
      puVar10 = (undefined2 *)(uVar1 + (uVar20 + param_4) * 2);
      do {
        lVar6 = lVar6 + -1;
        *puVar10 = (short)*puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      } while (lVar6 != 0);
    }
    break;
  case 0x16:
    if (param_3 != 0) {
      if ((param_3 < 8) ||
         (((void *)(uVar1 + param_4 * 2) < (void *)((long)__src + param_3 * 4) &&
          (__src < (double *)(uVar1 + (param_4 + param_3) * 2))))) {
        uVar20 = 0;
      }
      else {
        uVar20 = param_3 & 0xfffffffffffffff8;
        pdVar12 = __src + 2;
        puVar17 = (undefined8 *)(uVar1 + param_4 * 2 + 8);
        uVar19 = uVar20;
        do {
          pdVar16 = pdVar12 + -2;
          pdVar3 = pdVar12 + -1;
          dVar23 = pdVar12[1];
          dVar21 = *pdVar12;
          pdVar12 = pdVar12 + 4;
          uVar19 = uVar19 - 8;
          puVar17[-1] = CONCAT26((short)((ulong)*pdVar3 >> 0x20),
                                 CONCAT24(SUB82(*pdVar3,0),
                                          CONCAT22((short)((ulong)*pdVar16 >> 0x20),
                                                   SUB82(*pdVar16,0))));
          *puVar17 = CONCAT26((short)((ulong)dVar23 >> 0x20),
                              CONCAT24(SUB82(dVar23,0),
                                       CONCAT22((short)((ulong)dVar21 >> 0x20),SUB82(dVar21,0))));
          puVar17 = puVar17 + 2;
        } while (uVar19 != 0);
        if (uVar20 == param_3) break;
      }
      lVar6 = param_3 - uVar20;
      puVar9 = (undefined4 *)((long)__src + uVar20 * 4);
      puVar10 = (undefined2 *)(uVar1 + (uVar20 + param_4) * 2);
      do {
        lVar6 = lVar6 + -1;
        *puVar10 = (short)*puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      } while (lVar6 != 0);
    }
    break;
  case 0x17:
    if (param_3 != 0) {
      puVar10 = (undefined2 *)(uVar1 + param_4 * 2);
      do {
        fVar22 = *(float *)__src;
        dVar21 = (double)fVar22;
        if (((fVar22 < -2.1474836e+09) || (2147483647.0 < dVar21)) ||
           ((ABS(dVar21) == INFINITY ||
            ((NAN(ABS(dVar21)) || (iVar4 = (int)fVar22, (double)(int)fVar22 != dVar21)))))) {
          uVar2 = 0xfffffbce;
          if (((ulong)dVar21 & 0x7ff0000000000000) != 0) {
            uVar2 = ((uint)((ulong)dVar21 >> 0x34) & 0x7ff) - 0x433;
          }
          if ((int)uVar2 < 0) {
            if ((int)uVar2 < -0x34) goto LAB_0107d038;
            uVar1 = (ulong)dVar21 & 0xfffffffffffff;
            if (((ulong)dVar21 & 0x7ff0000000000000) != 0) {
              uVar1 = (ulong)dVar21 & 0xfffffffffffff | 0x10000000000000;
            }
            iVar5 = (int)(uVar1 >> ((ulong)-uVar2 & 0x3f));
          }
          else {
            if (0x1f < (int)uVar2) {
LAB_0107d038:
              iVar4 = 0;
              goto LAB_0107d03c;
            }
            uVar1 = (ulong)dVar21 & 0xfffffffffffff;
            if (((ulong)dVar21 & 0x7ff0000000000000) != 0) {
              uVar1 = (ulong)dVar21 & 0xfffffffffffff | 0x10000000000000;
            }
            iVar5 = (int)(uVar1 << ((ulong)uVar2 & 0x3f));
          }
          iVar4 = -iVar5;
          if (-1 < (long)dVar21) {
            iVar4 = iVar5;
          }
        }
LAB_0107d03c:
        *puVar10 = (short)iVar4;
        param_3 = param_3 - 1;
        __src = (double *)((long)__src + 4);
        puVar10 = puVar10 + 1;
      } while (param_3 != 0);
    }
    break;
  case 0x18:
    if (param_3 != 0) {
      puVar10 = (undefined2 *)(uVar1 + param_4 * 2);
      do {
        dVar21 = *__src;
        if ((((dVar21 < -2147483648.0) || (2147483647.0 < dVar21)) || (ABS(dVar21) == INFINITY)) ||
           ((NAN(ABS(dVar21)) || (iVar4 = (int)dVar21, dVar21 != (double)(int)dVar21)))) {
          uVar2 = 0xfffffbce;
          if (((ulong)dVar21 & 0x7ff0000000000000) != 0) {
            uVar2 = ((uint)((ulong)dVar21 >> 0x34) & 0x7ff) - 0x433;
          }
          if ((int)uVar2 < 0) {
            if ((int)uVar2 < -0x34) goto LAB_0107cea4;
            uVar1 = (ulong)dVar21 & 0xfffffffffffff;
            if (((ulong)dVar21 & 0x7ff0000000000000) != 0) {
              uVar1 = (ulong)dVar21 & 0xfffffffffffff | 0x10000000000000;
            }
            iVar5 = (int)(uVar1 >> ((ulong)-uVar2 & 0x3f));
          }
          else {
            if (0x1f < (int)uVar2) {
LAB_0107cea4:
              iVar4 = 0;
              goto LAB_0107cea8;
            }
            uVar1 = (ulong)dVar21 & 0xfffffffffffff;
            if (((ulong)dVar21 & 0x7ff0000000000000) != 0) {
              uVar1 = (ulong)dVar21 & 0xfffffffffffff | 0x10000000000000;
            }
            iVar5 = (int)(uVar1 << ((ulong)uVar2 & 0x3f));
          }
          iVar4 = -iVar5;
          if (-1 < (long)dVar21) {
            iVar4 = iVar5;
          }
        }
LAB_0107cea8:
        *puVar10 = (short)iVar4;
        param_3 = param_3 - 1;
        __src = __src + 1;
        puVar10 = puVar10 + 1;
      } while (param_3 != 0);
    }
    break;
  case 0x19:
    goto switchD_0107cd08_caseD_19;
  case 0x1a:
    if (param_3 == 0) break;
    FUN_010b6fa8();
switchD_0107cd08_caseD_13:
    if (param_3 != 0) {
      if ((param_3 < 0x10) ||
         (((void *)(uVar1 + param_4 * 2) < (void *)((long)__src + param_3 * 2) &&
          (__src < (double *)(uVar1 + (param_4 + param_3) * 2))))) {
        uVar20 = 0;
      }
      else {
        uVar20 = param_3 & 0xfffffffffffffff0;
        pdVar12 = __src + 2;
        pdVar16 = (double *)(uVar1 + param_4 * 2 + 0x10);
        uVar19 = uVar20;
        do {
          pdVar3 = pdVar12 + -1;
          dVar21 = pdVar12[-2];
          dVar24 = pdVar12[1];
          dVar23 = *pdVar12;
          pdVar12 = pdVar12 + 4;
          uVar19 = uVar19 - 0x10;
          pdVar16[-1] = *pdVar3;
          pdVar16[-2] = dVar21;
          pdVar16[1] = dVar24;
          *pdVar16 = dVar23;
          pdVar16 = pdVar16 + 4;
        } while (uVar19 != 0);
        if (uVar20 == param_3) break;
      }
      lVar6 = param_3 - uVar20;
      puVar10 = (undefined2 *)((long)__src + uVar20 * 2);
      puVar13 = (undefined2 *)(uVar1 + (uVar20 + param_4) * 2);
      do {
        lVar6 = lVar6 + -1;
        *puVar13 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar13 = puVar13 + 1;
      } while (lVar6 != 0);
    }
    break;
  case 0x1b:
    if (param_3 == 0) break;
    FUN_010b6fbc();
switchD_0107cd08_caseD_19:
    if (param_3 != 0) {
      if ((param_3 < 0x10) ||
         ((uVar1 + param_4 * 2 < (long)__src + param_3 &&
          (__src < (double *)(uVar1 + (param_4 + param_3) * 2))))) {
        uVar20 = 0;
      }
      else {
        uVar20 = param_3 & 0xfffffffffffffff0;
        pdVar12 = __src + 1;
        puVar18 = (ulong *)(uVar1 + param_4 * 2 + 0x10);
        uVar19 = uVar20;
        do {
          dVar21 = pdVar12[-1];
          dVar23 = *pdVar12;
          pdVar12 = pdVar12 + 2;
          uVar19 = uVar19 - 0x10;
          puVar18[-1] = (ulong)CONCAT16((char)((ulong)dVar21 >> 0x38),
                                        (uint6)CONCAT14((char)((ulong)dVar21 >> 0x30),
                                                        (uint)CONCAT12((char)((ulong)dVar21 >> 0x28)
                                                                       ,(ushort)(byte)((ulong)dVar21
                                                                                      >> 0x20))));
          puVar18[-2] = (ulong)CONCAT16((char)((ulong)dVar21 >> 0x18),
                                        (uint6)CONCAT14((char)((ulong)dVar21 >> 0x10),
                                                        (uint)(CONCAT12((char)((ulong)dVar21 >> 8),
                                                                        SUB82(dVar21,0)) & 0xff00ff)
                                                       ));
          puVar18[1] = (ulong)CONCAT16((char)((ulong)dVar23 >> 0x38),
                                       (uint6)CONCAT14((char)((ulong)dVar23 >> 0x30),
                                                       (uint)CONCAT12((char)((ulong)dVar23 >> 0x28),
                                                                      (ushort)(byte)((ulong)dVar23
                                                                                    >> 0x20))));
          *puVar18 = (ulong)CONCAT16((char)((ulong)dVar23 >> 0x18),
                                     (uint6)CONCAT14((char)((ulong)dVar23 >> 0x10),
                                                     (uint)(CONCAT12((char)((ulong)dVar23 >> 8),
                                                                     SUB82(dVar23,0)) & 0xff00ff)));
          puVar18 = puVar18 + 4;
        } while (uVar19 != 0);
        if (uVar20 == param_3) break;
      }
      lVar6 = param_3 - uVar20;
      pbVar11 = (byte *)((long)__src + uVar20);
      puVar15 = (ushort *)(uVar1 + (uVar20 + param_4) * 2);
      do {
        lVar6 = lVar6 + -1;
        *puVar15 = (ushort)*pbVar11;
        pbVar11 = pbVar11 + 1;
        puVar15 = puVar15 + 1;
      } while (lVar6 != 0);
    }
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  if (__dest != (double *)0x0) {
    operator_delete__(__dest);
  }
  return;
}

