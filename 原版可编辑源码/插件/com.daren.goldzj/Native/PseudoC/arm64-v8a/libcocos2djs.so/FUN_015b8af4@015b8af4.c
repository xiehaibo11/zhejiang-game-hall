
undefined8 FUN_015b8af4(undefined8 param_1,undefined8 param_2,Isolate *param_3)

{
  byte *pbVar1;
  Isolate *pIVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  byte **local_90;
  byte *local_88;
  char *local_80;
  undefined8 local_78;
  RuntimeCallStats *local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  Isolate *local_40;
  long *local_38;
  
  local_50 = 0;
  uStack_68 = 0;
  local_70 = (RuntimeCallStats *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_70 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_70,(ulong)&local_70 | 8,0x286);
  }
  if (DAT_01d47800 == (byte *)0x0) {
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d47800 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,"disabled-by-default-v8.runtime");
  }
  pbVar1 = DAT_01d47800;
  local_90 = (byte **)0x0;
  if ((*DAT_01d47800 & 5) != 0) {
    local_40 = (Isolate *)0x0;
    local_38 = (long *)0x0;
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar4 = (**(code **)(*plVar3 + 0x18))
                      (plVar3,0x58,pbVar1,"V8.Runtime_Runtime_WasmStackGuard",0,0,0,0,0,0,0,
                       &local_40,0);
    plVar3 = local_38;
    local_38 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    pIVar2 = local_40;
    local_40 = (Isolate *)0x0;
    if (pIVar2 != (Isolate *)0x0) {
      (**(code **)(*(long *)pIVar2 + 8))();
    }
    local_90 = &local_88;
    local_80 = "V8.Runtime_Runtime_WasmStackGuard";
    local_88 = pbVar1;
    local_78 = uVar4;
  }
  if (v8::internal::trap_handler::g_is_trap_handler_enabled != '\0') {
    v8::internal::trap_handler::g_thread_in_wasm_code = 0;
  }
  local_40 = param_3;
  uVar5 = v8::internal::StackLimitCheck::JsHasOverflowed((StackLimitCheck *)&local_40,0);
  if ((uVar5 & 1) == 0) {
    uVar4 = v8::internal::StackGuard::HandleInterrupts((StackGuard *)(param_3 + 0x48));
  }
  else {
    uVar4 = v8::internal::Isolate::StackOverflow(param_3);
  }
  if (v8::internal::trap_handler::g_is_trap_handler_enabled != '\0') {
    v8::internal::trap_handler::g_thread_in_wasm_code = 1;
  }
  if ((local_90 != (byte **)0x0) && (*local_88 != 0)) {
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar3 + 0x28))(plVar3,local_88,local_80,local_78);
  }
  if (local_70 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_70,(RuntimeCallTimer *)((ulong)&local_70 | 8));
  }
  return uVar4;
}

