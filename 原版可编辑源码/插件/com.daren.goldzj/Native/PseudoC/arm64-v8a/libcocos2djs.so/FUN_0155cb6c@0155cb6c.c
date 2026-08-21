
ulong FUN_0155cb6c(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  byte *pbVar2;
  Isolate *pIVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  byte **local_a0;
  byte *local_98;
  char *local_90;
  undefined8 local_88;
  RuntimeCallStats *local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  Isolate *local_50;
  long *local_48;
  
  local_60 = 0;
  uStack_78 = 0;
  local_80 = (RuntimeCallStats *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_80 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_80,(ulong)&local_80 | 8,0xf0);
  }
  if (DAT_01d46e18 == (byte *)0x0) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d46e18 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.runtime");
  }
  pbVar2 = DAT_01d46e18;
  local_a0 = (byte **)0x0;
  if ((*DAT_01d46e18 & 5) != 0) {
    local_50 = (Isolate *)0x0;
    local_48 = (long *)0x0;
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))
                      (plVar4,0x58,pbVar2,"V8.Runtime_Runtime_CompileOptimized_Concurrent",0,0,0,0,0
                       ,0,0,&local_50,0);
    plVar4 = local_48;
    local_48 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    pIVar3 = local_50;
    local_50 = (Isolate *)0x0;
    if (pIVar3 != (Isolate *)0x0) {
      (**(code **)(*(long *)pIVar3 + 8))();
    }
    local_a0 = &local_98;
    local_90 = "V8.Runtime_Runtime_CompileOptimized_Concurrent";
    local_98 = pbVar2;
    local_88 = uVar5;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar6 = *param_2;
  if (((uVar6 & 1) != 0) &&
     (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0x439)) {
    local_50 = param_3;
    uVar6 = v8::internal::StackLimitCheck::JsHasOverflowed((StackLimitCheck *)&local_50,0xa000);
    if ((uVar6 & 1) == 0) {
      uVar6 = v8::internal::Compiler::CompileOptimized(param_2,1);
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
    if ((local_a0 != (byte **)0x0) && (*local_98 != 0)) {
      plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar4 + 0x28))(plVar4,local_98,local_90,local_88);
    }
    if (local_80 != (RuntimeCallStats *)0x0) {
      v8::internal::RuntimeCallStats::Leave(local_80,(RuntimeCallTimer *)((ulong)&local_80 | 8));
    }
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsJSFunction()");
}

