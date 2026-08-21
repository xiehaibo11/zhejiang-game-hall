
/* v8::internal::wasm::InstanceBuilder::WriteGlobalValue(v8::internal::wasm::WasmGlobal const&,
   long) */

void __thiscall
v8::internal::wasm::InstanceBuilder::WriteGlobalValue
          (InstanceBuilder *this,WasmGlobal *param_1,long param_2)

{
  if (*(long **)(this + 0x40) != (long *)0x0) {
    *(long *)(*(long *)(**(long **)(this + 0x40) + 0x13) + (long)*(int *)(param_1 + 0x18)) = param_2
    ;
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(location_) != nullptr");
}

