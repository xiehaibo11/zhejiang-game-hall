
/* v8::internal::wasm::NativeModule::GetNearRuntimeStubEntry(v8::internal::wasm::WasmCode::RuntimeStubId,
   v8::internal::wasm::NativeModule::JumpTablesRef const&) const */

long __thiscall
v8::internal::wasm::NativeModule::GetNearRuntimeStubEntry
          (undefined8 param_1,int param_2,long param_3)

{
  return *(long *)(param_3 + 8) + (ulong)(uint)(param_2 << 4);
}

