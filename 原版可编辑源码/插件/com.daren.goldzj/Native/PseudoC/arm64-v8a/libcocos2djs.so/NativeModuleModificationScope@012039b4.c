
/* v8::internal::wasm::NativeModuleModificationScope::NativeModuleModificationScope(v8::internal::wasm::NativeModule*)
    */

void __thiscall
v8::internal::wasm::NativeModuleModificationScope::NativeModuleModificationScope
          (NativeModuleModificationScope *this,NativeModule *param_1)

{
  int iVar1;
  ulong uVar2;
  
  *(NativeModule **)this = param_1;
  if ((((param_1 != (NativeModule *)0x0) && (FLAG_wasm_write_protect_code_memory != '\0')) &&
      (iVar1 = *(int *)(param_1 + 0x180), *(int *)(param_1 + 0x180) = iVar1 + 1, iVar1 == 0)) &&
     (uVar2 = WasmCodeAllocator::SetExecutable(*(WasmCodeAllocator **)this,false), (uVar2 & 1) == 0)
     ) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","success");
  }
  return;
}

