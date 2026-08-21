
/* v8::internal::wasm::NativeModule::GetNearCallTargetForFunction(unsigned int,
   v8::internal::wasm::NativeModule::JumpTablesRef const&) const */

long __thiscall
v8::internal::wasm::NativeModule::GetNearCallTargetForFunction
          (NativeModule *this,uint param_1,JumpTablesRef *param_2)

{
  return *(long *)param_2 + (ulong)((param_1 - *(int *)(*(long *)(this + 200) + 0x3c)) * 4);
}

