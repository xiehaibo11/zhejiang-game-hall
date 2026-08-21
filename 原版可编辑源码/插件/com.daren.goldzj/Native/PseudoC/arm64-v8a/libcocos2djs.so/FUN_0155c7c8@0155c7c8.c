
ulong FUN_0155c7c8(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  byte **local_c0;
  byte *local_b8;
  char *local_b0;
  undefined8 local_a8;
  RuntimeCallStats *local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  Isolate *local_70;
  long *local_68;
  long *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = (RuntimeCallStats *)0x0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_a0 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_a0,(ulong)&local_a0 | 8,0xef);
  }
  if (DAT_01d46e10 == (byte *)0x0) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d46e10 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.runtime");
  }
  pbVar3 = DAT_01d46e10;
  local_c0 = (byte **)0x0;
  if ((*DAT_01d46e10 & 5) != 0) {
    local_68 = (long *)0x0;
    local_60 = (long *)0x0;
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))
                      (plVar4,0x58,pbVar3,"V8.Runtime_Runtime_CompileLazy",0,0,0,0,0,0,0,&local_68,0
                      );
    plVar4 = local_60;
    local_60 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    plVar4 = local_68;
    local_68 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    local_c0 = &local_b8;
    local_b0 = "V8.Runtime_Runtime_CompileLazy";
    local_b8 = pbVar3;
    local_a8 = uVar5;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar6 = *param_2;
  if (((uVar6 & 1) != 0) &&
     (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0x439)) {
    local_70 = param_3;
    uVar6 = v8::internal::StackLimitCheck::JsHasOverflowed((StackLimitCheck *)&local_70,0xa000);
    if ((uVar6 & 1) == 0) {
      local_60 = (long *)((ulong)local_60 & 0xffffffffffffff00);
      local_68 = (long *)0x0;
      uVar6 = v8::internal::Compiler::Compile(param_2,0,&local_68);
      if ((uVar6 & 1) == 0) {
        uVar6 = *(ulong *)(param_3 + 0x180);
      }
      else {
        uVar6 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x17);
      }
    }
    else {
      uVar6 = v8::internal::Isolate::StackOverflow(param_3);
    }
    *(undefined8 *)(param_3 + 0x95a0) = uVar5;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar1) {
      *(long *)(param_3 + 0x95a8) = lVar1;
      v8::internal::HandleScope::DeleteExtensions(param_3);
    }
    if ((local_c0 != (byte **)0x0) && (*local_b8 != 0)) {
      plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar4 + 0x28))(plVar4,local_b8,local_b0,local_a8);
    }
    if (local_a0 != (RuntimeCallStats *)0x0) {
      v8::internal::RuntimeCallStats::Leave(local_a0,(RuntimeCallTimer *)((ulong)&local_a0 | 8));
    }
    if (*(long *)(lVar2 + 0x28) == local_58) {
      return uVar6;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsJSFunction()");
}

