
/* v8::internal::Runtime_SetWasmCompileControls(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_SetWasmCompileControls(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  __tree_node_base *p_Var6;
  ulong uVar7;
  code *pcVar8;
  undefined8 uVar9;
  __tree_node_base *p_Var10;
  __tree_node_base *p_Var11;
  undefined **local_a0;
  code *pcStack_98;
  undefined *local_90;
  undefined ***local_80;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (TracingFlags::runtime_stats != 0) {
    uVar5 = FUN_0159ff14(param_1,param_2,param_3);
    if (*(long *)(lVar3 + 0x28) == local_68) {
      return uVar5;
    }
    goto LAB_0159fe9c;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x95a0);
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
  uVar7 = param_2[-1];
  if ((((uVar7 & 1) == 0) ||
      (*(short *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) != 0x43)) ||
     (1 < (*(uint *)(uVar7 + 0x17) >> 1 & 0xff))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsBoolean()");
  }
  iVar2 = *(int *)(param_3 + 0xb8);
  if (DAT_01d474d0 != '\x02') {
    local_a0 = &PTR_FUN_01c984d0;
    pcStack_98 = base::
                 LazyInstanceImpl<v8::base::Mutex,v8::base::StaticallyAllocatedInstanceTrait<v8::base::Mutex>,v8::base::DefaultConstructTrait<v8::base::Mutex>,v8::base::ThreadSafeInitOnceTrait,v8::base::LeakyInstanceTrait<v8::base::Mutex>>
                 ::InitInstance;
    local_90 = &DAT_01d474d4;
    local_80 = &local_a0;
    base::CallOnceImpl(&DAT_01d474d0,&local_a0);
    if (&local_a0 == local_80) {
      pcVar8 = (code *)(*local_80)[4];
    }
    else {
      if (local_80 == (undefined ***)0x0) goto LAB_0159fd0c;
      pcVar8 = (code *)(*local_80)[5];
    }
    (*pcVar8)();
  }
LAB_0159fd0c:
  base::Mutex::Lock((Mutex *)&DAT_01d474d4);
  if (((DAT_01d47518 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_01d47518), iVar4 != 0)) {
    DAT_01d47508 = (__tree_node_base *)0x0;
    DAT_01d47510 = 0;
    DAT_01d47500 = &DAT_01d47508;
    __cxa_guard_release(&DAT_01d47518);
  }
  p_Var6 = (__tree_node_base *)&DAT_01d47508;
  p_Var11 = p_Var6;
  if (DAT_01d47508 == (__tree_node_base *)0x0) {
LAB_0159fd80:
    p_Var10 = *(__tree_node_base **)p_Var11;
  }
  else {
    p_Var10 = DAT_01d47508;
    p_Var11 = (__tree_node_base *)&DAT_01d47508;
    do {
      while (p_Var6 = p_Var10, *(Isolate **)(p_Var6 + 0x20) <= param_3) {
        if (param_3 <= *(Isolate **)(p_Var6 + 0x20)) goto LAB_0159fd80;
        p_Var11 = p_Var6 + 8;
        p_Var10 = *(__tree_node_base **)p_Var11;
        if (*(__tree_node_base **)p_Var11 == (__tree_node_base *)0x0) goto LAB_0159fd80;
      }
      p_Var10 = *(__tree_node_base **)p_Var6;
      p_Var11 = p_Var6;
    } while (*(__tree_node_base **)p_Var6 != (__tree_node_base *)0x0);
    p_Var10 = *(__tree_node_base **)p_Var6;
  }
  if (p_Var10 == (__tree_node_base *)0x0) {
    p_Var10 = operator_new(0x30);
    *(undefined8 *)p_Var10 = 0;
    *(undefined8 *)(p_Var10 + 8) = 0;
    *(__tree_node_base **)(p_Var10 + 0x10) = p_Var6;
    *(Isolate **)(p_Var10 + 0x20) = param_3;
    *(undefined8 *)(p_Var10 + 0x28) = 0x1ffffffff;
    *(__tree_node_base **)p_Var11 = p_Var10;
    p_Var6 = p_Var10;
    if ((undefined8 *)*DAT_01d47500 != (undefined8 *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var11;
      DAT_01d47500 = (undefined8 *)*DAT_01d47500;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (DAT_01d47508,p_Var6);
    DAT_01d47510 = DAT_01d47510 + 1;
  }
  p_Var10[0x2c] = (__tree_node_base)((int)uVar7 == iVar2);
  *(int *)(p_Var10 + 0x28) = (int)*param_2 >> 1;
  v8::Isolate::SetWasmModuleCallback((Isolate *)param_3,FUN_015afa44);
  uVar9 = *(undefined8 *)(param_3 + 0xa0);
  base::Mutex::Unlock((Mutex *)&DAT_01d474d4);
  if (param_3 != (Isolate *)0x0) {
    *(undefined8 *)(param_3 + 0x95a0) = uVar5;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar1) {
      *(long *)(param_3 + 0x95a8) = lVar1;
      HandleScope::DeleteExtensions(param_3);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return uVar9;
  }
LAB_0159fe9c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

