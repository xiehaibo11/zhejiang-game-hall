
undefined8 FUN_011c08a0(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  byte *pbVar4;
  bool bVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  Isolate *pIVar9;
  int iVar10;
  undefined8 uVar11;
  int iVar12;
  double dVar13;
  byte **local_110;
  byte *local_108;
  char *local_100;
  undefined8 local_f8;
  RuntimeCallStats *local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  long *local_c8;
  long *local_c0;
  long local_a0;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  local_d0 = 0;
  uStack_e8 = 0;
  local_f0 = (RuntimeCallStats *)0x0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_f0 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_f0,(ulong)&local_f0 | 8,0x112);
  }
  if (DAT_01d3f970 == (byte *)0x0) {
    plVar6 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f970 = (byte *)(**(code **)(*plVar6 + 0x10))(plVar6,"disabled-by-default-v8.runtime");
  }
  pbVar4 = DAT_01d3f970;
  local_110 = (byte **)0x0;
  if ((*DAT_01d3f970 & 5) != 0) {
    local_c8 = (long *)0x0;
    local_c0 = (long *)0x0;
    plVar6 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar7 = (**(code **)(*plVar6 + 0x18))
                      (plVar6,0x58,pbVar4,"V8.Runtime_Runtime_SetGeneratorScopeVariableValue",0,0,0,
                       0,0,0,0,&local_c8,0);
    plVar6 = local_c0;
    local_c0 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    plVar6 = local_c8;
    local_c8 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    local_110 = &local_108;
    local_100 = "V8.Runtime_Runtime_SetGeneratorScopeVariableValue";
    local_108 = pbVar4;
    local_f8 = uVar7;
  }
  uVar7 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar8 = *param_2;
  if (((uVar8 & 1) == 0) ||
     (2 < *(ushort *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) - 0x417)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsJSGeneratorObject()");
  }
  uVar8 = param_2[-1];
  if ((uVar8 & 1) == 0) {
    iVar12 = (int)uVar8 >> 1;
    goto LAB_011c0af0;
  }
  if (*(short *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsNumber()");
  }
  dVar13 = *(double *)(uVar8 + 3);
  if ((((-2147483648.0 <= dVar13) && (dVar13 <= 2147483647.0)) && (ABS(dVar13) != INFINITY)) &&
     ((!NAN(ABS(dVar13)) && (iVar12 = (int)dVar13, dVar13 == (double)(int)dVar13))))
  goto LAB_011c0af0;
  uVar1 = 0xfffffbce;
  if (((ulong)dVar13 & 0x7ff0000000000000) != 0) {
    uVar1 = ((uint)((ulong)dVar13 >> 0x34) & 0x7ff) - 0x433;
  }
  if ((int)uVar1 < 0) {
    if ((int)uVar1 < -0x34) goto LAB_011c0ac4;
    uVar8 = (ulong)dVar13 & 0xfffffffffffff;
    if (((ulong)dVar13 & 0x7ff0000000000000) != 0) {
      uVar8 = (ulong)dVar13 & 0xfffffffffffff | 0x10000000000000;
    }
    iVar10 = (int)(uVar8 >> ((ulong)-uVar1 & 0x3f));
  }
  else {
    if (0x1f < (int)uVar1) {
LAB_011c0ac4:
      iVar12 = 0;
      goto LAB_011c0af0;
    }
    uVar8 = (ulong)dVar13 & 0xfffffffffffff;
    if (((ulong)dVar13 & 0x7ff0000000000000) != 0) {
      uVar8 = (ulong)dVar13 & 0xfffffffffffff | 0x10000000000000;
    }
    iVar10 = (int)(uVar8 << ((ulong)uVar1 & 0x3f));
  }
  iVar12 = -iVar10;
  if (-1 < (long)dVar13) {
    iVar12 = iVar10;
  }
LAB_011c0af0:
  uVar8 = param_2[-2];
  if (((uVar8 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[2].IsString()");
  }
  v8::internal::ScopeIterator::ScopeIterator((ScopeIterator *)&local_c8,param_3,param_2);
  bVar5 = local_a0 == 0;
  if ((0 < iVar12) && (local_a0 != 0)) {
    iVar10 = 1;
    do {
      v8::internal::ScopeIterator::Next((ScopeIterator *)&local_c8);
      bVar5 = local_a0 == 0;
      if (iVar12 <= iVar10) break;
      iVar10 = iVar10 + 1;
    } while (local_a0 != 0);
  }
  if (bVar5) {
    pIVar9 = param_3 + 0xc0;
  }
  else {
    uVar8 = v8::internal::ScopeIterator::SetVariableValue
                      ((ScopeIterator *)&local_c8,param_2 + -2,param_2 + -3);
    pIVar9 = param_3 + 0xb8;
    if ((uVar8 & 1) == 0) {
      pIVar9 = param_3 + 0xc0;
    }
  }
  uVar11 = *(undefined8 *)pIVar9;
  v8::internal::ScopeIterator::~ScopeIterator((ScopeIterator *)&local_c8);
  if (param_3 != (Isolate *)0x0) {
    *(undefined8 *)(param_3 + 0x95a0) = uVar7;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar2) {
      *(long *)(param_3 + 0x95a8) = lVar2;
      v8::internal::HandleScope::DeleteExtensions(param_3);
    }
  }
  if ((local_110 != (byte **)0x0) && (*local_108 != 0)) {
    plVar6 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar6 + 0x28))(plVar6,local_108,local_100,local_f8);
  }
  if (local_f0 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_f0,(RuntimeCallTimer *)((ulong)&local_f0 | 8));
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

