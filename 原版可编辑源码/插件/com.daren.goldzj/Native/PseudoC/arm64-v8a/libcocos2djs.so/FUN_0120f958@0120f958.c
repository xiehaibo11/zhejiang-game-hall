
void FUN_0120f958(long param_1)

{
  Isolate *pIVar1;
  Mutex *this;
  
  pIVar1 = *(Isolate **)(param_1 + 0x18);
  if (pIVar1 != (Isolate *)0x0) {
    if (*(long *)(param_1 + 0x10) != 0) {
      this = *(Mutex **)(param_1 + 8);
      v8::base::Mutex::Lock(this);
      **(undefined8 **)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      v8::base::Mutex::Unlock(this);
      pIVar1 = *(Isolate **)(param_1 + 0x18);
    }
    v8::internal::wasm::WasmEngine::LogOutstandingCodesForIsolate
              (*(WasmEngine **)(param_1 + 0x20),pIVar1);
    return;
  }
  return;
}

