
/* v8::internal::Runtime_GetGeneratorScopeDetails(int, unsigned long*, v8::internal::Isolate*) */

undefined8
v8::internal::Runtime_GetGeneratorScopeDetails(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  Isolate *pIVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  int iVar13;
  double dVar14;
  ScopeIterator aSStack_b8 [40];
  long local_90;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if (TracingFlags::runtime_stats != 0) {
    uVar7 = FUN_011c01d0(param_1,param_2,param_3);
    if (*(long *)(lVar4 + 0x28) == local_58) {
      return uVar7;
    }
    goto LAB_011c01a4;
  }
  pIVar1 = param_3 + 0x95a0;
  iVar13 = *(int *)(param_3 + 0x95b0);
  uVar7 = *(undefined8 *)pIVar1;
  lVar3 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = iVar13 + 1;
  uVar8 = *param_2;
  if (((uVar8 & 1) == 0) ||
     (uVar9 = uVar8 & 0xffffffff00000000 | 7, 2 < *(ushort *)(uVar9 + *(uint *)(uVar8 - 1)) - 0x417)
     ) {
LAB_011bffb8:
    uVar12 = *(undefined8 *)(param_3 + 0xa0);
    *(undefined8 *)pIVar1 = uVar7;
    *(int *)(param_3 + 0x95b0) = iVar13;
  }
  else {
    if (2 < *(ushort *)(uVar9 + *(uint *)(uVar8 - 1)) - 0x417) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[0].IsJSGeneratorObject()");
    }
    uVar9 = param_2[-1];
    if ((uVar9 & 1) == 0) {
      iVar11 = (int)uVar9 >> 1;
      iVar10 = *(int *)(uVar8 + 0x1f);
    }
    else {
      if (*(short *)((uVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar9 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","args[1].IsNumber()");
      }
      dVar14 = *(double *)(uVar9 + 3);
      if ((((dVar14 < -2147483648.0) || (2147483647.0 < dVar14)) || (ABS(dVar14) == INFINITY)) ||
         ((NAN(ABS(dVar14)) || (iVar11 = (int)dVar14, dVar14 != (double)(int)dVar14)))) {
        uVar2 = 0xfffffbce;
        if (((ulong)dVar14 & 0x7ff0000000000000) != 0) {
          uVar2 = ((uint)((ulong)dVar14 >> 0x34) & 0x7ff) - 0x433;
        }
        if ((int)uVar2 < 0) {
          if (-0x35 < (int)uVar2) {
            uVar9 = (ulong)dVar14 & 0xfffffffffffff;
            if (((ulong)dVar14 & 0x7ff0000000000000) != 0) {
              uVar9 = (ulong)dVar14 & 0xfffffffffffff | 0x10000000000000;
            }
            iVar10 = (int)(uVar9 >> ((ulong)-uVar2 & 0x3f));
            goto LAB_011c00dc;
          }
        }
        else if ((int)uVar2 < 0x20) {
          uVar9 = (ulong)dVar14 & 0xfffffffffffff;
          if (((ulong)dVar14 & 0x7ff0000000000000) != 0) {
            uVar9 = (ulong)dVar14 & 0xfffffffffffff | 0x10000000000000;
          }
          iVar10 = (int)(uVar9 << ((ulong)uVar2 & 0x3f));
LAB_011c00dc:
          iVar11 = -iVar10;
          if (-1 < (long)dVar14) {
            iVar11 = iVar10;
          }
          goto LAB_011c00e4;
        }
        iVar11 = 0;
        iVar10 = *(int *)(uVar8 + 0x1f);
      }
      else {
LAB_011c00e4:
        iVar10 = *(int *)(uVar8 + 0x1f);
      }
    }
    if (iVar10 < 0) goto LAB_011bffb8;
    ScopeIterator::ScopeIterator(aSStack_b8,param_3);
    bVar5 = local_90 == 0;
    if ((0 < iVar11) && (local_90 != 0)) {
      iVar13 = 1;
      do {
        ScopeIterator::Next(aSStack_b8);
        bVar5 = local_90 == 0;
        if (iVar11 <= iVar13) break;
        iVar13 = iVar13 + 1;
      } while (local_90 != 0);
    }
    if (bVar5) {
      pIVar6 = param_3 + 0xa0;
    }
    else {
      pIVar6 = (Isolate *)ScopeIterator::MaterializeScopeDetails(aSStack_b8);
    }
    uVar12 = *(undefined8 *)pIVar6;
    ScopeIterator::~ScopeIterator(aSStack_b8);
    if (param_3 != (Isolate *)0x0) {
      *(undefined8 *)pIVar1 = uVar7;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar3) {
        *(long *)(param_3 + 0x95a8) = lVar3;
        HandleScope::DeleteExtensions(param_3);
      }
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return uVar12;
  }
LAB_011c01a4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

