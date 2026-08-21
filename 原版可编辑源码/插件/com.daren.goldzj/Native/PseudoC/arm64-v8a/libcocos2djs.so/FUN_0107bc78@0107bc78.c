
void FUN_0107bc78(ulong param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  uint uVar2;
  double *pdVar3;
  double *pdVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  double *pdVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  double *pdVar14;
  ulong uVar15;
  double *__dest;
  double *__src;
  ulong uVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  double dVar20;
  double dVar21;
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
  iVar5 = v8::internal::JSTypedArray::type((JSTypedArray *)&local_48);
  iVar6 = v8::internal::JSTypedArray::type((JSTypedArray *)&local_50);
  lVar7 = v8::internal::JSTypedArray::element_size((JSTypedArray *)&local_48);
  lVar8 = v8::internal::JSTypedArray::element_size((JSTypedArray *)&local_50);
  __src = (double *)(*(long *)(local_48 + 0x27) + (ulong)*(uint *)(local_48 + 0x2f));
  uVar1 = *(long *)(local_50 + 0x27) + (ulong)*(uint *)(local_50 + 0x2f);
  if ((iVar5 == iVar6) || (lVar7 == lVar8 && (2 < iVar5 - 7U && 2 < iVar6 - 7U))) {
    lVar7 = v8::internal::JSTypedArray::element_size((JSTypedArray *)&local_48);
    memmove((void *)(uVar1 + lVar7 * param_4),__src,lVar7 * param_3);
    return;
  }
  uVar16 = *(ulong *)(local_48 + 0x17);
  __dest = (double *)0x0;
  if ((uVar1 < (long)__src + uVar16) && (__src < (double *)(uVar1 + *(long *)(local_50 + 0x17)))) {
    __dest = operator_new__(uVar16);
    memcpy(__dest,__src,uVar16);
    __src = __dest;
  }
  switch(*(byte *)((local_48 & 0xffffffff00000000 | 10) + (ulong)*(uint *)(local_48 - 1)) >> 3) {
  case 0x11:
    if (param_3 != 0) {
      if ((param_3 < 0x20) ||
         ((uVar1 + param_4 < (long)__src + param_3 &&
          (__src < (double *)(uVar1 + param_4 + param_3))))) {
        uVar16 = 0;
      }
      else {
        uVar16 = param_3 & 0xffffffffffffffe0;
        pdVar11 = __src + 2;
        pdVar14 = (double *)(param_4 + uVar1 + 0x10);
        uVar15 = uVar16;
        do {
          pdVar3 = pdVar11 + -1;
          dVar17 = pdVar11[-2];
          dVar20 = pdVar11[1];
          dVar18 = *pdVar11;
          pdVar11 = pdVar11 + 4;
          uVar15 = uVar15 - 0x20;
          pdVar14[-1] = *pdVar3;
          pdVar14[-2] = dVar17;
          pdVar14[1] = dVar20;
          *pdVar14 = dVar18;
          pdVar14 = pdVar14 + 4;
        } while (uVar15 != 0);
        if (uVar16 == param_3) break;
      }
      lVar7 = param_3 - uVar16;
      puVar10 = (undefined1 *)((long)__src + uVar16);
      puVar12 = (undefined1 *)(uVar1 + uVar16 + param_4);
      do {
        lVar7 = lVar7 + -1;
        *puVar12 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar12 = puVar12 + 1;
      } while (lVar7 != 0);
    }
    break;
  case 0x12:
    if (param_3 != 0) {
      if ((param_3 < 0x20) ||
         ((uVar1 + param_4 < (long)__src + param_3 &&
          (__src < (double *)(uVar1 + param_4 + param_3))))) {
        uVar16 = 0;
      }
      else {
        uVar16 = param_3 & 0xffffffffffffffe0;
        pdVar11 = __src + 2;
        pdVar14 = (double *)(param_4 + uVar1 + 0x10);
        uVar15 = uVar16;
        do {
          pdVar3 = pdVar11 + -1;
          dVar17 = pdVar11[-2];
          dVar20 = pdVar11[1];
          dVar18 = *pdVar11;
          pdVar11 = pdVar11 + 4;
          uVar15 = uVar15 - 0x20;
          pdVar14[-1] = *pdVar3;
          pdVar14[-2] = dVar17;
          pdVar14[1] = dVar20;
          *pdVar14 = dVar18;
          pdVar14 = pdVar14 + 4;
        } while (uVar15 != 0);
        if (uVar16 == param_3) break;
      }
      lVar7 = param_3 - uVar16;
      puVar10 = (undefined1 *)((long)__src + uVar16);
      puVar12 = (undefined1 *)(uVar1 + uVar16 + param_4);
      do {
        lVar7 = lVar7 + -1;
        *puVar12 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar12 = puVar12 + 1;
      } while (lVar7 != 0);
    }
    break;
  case 0x13:
    goto switchD_0107bdb8_caseD_13;
  case 0x14:
    if (param_3 != 0) {
      if ((param_3 < 0x10) ||
         (((void *)(uVar1 + param_4) < (void *)((long)__src + param_3 * 2) &&
          (__src < (double *)(uVar1 + param_4 + param_3))))) {
        uVar16 = 0;
      }
      else {
        uVar16 = param_3 & 0xfffffffffffffff0;
        pdVar11 = __src + 2;
        puVar13 = (undefined8 *)(param_4 + uVar1 + 8);
        uVar15 = uVar16;
        do {
          dVar18 = pdVar11[-1];
          dVar17 = pdVar11[-2];
          dVar21 = pdVar11[1];
          dVar20 = *pdVar11;
          pdVar11 = pdVar11 + 4;
          uVar15 = uVar15 - 0x10;
          puVar13[-1] = CONCAT17((char)((ulong)dVar18 >> 0x30),
                                 CONCAT16((char)((ulong)dVar18 >> 0x20),
                                          CONCAT15((char)((ulong)dVar18 >> 0x10),
                                                   CONCAT14(SUB81(dVar18,0),
                                                            CONCAT13((char)((ulong)dVar17 >> 0x30),
                                                                     CONCAT12((char)((ulong)dVar17
                                                                                    >> 0x20),
                                                                              CONCAT11((char)((ulong
                                                  )dVar17 >> 0x10),SUB81(dVar17,0))))))));
          *puVar13 = CONCAT17((char)((ulong)dVar21 >> 0x30),
                              CONCAT16((char)((ulong)dVar21 >> 0x20),
                                       CONCAT15((char)((ulong)dVar21 >> 0x10),
                                                CONCAT14(SUB81(dVar21,0),
                                                         CONCAT13((char)((ulong)dVar20 >> 0x30),
                                                                  CONCAT12((char)((ulong)dVar20 >>
                                                                                 0x20),
                                                                           CONCAT11((char)((ulong)
                                                  dVar20 >> 0x10),SUB81(dVar20,0))))))));
          puVar13 = puVar13 + 2;
        } while (uVar15 != 0);
        if (uVar16 == param_3) break;
      }
      lVar7 = param_3 - uVar16;
      puVar10 = (undefined1 *)((long)__src + uVar16 * 2);
      puVar12 = (undefined1 *)(uVar1 + uVar16 + param_4);
      do {
        lVar7 = lVar7 + -1;
        *puVar12 = *puVar10;
        puVar10 = puVar10 + 2;
        puVar12 = puVar12 + 1;
      } while (lVar7 != 0);
    }
    break;
  case 0x15:
    if (param_3 != 0) {
      if ((param_3 < 8) ||
         (((void *)(uVar1 + param_4) < (void *)((long)__src + param_3 * 4) &&
          (__src < (double *)(uVar1 + param_4 + param_3))))) {
        uVar16 = 0;
      }
      else {
        uVar16 = param_3 & 0xfffffffffffffff8;
        pdVar11 = __src + 2;
        lVar7 = param_4 + uVar1 + 4;
        uVar15 = uVar16;
        do {
          pdVar14 = pdVar11 + -2;
          pdVar3 = pdVar11 + -1;
          pdVar4 = pdVar11 + 1;
          dVar17 = *pdVar11;
          pdVar11 = pdVar11 + 4;
          uVar15 = uVar15 - 8;
          *(ulong *)(lVar7 + -4) =
               CONCAT44(CONCAT13((char)((ulong)*pdVar4 >> 0x20),
                                 CONCAT12(SUB81(*pdVar4,0),
                                          CONCAT11((char)((ulong)dVar17 >> 0x20),SUB81(dVar17,0)))),
                        CONCAT13((char)((ulong)*pdVar3 >> 0x20),
                                 CONCAT12(SUB81(*pdVar3,0),
                                          CONCAT11((char)((ulong)*pdVar14 >> 0x20),SUB81(*pdVar14,0)
                                                  ))));
          lVar7 = lVar7 + 8;
        } while (uVar15 != 0);
        if (uVar16 == param_3) break;
      }
      lVar7 = param_3 - uVar16;
      puVar9 = (undefined4 *)((long)__src + uVar16 * 4);
      puVar10 = (undefined1 *)(uVar1 + uVar16 + param_4);
      do {
        lVar7 = lVar7 + -1;
        *puVar10 = (char)*puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      } while (lVar7 != 0);
    }
    break;
  case 0x16:
    if (param_3 != 0) {
      if ((param_3 < 8) ||
         (((void *)(uVar1 + param_4) < (void *)((long)__src + param_3 * 4) &&
          (__src < (double *)(uVar1 + param_4 + param_3))))) {
        uVar16 = 0;
      }
      else {
        uVar16 = param_3 & 0xfffffffffffffff8;
        pdVar11 = __src + 2;
        lVar7 = param_4 + uVar1 + 4;
        uVar15 = uVar16;
        do {
          pdVar14 = pdVar11 + -2;
          pdVar3 = pdVar11 + -1;
          pdVar4 = pdVar11 + 1;
          dVar17 = *pdVar11;
          pdVar11 = pdVar11 + 4;
          uVar15 = uVar15 - 8;
          *(ulong *)(lVar7 + -4) =
               CONCAT44(CONCAT13((char)((ulong)*pdVar4 >> 0x20),
                                 CONCAT12(SUB81(*pdVar4,0),
                                          CONCAT11((char)((ulong)dVar17 >> 0x20),SUB81(dVar17,0)))),
                        CONCAT13((char)((ulong)*pdVar3 >> 0x20),
                                 CONCAT12(SUB81(*pdVar3,0),
                                          CONCAT11((char)((ulong)*pdVar14 >> 0x20),SUB81(*pdVar14,0)
                                                  ))));
          lVar7 = lVar7 + 8;
        } while (uVar15 != 0);
        if (uVar16 == param_3) break;
      }
      lVar7 = param_3 - uVar16;
      puVar9 = (undefined4 *)((long)__src + uVar16 * 4);
      puVar10 = (undefined1 *)(uVar1 + uVar16 + param_4);
      do {
        lVar7 = lVar7 + -1;
        *puVar10 = (char)*puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      } while (lVar7 != 0);
    }
    break;
  case 0x17:
    if (param_3 != 0) {
      puVar10 = (undefined1 *)(uVar1 + param_4);
      do {
        fVar19 = *(float *)__src;
        dVar17 = (double)fVar19;
        if (((fVar19 < -2.1474836e+09) || (2147483647.0 < dVar17)) ||
           ((ABS(dVar17) == INFINITY ||
            ((NAN(ABS(dVar17)) || (iVar5 = (int)fVar19, (double)(int)fVar19 != dVar17)))))) {
          uVar2 = 0xfffffbce;
          if (((ulong)dVar17 & 0x7ff0000000000000) != 0) {
            uVar2 = ((uint)((ulong)dVar17 >> 0x34) & 0x7ff) - 0x433;
          }
          if ((int)uVar2 < 0) {
            if ((int)uVar2 < -0x34) goto LAB_0107c0e8;
            uVar1 = (ulong)dVar17 & 0xfffffffffffff;
            if (((ulong)dVar17 & 0x7ff0000000000000) != 0) {
              uVar1 = (ulong)dVar17 & 0xfffffffffffff | 0x10000000000000;
            }
            iVar6 = (int)(uVar1 >> ((ulong)-uVar2 & 0x3f));
          }
          else {
            if (0x1f < (int)uVar2) {
LAB_0107c0e8:
              iVar5 = 0;
              goto LAB_0107c0ec;
            }
            uVar1 = (ulong)dVar17 & 0xfffffffffffff;
            if (((ulong)dVar17 & 0x7ff0000000000000) != 0) {
              uVar1 = (ulong)dVar17 & 0xfffffffffffff | 0x10000000000000;
            }
            iVar6 = (int)(uVar1 << ((ulong)uVar2 & 0x3f));
          }
          iVar5 = -iVar6;
          if (-1 < (long)dVar17) {
            iVar5 = iVar6;
          }
        }
LAB_0107c0ec:
        *puVar10 = (char)iVar5;
        param_3 = param_3 - 1;
        __src = (double *)((long)__src + 4);
        puVar10 = puVar10 + 1;
      } while (param_3 != 0);
    }
    break;
  case 0x18:
    if (param_3 != 0) {
      puVar10 = (undefined1 *)(uVar1 + param_4);
      do {
        dVar17 = *__src;
        if ((((dVar17 < -2147483648.0) || (2147483647.0 < dVar17)) || (ABS(dVar17) == INFINITY)) ||
           ((NAN(ABS(dVar17)) || (iVar5 = (int)dVar17, dVar17 != (double)(int)dVar17)))) {
          uVar2 = 0xfffffbce;
          if (((ulong)dVar17 & 0x7ff0000000000000) != 0) {
            uVar2 = ((uint)((ulong)dVar17 >> 0x34) & 0x7ff) - 0x433;
          }
          if ((int)uVar2 < 0) {
            if ((int)uVar2 < -0x34) goto LAB_0107bf54;
            uVar1 = (ulong)dVar17 & 0xfffffffffffff;
            if (((ulong)dVar17 & 0x7ff0000000000000) != 0) {
              uVar1 = (ulong)dVar17 & 0xfffffffffffff | 0x10000000000000;
            }
            iVar6 = (int)(uVar1 >> ((ulong)-uVar2 & 0x3f));
          }
          else {
            if (0x1f < (int)uVar2) {
LAB_0107bf54:
              iVar5 = 0;
              goto LAB_0107bf58;
            }
            uVar1 = (ulong)dVar17 & 0xfffffffffffff;
            if (((ulong)dVar17 & 0x7ff0000000000000) != 0) {
              uVar1 = (ulong)dVar17 & 0xfffffffffffff | 0x10000000000000;
            }
            iVar6 = (int)(uVar1 << ((ulong)uVar2 & 0x3f));
          }
          iVar5 = -iVar6;
          if (-1 < (long)dVar17) {
            iVar5 = iVar6;
          }
        }
LAB_0107bf58:
        *puVar10 = (char)iVar5;
        param_3 = param_3 - 1;
        __src = __src + 1;
        puVar10 = puVar10 + 1;
      } while (param_3 != 0);
    }
    break;
  case 0x19:
    goto switchD_0107bdb8_caseD_19;
  case 0x1a:
    if (param_3 == 0) break;
    FUN_010b2c50();
switchD_0107bdb8_caseD_13:
    if (param_3 != 0) {
      if ((param_3 < 0x10) ||
         (((void *)(uVar1 + param_4) < (void *)((long)__src + param_3 * 2) &&
          (__src < (double *)(uVar1 + param_4 + param_3))))) {
        uVar16 = 0;
      }
      else {
        uVar16 = param_3 & 0xfffffffffffffff0;
        pdVar11 = __src + 2;
        puVar13 = (undefined8 *)(param_4 + uVar1 + 8);
        uVar15 = uVar16;
        do {
          dVar18 = pdVar11[-1];
          dVar17 = pdVar11[-2];
          dVar21 = pdVar11[1];
          dVar20 = *pdVar11;
          pdVar11 = pdVar11 + 4;
          uVar15 = uVar15 - 0x10;
          puVar13[-1] = CONCAT17((char)((ulong)dVar18 >> 0x30),
                                 CONCAT16((char)((ulong)dVar18 >> 0x20),
                                          CONCAT15((char)((ulong)dVar18 >> 0x10),
                                                   CONCAT14(SUB81(dVar18,0),
                                                            CONCAT13((char)((ulong)dVar17 >> 0x30),
                                                                     CONCAT12((char)((ulong)dVar17
                                                                                    >> 0x20),
                                                                              CONCAT11((char)((ulong
                                                  )dVar17 >> 0x10),SUB81(dVar17,0))))))));
          *puVar13 = CONCAT17((char)((ulong)dVar21 >> 0x30),
                              CONCAT16((char)((ulong)dVar21 >> 0x20),
                                       CONCAT15((char)((ulong)dVar21 >> 0x10),
                                                CONCAT14(SUB81(dVar21,0),
                                                         CONCAT13((char)((ulong)dVar20 >> 0x30),
                                                                  CONCAT12((char)((ulong)dVar20 >>
                                                                                 0x20),
                                                                           CONCAT11((char)((ulong)
                                                  dVar20 >> 0x10),SUB81(dVar20,0))))))));
          puVar13 = puVar13 + 2;
        } while (uVar15 != 0);
        if (uVar16 == param_3) break;
      }
      lVar7 = param_3 - uVar16;
      puVar10 = (undefined1 *)((long)__src + uVar16 * 2);
      puVar12 = (undefined1 *)(uVar1 + uVar16 + param_4);
      do {
        lVar7 = lVar7 + -1;
        *puVar12 = *puVar10;
        puVar10 = puVar10 + 2;
        puVar12 = puVar12 + 1;
      } while (lVar7 != 0);
    }
    break;
  case 0x1b:
    if (param_3 == 0) break;
    FUN_010b2c64();
switchD_0107bdb8_caseD_19:
    if (param_3 != 0) {
      if ((param_3 < 0x20) ||
         ((uVar1 + param_4 < (long)__src + param_3 &&
          (__src < (double *)(uVar1 + param_4 + param_3))))) {
        uVar16 = 0;
      }
      else {
        uVar16 = param_3 & 0xffffffffffffffe0;
        pdVar11 = __src + 2;
        pdVar14 = (double *)(param_4 + uVar1 + 0x10);
        uVar15 = uVar16;
        do {
          pdVar3 = pdVar11 + -1;
          dVar17 = pdVar11[-2];
          dVar20 = pdVar11[1];
          dVar18 = *pdVar11;
          pdVar11 = pdVar11 + 4;
          uVar15 = uVar15 - 0x20;
          pdVar14[-1] = *pdVar3;
          pdVar14[-2] = dVar17;
          pdVar14[1] = dVar20;
          *pdVar14 = dVar18;
          pdVar14 = pdVar14 + 4;
        } while (uVar15 != 0);
        if (uVar16 == param_3) break;
      }
      lVar7 = param_3 - uVar16;
      puVar10 = (undefined1 *)((long)__src + uVar16);
      puVar12 = (undefined1 *)(uVar1 + uVar16 + param_4);
      do {
        lVar7 = lVar7 + -1;
        *puVar12 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar12 = puVar12 + 1;
      } while (lVar7 != 0);
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

