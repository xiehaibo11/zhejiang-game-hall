
undefined8 FUN_0159ff14(int param_1,byte *param_2,Isolate *param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  byte *pbVar4;
  undefined **ppuVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  __tree_node_base *p_Var9;
  ulong uVar10;
  code *pcVar11;
  undefined8 uVar12;
  __tree_node_base *p_Var13;
  __tree_node_base *p_Var14;
  byte **local_f0;
  byte *local_e8;
  char *local_e0;
  undefined8 local_d8;
  RuntimeCallStats *local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined **local_a0;
  code *local_98;
  undefined *local_90;
  undefined ***local_80;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  local_b0 = 0;
  uStack_c8 = 0;
  local_d0 = (RuntimeCallStats *)0x0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_d0 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_d0,(ulong)&local_d0 | 8,0x268);
  }
  if (DAT_01d474c8 == (byte *)0x0) {
    plVar7 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d474c8 = (byte *)(**(code **)(*plVar7 + 0x10))(plVar7,"disabled-by-default-v8.runtime");
  }
  pbVar4 = DAT_01d474c8;
  local_f0 = (byte **)0x0;
  if ((*DAT_01d474c8 & 5) != 0) {
    local_a0 = (undefined **)0x0;
    local_98 = (code *)0x0;
    plVar7 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar8 = (**(code **)(*plVar7 + 0x18))
                      (plVar7,0x58,pbVar4,"V8.Runtime_Runtime_SetWasmCompileControls",0,0,0,0,0,0,0,
                       &local_a0,0);
    pcVar11 = local_98;
    local_98 = (code *)0x0;
    if (pcVar11 != (code *)0x0) {
      (**(code **)(*(long *)pcVar11 + 8))();
    }
    ppuVar5 = local_a0;
    local_a0 = (undefined **)0x0;
    if (ppuVar5 != (undefined **)0x0) {
      (**(code **)(*ppuVar5 + 8))();
    }
    local_f0 = &local_e8;
    local_e0 = "V8.Runtime_Runtime_SetWasmCompileControls";
    local_e8 = pbVar4;
    local_d8 = uVar8;
  }
  uVar8 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  if (param_1 != 2) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args.length() == 2");
  }
  if ((*param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsSmi()");
  }
  uVar10 = *(ulong *)(param_2 + -8);
  if ((((uVar10 & 1) == 0) ||
      (*(short *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) != 0x43)) ||
     (1 < (*(uint *)(uVar10 + 0x17) >> 1 & 0xff))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsBoolean()");
  }
  iVar2 = *(int *)(param_3 + 0xb8);
  if (DAT_01d474d0 != '\x02') {
    local_a0 = &PTR_FUN_01c984d0;
    local_98 = v8::base::
               LazyInstanceImpl<v8::base::Mutex,v8::base::StaticallyAllocatedInstanceTrait<v8::base::Mutex>,v8::base::DefaultConstructTrait<v8::base::Mutex>,v8::base::ThreadSafeInitOnceTrait,v8::base::LeakyInstanceTrait<v8::base::Mutex>>
               ::InitInstance;
    local_90 = &DAT_01d474d4;
    local_80 = &local_a0;
    v8::base::CallOnceImpl(&DAT_01d474d0,&local_a0);
    if (&local_a0 == local_80) {
      pcVar11 = (code *)(*local_80)[4];
    }
    else {
      if (local_80 == (undefined ***)0x0) goto LAB_015a010c;
      pcVar11 = (code *)(*local_80)[5];
    }
    (*pcVar11)();
  }
LAB_015a010c:
  v8::base::Mutex::Lock((Mutex *)&DAT_01d474d4);
  if (((DAT_01d47518 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_01d47518), iVar6 != 0)) {
    DAT_01d47508 = (__tree_node_base *)0x0;
    DAT_01d47510 = 0;
    DAT_01d47500 = &DAT_01d47508;
    __cxa_guard_release(&DAT_01d47518);
  }
  p_Var9 = (__tree_node_base *)&DAT_01d47508;
  p_Var14 = p_Var9;
  if (DAT_01d47508 != (__tree_node_base *)0x0) {
    p_Var13 = DAT_01d47508;
    p_Var14 = (__tree_node_base *)&DAT_01d47508;
    do {
      while (p_Var9 = p_Var13, param_3 < *(Isolate **)(p_Var9 + 0x20)) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        p_Var14 = p_Var9;
        if (*(__tree_node_base **)p_Var9 == (__tree_node_base *)0x0) {
          p_Var13 = *(__tree_node_base **)p_Var9;
          goto joined_r0x015a01d0;
        }
      }
      if (param_3 <= *(Isolate **)(p_Var9 + 0x20)) break;
      p_Var14 = p_Var9 + 8;
      p_Var13 = *(__tree_node_base **)p_Var14;
    } while (*(__tree_node_base **)p_Var14 != (__tree_node_base *)0x0);
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x015a01d0:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x30);
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node_base **)(p_Var13 + 0x10) = p_Var9;
    *(Isolate **)(p_Var13 + 0x20) = param_3;
    *(undefined8 *)(p_Var13 + 0x28) = 0x1ffffffff;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var9 = p_Var13;
    if ((undefined8 *)*DAT_01d47500 != (undefined8 *)0x0) {
      p_Var9 = *(__tree_node_base **)p_Var14;
      DAT_01d47500 = (undefined8 *)*DAT_01d47500;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (DAT_01d47508,p_Var9);
    DAT_01d47510 = DAT_01d47510 + 1;
  }
  p_Var13[0x2c] = (__tree_node_base)((int)uVar10 == iVar2);
  *(int *)(p_Var13 + 0x28) = *(int *)param_2 >> 1;
  v8::Isolate::SetWasmModuleCallback(param_3,FUN_015afa44);
  uVar12 = *(undefined8 *)(param_3 + 0xa0);
  v8::base::Mutex::Unlock((Mutex *)&DAT_01d474d4);
  if (param_3 != (Isolate *)0x0) {
    *(undefined8 *)(param_3 + 0x95a0) = uVar8;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar1) {
      *(long *)(param_3 + 0x95a8) = lVar1;
      v8::internal::HandleScope::DeleteExtensions((Isolate *)param_3);
    }
  }
  if ((local_f0 != (byte **)0x0) && (*local_e8 != 0)) {
    plVar7 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar7 + 0x28))(plVar7,local_e8,local_e0,local_d8);
  }
  if (local_d0 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_d0,(RuntimeCallTimer *)((ulong)&local_d0 | 8));
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

