
/* v8::internal::Runtime_SetGeneratorScopeVariableValue(int, unsigned long*, v8::internal::Isolate*)
    */

undefined8
v8::internal::Runtime_SetGeneratorScopeVariableValue(int param_1,ulong *param_2,Isolate *param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong uVar6;
  Isolate *pIVar7;
  int iVar8;
  undefined8 uVar9;
  int iVar10;
  double dVar11;
  ScopeIterator aSStack_c8 [40];
  long local_a0;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (TracingFlags::runtime_stats != 0) {
    uVar5 = FUN_011c08a0(param_1,param_2,param_3);
    if (*(long *)(lVar3 + 0x28) == local_68) {
      return uVar5;
    }
    goto LAB_011c0860;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar6 = *param_2;
  if (((uVar6 & 1) == 0) ||
     (2 < *(ushort *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) - 0x417)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsJSGeneratorObject()");
  }
  uVar6 = param_2[-1];
  if ((uVar6 & 1) == 0) {
    iVar10 = (int)uVar6 >> 1;
  }
  else {
    if (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[1].IsNumber()");
    }
    dVar11 = *(double *)(uVar6 + 3);
    if ((((dVar11 < -2147483648.0) || (2147483647.0 < dVar11)) || (ABS(dVar11) == INFINITY)) ||
       ((NAN(ABS(dVar11)) || (iVar10 = (int)dVar11, dVar11 != (double)(int)dVar11)))) {
      uVar1 = 0xfffffbce;
      if (((ulong)dVar11 & 0x7ff0000000000000) != 0) {
        uVar1 = ((uint)((ulong)dVar11 >> 0x34) & 0x7ff) - 0x433;
      }
      if ((int)uVar1 < 0) {
        if ((int)uVar1 < -0x34) goto LAB_011c070c;
        uVar6 = (ulong)dVar11 & 0xfffffffffffff;
        if (((ulong)dVar11 & 0x7ff0000000000000) != 0) {
          uVar6 = (ulong)dVar11 & 0xfffffffffffff | 0x10000000000000;
        }
        iVar8 = (int)(uVar6 >> ((ulong)-uVar1 & 0x3f));
      }
      else {
        if (0x1f < (int)uVar1) {
LAB_011c070c:
          iVar10 = 0;
          goto LAB_011c0738;
        }
        uVar6 = (ulong)dVar11 & 0xfffffffffffff;
        if (((ulong)dVar11 & 0x7ff0000000000000) != 0) {
          uVar6 = (ulong)dVar11 & 0xfffffffffffff | 0x10000000000000;
        }
        iVar8 = (int)(uVar6 << ((ulong)uVar1 & 0x3f));
      }
      iVar10 = -iVar8;
      if (-1 < (long)dVar11) {
        iVar10 = iVar8;
      }
    }
  }
LAB_011c0738:
  uVar6 = param_2[-2];
  if (((uVar6 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[2].IsString()");
  }
  ScopeIterator::ScopeIterator(aSStack_c8,param_3,param_2);
  bVar4 = local_a0 == 0;
  if ((0 < iVar10) && (local_a0 != 0)) {
    iVar8 = 1;
    do {
      ScopeIterator::Next(aSStack_c8);
      bVar4 = local_a0 == 0;
      if (iVar10 <= iVar8) break;
      iVar8 = iVar8 + 1;
    } while (local_a0 != 0);
  }
  if (bVar4) {
    pIVar7 = param_3 + 0xc0;
  }
  else {
    uVar6 = ScopeIterator::SetVariableValue(aSStack_c8,param_2 + -2,param_2 + -3);
    pIVar7 = param_3 + 0xb8;
    if ((uVar6 & 1) == 0) {
      pIVar7 = param_3 + 0xc0;
    }
  }
  uVar9 = *(undefined8 *)pIVar7;
  ScopeIterator::~ScopeIterator(aSStack_c8);
  if (param_3 != (Isolate *)0x0) {
    *(undefined8 *)(param_3 + 0x95a0) = uVar5;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar2) {
      *(long *)(param_3 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(param_3);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return uVar9;
  }
LAB_011c0860:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

