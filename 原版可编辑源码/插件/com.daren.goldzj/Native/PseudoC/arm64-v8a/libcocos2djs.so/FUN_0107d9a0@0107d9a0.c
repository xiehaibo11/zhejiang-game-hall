
void FUN_0107d9a0(ulong param_1,ulong param_2,ulong param_3,long param_4)

{
  uint uVar1;
  double *pdVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ushort *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint *puVar10;
  double *pdVar11;
  ulong *puVar12;
  double *pdVar13;
  ulong uVar14;
  double *__dest;
  double *__src;
  ulong uVar15;
  double dVar16;
  float fVar17;
  double dVar18;
  double dVar19;
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
  iVar3 = v8::internal::JSTypedArray::type((JSTypedArray *)&local_48);
  iVar4 = v8::internal::JSTypedArray::type((JSTypedArray *)&local_50);
  lVar5 = v8::internal::JSTypedArray::element_size((JSTypedArray *)&local_48);
  lVar6 = v8::internal::JSTypedArray::element_size((JSTypedArray *)&local_50);
  __src = (double *)(*(long *)(local_48 + 0x27) + (ulong)*(uint *)(local_48 + 0x2f));
  pbVar9 = (byte *)(*(long *)(local_50 + 0x27) + (ulong)*(uint *)(local_50 + 0x2f));
  if ((iVar3 == iVar4) || (lVar5 == lVar6 && (2 < iVar3 - 7U && 2 < iVar4 - 7U))) {
    lVar5 = v8::internal::JSTypedArray::element_size((JSTypedArray *)&local_48);
    memmove(pbVar9 + lVar5 * param_4,__src,lVar5 * param_3);
    return;
  }
  uVar15 = *(ulong *)(local_48 + 0x17);
  __dest = (double *)0x0;
  if ((pbVar9 < (byte *)((long)__src + uVar15)) && (__src < pbVar9 + *(long *)(local_50 + 0x17))) {
    __dest = operator_new__(uVar15);
    memcpy(__dest,__src,uVar15);
    __src = __dest;
  }
  switch(*(byte *)((local_48 & 0xffffffff00000000 | 10) + (ulong)*(uint *)(local_48 - 1)) >> 3) {
  case 0x11:
    if (param_3 != 0) {
      puVar10 = (uint *)(pbVar9 + param_4 * 4);
      do {
        param_3 = param_3 - 1;
        *puVar10 = (uint)*(byte *)__src;
        puVar10 = puVar10 + 1;
        __src = (double *)((long)__src + 1);
      } while (param_3 != 0);
    }
    break;
  case 0x12:
    if (param_3 != 0) {
      pbVar9 = pbVar9 + param_4 * 4;
      do {
        param_3 = param_3 - 1;
        *(int *)pbVar9 = (int)(char)*(byte *)__src;
        pbVar9 = pbVar9 + 4;
        __src = (double *)((long)__src + 1);
      } while (param_3 != 0);
    }
    break;
  case 0x13:
    goto switchD_0107dae0_caseD_13;
  case 0x14:
    if (param_3 != 0) {
      if ((param_3 < 8) ||
         ((pbVar9 + param_4 * 4 < (byte *)((long)__src + param_3 * 2) &&
          (__src < pbVar9 + (param_4 + param_3) * 4)))) {
        uVar15 = 0;
      }
      else {
        uVar15 = param_3 & 0xfffffffffffffff8;
        pdVar11 = __src + 1;
        pbVar8 = pbVar9 + param_4 * 4 + 0x10;
        uVar14 = uVar15;
        do {
          dVar16 = pdVar11[-1];
          dVar18 = *pdVar11;
          pdVar11 = pdVar11 + 2;
          uVar14 = uVar14 - 8;
          *(ulong *)(pbVar8 + -8) =
               CONCAT44((int)(short)((ulong)dVar16 >> 0x30),(int)(short)((ulong)dVar16 >> 0x20));
          *(ulong *)(pbVar8 + -0x10) =
               CONCAT44((int)(short)((ulong)dVar16 >> 0x10),(int)SUB82(dVar16,0));
          *(ulong *)(pbVar8 + 8) =
               CONCAT44((int)(short)((ulong)dVar18 >> 0x30),(int)(short)((ulong)dVar18 >> 0x20));
          *(ulong *)pbVar8 = CONCAT44((int)(short)((ulong)dVar18 >> 0x10),(int)SUB82(dVar18,0));
          pbVar8 = pbVar8 + 0x20;
        } while (uVar14 != 0);
        if (uVar15 == param_3) break;
      }
      lVar5 = param_3 - uVar15;
      pbVar8 = (byte *)((long)__src + uVar15 * 2);
      pbVar9 = pbVar9 + (uVar15 + param_4) * 4;
      do {
        lVar5 = lVar5 + -1;
        *(int *)pbVar9 = (int)*(short *)pbVar8;
        pbVar8 = pbVar8 + 2;
        pbVar9 = pbVar9 + 4;
      } while (lVar5 != 0);
    }
    break;
  case 0x15:
    if (param_3 != 0) {
      if ((param_3 < 8) ||
         ((pbVar9 + param_4 * 4 < (byte *)((long)__src + param_3 * 4) &&
          (__src < pbVar9 + (param_4 + param_3) * 4)))) {
        uVar15 = 0;
      }
      else {
        uVar15 = param_3 & 0xfffffffffffffff8;
        pdVar11 = __src + 2;
        pdVar13 = (double *)(pbVar9 + param_4 * 4 + 0x10);
        uVar14 = uVar15;
        do {
          pdVar2 = pdVar11 + -1;
          dVar16 = pdVar11[-2];
          dVar19 = pdVar11[1];
          dVar18 = *pdVar11;
          pdVar11 = pdVar11 + 4;
          uVar14 = uVar14 - 8;
          pdVar13[-1] = *pdVar2;
          pdVar13[-2] = dVar16;
          pdVar13[1] = dVar19;
          *pdVar13 = dVar18;
          pdVar13 = pdVar13 + 4;
        } while (uVar14 != 0);
        if (uVar15 == param_3) break;
      }
      lVar5 = param_3 - uVar15;
      pbVar8 = (byte *)((long)__src + uVar15 * 4);
      pbVar9 = pbVar9 + (uVar15 + param_4) * 4;
      do {
        lVar5 = lVar5 + -1;
        *(undefined4 *)pbVar9 = *(undefined4 *)pbVar8;
        pbVar8 = pbVar8 + 4;
        pbVar9 = pbVar9 + 4;
      } while (lVar5 != 0);
    }
    break;
  case 0x16:
    if (param_3 != 0) {
      if ((param_3 < 8) ||
         ((pbVar9 + param_4 * 4 < (byte *)((long)__src + param_3 * 4) &&
          (__src < pbVar9 + (param_4 + param_3) * 4)))) {
        uVar15 = 0;
      }
      else {
        uVar15 = param_3 & 0xfffffffffffffff8;
        pdVar11 = __src + 2;
        pdVar13 = (double *)(pbVar9 + param_4 * 4 + 0x10);
        uVar14 = uVar15;
        do {
          pdVar2 = pdVar11 + -1;
          dVar16 = pdVar11[-2];
          dVar19 = pdVar11[1];
          dVar18 = *pdVar11;
          pdVar11 = pdVar11 + 4;
          uVar14 = uVar14 - 8;
          pdVar13[-1] = *pdVar2;
          pdVar13[-2] = dVar16;
          pdVar13[1] = dVar19;
          *pdVar13 = dVar18;
          pdVar13 = pdVar13 + 4;
        } while (uVar14 != 0);
        if (uVar15 == param_3) break;
      }
      lVar5 = param_3 - uVar15;
      pbVar8 = (byte *)((long)__src + uVar15 * 4);
      pbVar9 = pbVar9 + (uVar15 + param_4) * 4;
      do {
        lVar5 = lVar5 + -1;
        *(undefined4 *)pbVar9 = *(undefined4 *)pbVar8;
        pbVar8 = pbVar8 + 4;
        pbVar9 = pbVar9 + 4;
      } while (lVar5 != 0);
    }
    break;
  case 0x17:
    if (param_3 != 0) {
      pbVar9 = pbVar9 + param_4 * 4;
      do {
        fVar17 = *(float *)__src;
        dVar16 = (double)fVar17;
        if (((fVar17 < -2.1474836e+09) || (2147483647.0 < dVar16)) ||
           ((ABS(dVar16) == INFINITY ||
            ((NAN(ABS(dVar16)) || (iVar3 = (int)fVar17, (double)(int)fVar17 != dVar16)))))) {
          uVar1 = 0xfffffbce;
          if (((ulong)dVar16 & 0x7ff0000000000000) != 0) {
            uVar1 = ((uint)((ulong)dVar16 >> 0x34) & 0x7ff) - 0x433;
          }
          if ((int)uVar1 < 0) {
            if ((int)uVar1 < -0x34) goto LAB_0107dda0;
            uVar15 = (ulong)dVar16 & 0xfffffffffffff;
            if (((ulong)dVar16 & 0x7ff0000000000000) != 0) {
              uVar15 = (ulong)dVar16 & 0xfffffffffffff | 0x10000000000000;
            }
            iVar4 = (int)(uVar15 >> ((ulong)-uVar1 & 0x3f));
          }
          else {
            if (0x1f < (int)uVar1) {
LAB_0107dda0:
              iVar3 = 0;
              goto LAB_0107dda4;
            }
            uVar15 = (ulong)dVar16 & 0xfffffffffffff;
            if (((ulong)dVar16 & 0x7ff0000000000000) != 0) {
              uVar15 = (ulong)dVar16 & 0xfffffffffffff | 0x10000000000000;
            }
            iVar4 = (int)(uVar15 << ((ulong)uVar1 & 0x3f));
          }
          iVar3 = -iVar4;
          if (-1 < (long)dVar16) {
            iVar3 = iVar4;
          }
        }
LAB_0107dda4:
        *(int *)pbVar9 = iVar3;
        param_3 = param_3 - 1;
        __src = (double *)((long)__src + 4);
        pbVar9 = pbVar9 + 4;
      } while (param_3 != 0);
    }
    break;
  case 0x18:
    if (param_3 != 0) {
      pbVar9 = pbVar9 + param_4 * 4;
      do {
        dVar16 = *__src;
        if ((((dVar16 < -2147483648.0) || (2147483647.0 < dVar16)) || (ABS(dVar16) == INFINITY)) ||
           ((NAN(ABS(dVar16)) || (iVar3 = (int)dVar16, dVar16 != (double)(int)dVar16)))) {
          uVar1 = 0xfffffbce;
          if (((ulong)dVar16 & 0x7ff0000000000000) != 0) {
            uVar1 = ((uint)((ulong)dVar16 >> 0x34) & 0x7ff) - 0x433;
          }
          if ((int)uVar1 < 0) {
            if ((int)uVar1 < -0x34) goto LAB_0107dc44;
            uVar15 = (ulong)dVar16 & 0xfffffffffffff;
            if (((ulong)dVar16 & 0x7ff0000000000000) != 0) {
              uVar15 = (ulong)dVar16 & 0xfffffffffffff | 0x10000000000000;
            }
            iVar4 = (int)(uVar15 >> ((ulong)-uVar1 & 0x3f));
          }
          else {
            if (0x1f < (int)uVar1) {
LAB_0107dc44:
              iVar3 = 0;
              goto LAB_0107dc48;
            }
            uVar15 = (ulong)dVar16 & 0xfffffffffffff;
            if (((ulong)dVar16 & 0x7ff0000000000000) != 0) {
              uVar15 = (ulong)dVar16 & 0xfffffffffffff | 0x10000000000000;
            }
            iVar4 = (int)(uVar15 << ((ulong)uVar1 & 0x3f));
          }
          iVar3 = -iVar4;
          if (-1 < (long)dVar16) {
            iVar3 = iVar4;
          }
        }
LAB_0107dc48:
        *(int *)pbVar9 = iVar3;
        param_3 = param_3 - 1;
        __src = __src + 1;
        pbVar9 = pbVar9 + 4;
      } while (param_3 != 0);
    }
    break;
  case 0x19:
    goto switchD_0107dae0_caseD_19;
  case 0x1a:
    if (param_3 == 0) break;
    FUN_010badd0();
switchD_0107dae0_caseD_13:
    if (param_3 != 0) {
      if ((param_3 < 8) ||
         ((pbVar9 + param_4 * 4 < (byte *)((long)__src + param_3 * 2) &&
          (__src < pbVar9 + (param_4 + param_3) * 4)))) {
        uVar15 = 0;
      }
      else {
        uVar15 = param_3 & 0xfffffffffffffff8;
        pdVar11 = __src + 1;
        puVar12 = (ulong *)(pbVar9 + param_4 * 4 + 0x10);
        uVar14 = uVar15;
        do {
          dVar16 = pdVar11[-1];
          dVar18 = *pdVar11;
          pdVar11 = pdVar11 + 2;
          uVar14 = uVar14 - 8;
          puVar12[-1] = (ulong)CONCAT24((short)((ulong)dVar16 >> 0x30),
                                        (uint)(ushort)((ulong)dVar16 >> 0x20));
          puVar12[-2] = (ulong)(CONCAT24((short)((ulong)dVar16 >> 0x10),SUB84(dVar16,0)) &
                               0xffff0000ffff);
          puVar12[1] = (ulong)CONCAT24((short)((ulong)dVar18 >> 0x30),
                                       (uint)(ushort)((ulong)dVar18 >> 0x20));
          *puVar12 = (ulong)(CONCAT24((short)((ulong)dVar18 >> 0x10),SUB84(dVar18,0)) &
                            0xffff0000ffff);
          puVar12 = puVar12 + 4;
        } while (uVar14 != 0);
        if (uVar15 == param_3) break;
      }
      lVar5 = param_3 - uVar15;
      puVar7 = (ushort *)((long)__src + uVar15 * 2);
      puVar10 = (uint *)(pbVar9 + (uVar15 + param_4) * 4);
      do {
        lVar5 = lVar5 + -1;
        *puVar10 = (uint)*puVar7;
        puVar7 = puVar7 + 1;
        puVar10 = puVar10 + 1;
      } while (lVar5 != 0);
    }
    break;
  case 0x1b:
    if (param_3 == 0) break;
    FUN_010bade4();
    goto switchD_0107dae0_caseD_19;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
LAB_0107de90:
  if (__dest != (double *)0x0) {
    operator_delete__(__dest);
  }
  return;
switchD_0107dae0_caseD_19:
  if (param_3 != 0) {
    puVar10 = (uint *)(pbVar9 + param_4 * 4);
    do {
      param_3 = param_3 - 1;
      *puVar10 = (uint)*(byte *)__src;
      puVar10 = puVar10 + 1;
      __src = (double *)((long)__src + 1);
    } while (param_3 != 0);
  }
  goto LAB_0107de90;
}

