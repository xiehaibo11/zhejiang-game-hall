
/* v8::internal::Runtime_WasmStackGuard(int, unsigned long*, v8::internal::Isolate*) */

void v8::internal::Runtime_WasmStackGuard(int param_1,ulong *param_2,Isolate *param_3)

{
  ulong uVar1;
  Isolate *local_18;
  
  if (TracingFlags::runtime_stats == 0) {
    if (trap_handler::g_is_trap_handler_enabled != '\0') {
      trap_handler::g_thread_in_wasm_code = 0;
    }
    local_18 = param_3;
    uVar1 = StackLimitCheck::JsHasOverflowed((StackLimitCheck *)&local_18,0);
    if ((uVar1 & 1) == 0) {
      StackGuard::HandleInterrupts((StackGuard *)(param_3 + 0x48));
    }
    else {
      Isolate::StackOverflow(param_3);
    }
    if (trap_handler::g_is_trap_handler_enabled != '\0') {
      trap_handler::g_thread_in_wasm_code = 1;
    }
    return;
  }
  FUN_015b8af4(param_1,param_2,param_3);
  return;
}

