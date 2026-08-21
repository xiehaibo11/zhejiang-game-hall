
/* v8::internal::wasm::WasmEngine::HasRunningCompileJob(v8::internal::Isolate*) */

undefined4 __thiscall
v8::internal::wasm::WasmEngine::HasRunningCompileJob(WasmEngine *this,Isolate *param_1)

{
  long *plVar1;
  undefined4 uVar2;
  
  base::Mutex::Lock((Mutex *)(this + 0x100));
  plVar1 = *(long **)(this + 0x138);
  do {
    if (plVar1 == (long *)0x0) {
      uVar2 = 0;
LAB_0120aea8:
      base::Mutex::Unlock((Mutex *)(this + 0x100));
      return uVar2;
    }
    if (*(Isolate **)plVar1[2] == param_1) {
      uVar2 = 1;
      goto LAB_0120aea8;
    }
    plVar1 = (long *)*plVar1;
  } while( true );
}

