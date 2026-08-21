
/* v8::internal::wasm::GetExportWrapperIndex(v8::internal::wasm::WasmModule const*,
   v8::internal::Signature<v8::internal::wasm::ValueType> const*, bool) */

int v8::internal::wasm::GetExportWrapperIndex(WasmModule *param_1,Signature *param_2,bool param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = SignatureMap::Find((SignatureMap *)(param_1 + 0x148),param_2);
  if (-1 < iVar1) {
    if (param_3) {
      iVar2 = *(int *)(param_1 + 0x168);
    }
    else {
      iVar2 = 0;
    }
    return iVar2 + iVar1;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","result >= 0");
}

