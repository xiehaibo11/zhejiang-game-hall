
/* v8::internal::Runtime_WasmCompileLazy(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_WasmCompileLazy(int param_1,ulong *param_2,Isolate *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  NativeModule *this;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar4 = FUN_015b8e64(param_1,param_2,param_3);
    return uVar4;
  }
  uVar4 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar5 = *param_2;
  if (((uVar5 & 1) != 0) &&
     (uVar6 = uVar5 & 0xffffffff00000000,
     *(short *)((uVar6 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0x434)) {
    if ((param_2[-1] & 1) == 0) {
      uVar1 = (int)param_2[-1] >> 1;
      if (trap_handler::g_is_trap_handler_enabled != '\0') {
        trap_handler::g_thread_in_wasm_code = 0;
        uVar5 = *param_2;
        uVar6 = uVar5 & 0xffffffff00000000;
      }
      *(ulong *)(param_3 + 0x2bc8) = uVar6 | *(uint *)(uVar5 + 0x77);
      uVar5 = *param_2 & 0xffffffff00000000;
      this = (NativeModule *)
             **(undefined8 **)
               (*(long *)((uVar5 | *(uint *)((uVar5 | *(uint *)(*param_2 + 0x6f)) + 0xb)) + 3) +
               0x18);
      uVar5 = wasm::CompileLazy(param_3,this,uVar1);
      if ((uVar5 & 1) == 0) {
        uVar3 = *(undefined8 *)(param_3 + 0x180);
      }
      else {
        uVar3 = wasm::NativeModule::GetCallTargetForFunction(this,uVar1);
      }
      if (trap_handler::g_is_trap_handler_enabled != '\0') {
        trap_handler::g_thread_in_wasm_code = 1;
      }
      *(undefined8 *)(param_3 + 0x95a0) = uVar4;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar2) {
        *(long *)(param_3 + 0x95a8) = lVar2;
        HandleScope::DeleteExtensions(param_3);
      }
      return uVar3;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsSmi()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsWasmInstanceObject()");
}

