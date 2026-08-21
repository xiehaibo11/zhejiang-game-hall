
/* v8::internal::Isolate::AreWasmThreadsEnabled(v8::internal::Handle<v8::internal::Context>) */

ulong __thiscall v8::internal::Isolate::AreWasmThreadsEnabled(Isolate *this,undefined8 param_2)

{
  ulong uVar1;
  
  if (*(code **)(this + 0xb780) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00f51aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(this + 0xb780))(param_2);
    return uVar1;
  }
  return (ulong)FLAG_experimental_wasm_threads;
}

