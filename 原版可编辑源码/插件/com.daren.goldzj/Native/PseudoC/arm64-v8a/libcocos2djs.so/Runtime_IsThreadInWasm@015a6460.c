
/* v8::internal::Runtime_IsThreadInWasm(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_IsThreadInWasm(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if (TracingFlags::runtime_stats == 0) {
    lVar1 = 0xc0;
    if (trap_handler::g_thread_in_wasm_code != 0) {
      lVar1 = 0xb8;
    }
    return *(undefined8 *)(param_3 + lVar1);
  }
  uVar2 = FUN_015a6498(param_1);
  return uVar2;
}

