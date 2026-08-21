
void FUN_0107dfd8(ulong param_1,ulong param_2,ulong param_3,long param_4)

{
  undefined1 (*pauVar1) [16];
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ushort *puVar6;
  byte *pbVar7;
  float *pfVar8;
  double *pdVar9;
  undefined1 (*pauVar10) [16];
  byte *pbVar11;
  float *pfVar12;
  ulong uVar13;
  double *__dest;
  double *__src;
  ulong uVar14;
  undefined4 uVar15;
  float fVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
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
  iVar2 = v8::internal::JSTypedArray::type((JSTypedArray *)&local_48);
  iVar3 = v8::internal::JSTypedArray::type((JSTypedArray *)&local_50);
  lVar4 = v8::internal::JSTypedArray::element_size((JSTypedArray *)&local_48);
  lVar5 = v8::internal::JSTypedArray::element_size((JSTypedArray *)&local_50);
  __src = (double *)(*(long *)(local_48 + 0x27) + (ulong)*(uint *)(local_48 + 0x2f));
  pbVar11 = (byte *)(*(long *)(local_50 + 0x27) + (ulong)*(uint *)(local_50 + 0x2f));
  if ((iVar2 == iVar3) || (lVar4 == lVar5 && (2 < iVar2 - 7U && 2 < iVar3 - 7U))) {
    lVar4 = v8::internal::JSTypedArray::element_size((JSTypedArray *)&local_48);
    memmove(pbVar11 + lVar4 * param_4,__src,lVar4 * param_3);
    return;
  }
  uVar14 = *(ulong *)(local_48 + 0x17);
  __dest = (double *)0x0;
  if ((pbVar11 < (byte *)((long)__src + uVar14)) && (__src < pbVar11 + *(long *)(local_50 + 0x17)))
  {
    __dest = operator_new__(uVar14);
    memcpy(__dest,__src,uVar14);
    __src = __dest;
  }
  switch(*(byte *)((local_48 & 0xffffffff00000000 | 10) + (ulong)*(uint *)(local_48 - 1)) >> 3) {
  case 0x11:
    if (param_3 != 0) {
      pfVar8 = (float *)(pbVar11 + param_4 * 4);
      do {
        param_3 = param_3 - 1;
        *pfVar8 = (float)*(byte *)__src;
        pfVar8 = pfVar8 + 1;
        __src = (double *)((long)__src + 1);
      } while (param_3 != 0);
    }
    break;
  case 0x12:
    if (param_3 != 0) {
      pfVar8 = (float *)(pbVar11 + param_4 * 4);
      do {
        param_3 = param_3 - 1;
        *pfVar8 = (float)(int)(char)*(byte *)__src;
        pfVar8 = pfVar8 + 1;
        __src = (double *)((long)__src + 1);
      } while (param_3 != 0);
    }
    break;
  case 0x13:
    goto switchD_0107e118_caseD_13;
  case 0x14:
    if (param_3 != 0) {
      if ((param_3 < 8) ||
         ((pbVar11 + param_4 * 4 < (byte *)((long)__src + param_3 * 2) &&
          (__src < pbVar11 + (param_4 + param_3) * 4)))) {
        uVar14 = 0;
      }
      else {
        uVar14 = param_3 & 0xfffffffffffffff8;
        pdVar9 = __src + 1;
        pbVar7 = pbVar11 + param_4 * 4 + 0x10;
        uVar13 = uVar14;
        do {
          dVar17 = pdVar9[-1];
          dVar20 = *pdVar9;
          pdVar9 = pdVar9 + 2;
          uVar13 = uVar13 - 8;
          auVar19._0_4_ = (int)SUB82(dVar17,0);
          auVar19._4_4_ = (int)(short)((ulong)dVar17 >> 0x10);
          auVar19._8_4_ = (int)(short)((ulong)dVar17 >> 0x20);
          auVar19._12_4_ = (int)(short)((ulong)dVar17 >> 0x30);
          auVar22._0_4_ = (int)SUB82(dVar20,0);
          auVar22._4_4_ = (int)(short)((ulong)dVar20 >> 0x10);
          auVar22._8_4_ = (int)(short)((ulong)dVar20 >> 0x20);
          auVar22._12_4_ = (int)(short)((ulong)dVar20 >> 0x30);
          auVar19 = NEON_scvtf(auVar19,4);
          auVar22 = NEON_scvtf(auVar22,4);
          *(long *)(pbVar7 + -8) = auVar19._8_8_;
          *(long *)(pbVar7 + -0x10) = auVar19._0_8_;
          *(long *)(pbVar7 + 8) = auVar22._8_8_;
          *(long *)pbVar7 = auVar22._0_8_;
          pbVar7 = pbVar7 + 0x20;
        } while (uVar13 != 0);
        if (uVar14 == param_3) break;
      }
      lVar4 = param_3 - uVar14;
      pbVar7 = (byte *)((long)__src + uVar14 * 2);
      pfVar8 = (float *)(pbVar11 + (uVar14 + param_4) * 4);
      do {
        lVar4 = lVar4 + -1;
        *pfVar8 = (float)(int)*(short *)pbVar7;
        pbVar7 = pbVar7 + 2;
        pfVar8 = pfVar8 + 1;
      } while (lVar4 != 0);
    }
    break;
  case 0x15:
    if (param_3 != 0) {
      if ((param_3 < 8) ||
         ((pbVar11 + param_4 * 4 < (float *)((long)__src + param_3 * 4) &&
          (__src < pbVar11 + (param_4 + param_3) * 4)))) {
        uVar14 = 0;
      }
      else {
        uVar14 = param_3 & 0xfffffffffffffff8;
        pauVar10 = (undefined1 (*) [16])(__src + 2);
        pbVar7 = pbVar11 + param_4 * 4 + 0x10;
        uVar13 = uVar14;
        do {
          pauVar1 = pauVar10 + -1;
          auVar19 = *pauVar10;
          pauVar10 = pauVar10 + 2;
          uVar13 = uVar13 - 8;
          auVar22 = NEON_ucvtf(*pauVar1,4);
          auVar19 = NEON_ucvtf(auVar19,4);
          *(long *)(pbVar7 + -8) = auVar22._8_8_;
          *(long *)(pbVar7 + -0x10) = auVar22._0_8_;
          *(long *)(pbVar7 + 8) = auVar19._8_8_;
          *(long *)pbVar7 = auVar19._0_8_;
          pbVar7 = pbVar7 + 0x20;
        } while (uVar13 != 0);
        if (uVar14 == param_3) break;
      }
      lVar4 = param_3 - uVar14;
      pfVar8 = (float *)((long)__src + uVar14 * 4);
      pbVar11 = pbVar11 + (uVar14 + param_4) * 4;
      do {
        lVar4 = lVar4 + -1;
        uVar15 = NEON_ucvtf(*pfVar8);
        *(undefined4 *)pbVar11 = uVar15;
        pfVar8 = pfVar8 + 1;
        pbVar11 = pbVar11 + 4;
      } while (lVar4 != 0);
    }
    break;
  case 0x16:
    if (param_3 != 0) {
      if ((param_3 < 8) ||
         ((pbVar11 + param_4 * 4 < (float *)((long)__src + param_3 * 4) &&
          (__src < pbVar11 + (param_4 + param_3) * 4)))) {
        uVar14 = 0;
      }
      else {
        uVar14 = param_3 & 0xfffffffffffffff8;
        pauVar10 = (undefined1 (*) [16])(__src + 2);
        pbVar7 = pbVar11 + param_4 * 4 + 0x10;
        uVar13 = uVar14;
        do {
          pauVar1 = pauVar10 + -1;
          auVar19 = *pauVar10;
          pauVar10 = pauVar10 + 2;
          uVar13 = uVar13 - 8;
          auVar22 = NEON_scvtf(*pauVar1,4);
          auVar19 = NEON_scvtf(auVar19,4);
          *(long *)(pbVar7 + -8) = auVar22._8_8_;
          *(long *)(pbVar7 + -0x10) = auVar22._0_8_;
          *(long *)(pbVar7 + 8) = auVar19._8_8_;
          *(long *)pbVar7 = auVar19._0_8_;
          pbVar7 = pbVar7 + 0x20;
        } while (uVar13 != 0);
        if (uVar14 == param_3) break;
      }
      lVar4 = param_3 - uVar14;
      pfVar8 = (float *)((long)__src + uVar14 * 4);
      pfVar12 = (float *)(pbVar11 + (uVar14 + param_4) * 4);
      do {
        lVar4 = lVar4 + -1;
        *pfVar12 = (float)(int)*pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar12 = pfVar12 + 1;
      } while (lVar4 != 0);
    }
    break;
  case 0x17:
    if (param_3 != 0) {
      pfVar8 = (float *)(pbVar11 + param_4 * 4);
      do {
        fVar16 = *(float *)__src;
        if (fVar16 <= 3.4028235e+38) {
          if (fVar16 < -3.4028235e+38) {
            if (-3.4028235e+38 <= fVar16) {
              fVar16 = -3.4028235e+38;
            }
            else {
              fVar16 = -INFINITY;
            }
          }
        }
        else if (3.4028235e+38 < fVar16) {
          fVar16 = INFINITY;
        }
        else {
          fVar16 = 3.4028235e+38;
        }
        *pfVar8 = fVar16;
        param_3 = param_3 - 1;
        __src = (double *)((long)__src + 4);
        pfVar8 = pfVar8 + 1;
      } while (param_3 != 0);
    }
    break;
  case 0x18:
    if (param_3 != 0) {
      pfVar8 = (float *)(pbVar11 + param_4 * 4);
      do {
        dVar17 = *__src;
        if (dVar17 <= 3.4028234663852886e+38) {
          if (-3.4028234663852886e+38 <= dVar17) {
            fVar16 = (float)dVar17;
          }
          else if (-3.4028235677973362e+38 <= dVar17) {
            fVar16 = -3.4028235e+38;
          }
          else {
            fVar16 = -INFINITY;
          }
        }
        else if (dVar17 <= 3.4028235677973362e+38) {
          fVar16 = 3.4028235e+38;
        }
        else {
          fVar16 = INFINITY;
        }
        *pfVar8 = fVar16;
        param_3 = param_3 - 1;
        __src = __src + 1;
        pfVar8 = pfVar8 + 1;
      } while (param_3 != 0);
    }
    break;
  case 0x19:
    goto switchD_0107e118_caseD_19;
  case 0x1a:
    if (param_3 == 0) break;
    FUN_010bcd2c();
switchD_0107e118_caseD_13:
    if (param_3 != 0) {
      if ((param_3 < 8) ||
         ((pbVar11 + param_4 * 4 < (byte *)((long)__src + param_3 * 2) &&
          (__src < pbVar11 + (param_4 + param_3) * 4)))) {
        uVar14 = 0;
      }
      else {
        uVar14 = param_3 & 0xfffffffffffffff8;
        pdVar9 = __src + 1;
        pbVar7 = pbVar11 + param_4 * 4 + 0x10;
        uVar13 = uVar14;
        do {
          dVar17 = pdVar9[-1];
          dVar20 = *pdVar9;
          pdVar9 = pdVar9 + 2;
          uVar13 = uVar13 - 8;
          auVar18._2_2_ = 0;
          auVar18._0_2_ = SUB82(dVar17,0);
          auVar18._4_2_ = (short)((ulong)dVar17 >> 0x10);
          auVar18._6_2_ = 0;
          auVar18._8_2_ = (short)((ulong)dVar17 >> 0x20);
          auVar18._10_2_ = 0;
          auVar18._12_2_ = (short)((ulong)dVar17 >> 0x30);
          auVar18._14_2_ = 0;
          auVar21._2_2_ = 0;
          auVar21._0_2_ = SUB82(dVar20,0);
          auVar21._4_2_ = (short)((ulong)dVar20 >> 0x10);
          auVar21._6_2_ = 0;
          auVar21._8_2_ = (short)((ulong)dVar20 >> 0x20);
          auVar21._10_2_ = 0;
          auVar21._12_2_ = (short)((ulong)dVar20 >> 0x30);
          auVar21._14_2_ = 0;
          auVar19 = NEON_ucvtf(auVar18,4);
          auVar22 = NEON_ucvtf(auVar21,4);
          *(long *)(pbVar7 + -8) = auVar19._8_8_;
          *(long *)(pbVar7 + -0x10) = auVar19._0_8_;
          *(long *)(pbVar7 + 8) = auVar22._8_8_;
          *(long *)pbVar7 = auVar22._0_8_;
          pbVar7 = pbVar7 + 0x20;
        } while (uVar13 != 0);
        if (uVar14 == param_3) break;
      }
      lVar4 = param_3 - uVar14;
      puVar6 = (ushort *)((long)__src + uVar14 * 2);
      pfVar8 = (float *)(pbVar11 + (uVar14 + param_4) * 4);
      do {
        lVar4 = lVar4 + -1;
        *pfVar8 = (float)*puVar6;
        puVar6 = puVar6 + 1;
        pfVar8 = pfVar8 + 1;
      } while (lVar4 != 0);
    }
    break;
  case 0x1b:
    if (param_3 == 0) break;
    FUN_010bcd40();
    goto switchD_0107e118_caseD_19;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
LAB_0107e438:
  if (__dest != (double *)0x0) {
    operator_delete__(__dest);
  }
  return;
switchD_0107e118_caseD_19:
  if (param_3 != 0) {
    pfVar8 = (float *)(pbVar11 + param_4 * 4);
    do {
      param_3 = param_3 - 1;
      *pfVar8 = (float)*(byte *)__src;
      pfVar8 = pfVar8 + 1;
      __src = (double *)((long)__src + 1);
    } while (param_3 != 0);
  }
  goto LAB_0107e438;
}

