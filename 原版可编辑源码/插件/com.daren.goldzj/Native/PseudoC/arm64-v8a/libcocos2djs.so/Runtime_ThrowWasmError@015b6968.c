
/* v8::internal::Runtime_ThrowWasmError(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_ThrowWasmError(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar4 = FUN_015b6a84(param_1,param_2,param_3);
    return uVar4;
  }
  if (trap_handler::g_is_trap_handler_enabled != '\0') {
    trap_handler::g_thread_in_wasm_code = 0;
  }
  uVar5 = *param_2;
  if ((uVar5 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_3 + 0x95a0);
    lVar1 = *(long *)(param_3 + 0x95a8);
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
    puVar2 = (undefined8 *)Factory::NewWasmRuntimeError((Factory *)param_3,(int)uVar5 >> 1,0,0,0);
    uVar3 = Isolate::Throw(param_3,*puVar2,0);
    if (param_3 != (Isolate *)0x0) {
      *(undefined8 *)(param_3 + 0x95a0) = uVar4;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar1) {
        *(long *)(param_3 + 0x95a8) = lVar1;
        HandleScope::DeleteExtensions(param_3);
      }
    }
    if (trap_handler::g_is_trap_handler_enabled != '\0') {
      trap_handler::g_thread_in_wasm_code = 1;
    }
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsSmi()");
}

