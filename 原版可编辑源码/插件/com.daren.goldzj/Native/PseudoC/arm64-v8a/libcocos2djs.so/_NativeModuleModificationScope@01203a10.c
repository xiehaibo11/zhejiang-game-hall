
/* v8::internal::wasm::NativeModuleModificationScope::~NativeModuleModificationScope() */

void __thiscall
v8::internal::wasm::NativeModuleModificationScope::~NativeModuleModificationScope
          (NativeModuleModificationScope *this)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  if ((((FLAG_wasm_write_protect_code_memory != '\0') && (lVar3 = *(long *)this, lVar3 != 0)) &&
      (iVar1 = *(int *)(lVar3 + 0x180) + -1, *(int *)(lVar3 + 0x180) = iVar1, iVar1 == 0)) &&
     (uVar2 = WasmCodeAllocator::SetExecutable(*(WasmCodeAllocator **)this,true), (uVar2 & 1) == 0))
  {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","success");
  }
  return;
}

