
/* v8::internal::wasm::WasmModuleBuilder::AddImport(v8::internal::Vector<char const>,
   v8::internal::Signature<v8::internal::wasm::ValueType>*) */

int v8::internal::wasm::WasmModuleBuilder::AddImport
              (WasmModuleBuilder *param_1,undefined8 param_2,undefined8 param_3,Signature *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_50 = param_2;
  uStack_48 = param_3;
  local_40 = AddSignature(param_1,param_4);
  puVar1 = *(undefined8 **)(param_1 + 0x30);
  if (puVar1 < *(undefined8 **)(param_1 + 0x38)) {
    puVar1[2] = CONCAT44(uStack_3c,local_40);
    puVar1[1] = uStack_48;
    *puVar1 = local_50;
    lVar3 = *(long *)(param_1 + 0x30) + 0x18;
    *(long *)(param_1 + 0x30) = lVar3;
  }
  else {
    std::__ndk1::
    vector<v8::internal::wasm::WasmModuleBuilder::WasmFunctionImport,v8::internal::ZoneAllocator<v8::internal::wasm::WasmModuleBuilder::WasmFunctionImport>>
    ::__push_back_slow_path<v8::internal::wasm::WasmModuleBuilder::WasmFunctionImport>
              ((vector<v8::internal::wasm::WasmModuleBuilder::WasmFunctionImport,v8::internal::ZoneAllocator<v8::internal::wasm::WasmModuleBuilder::WasmFunctionImport>>
                *)(param_1 + 0x28),(WasmFunctionImport *)&local_50);
    lVar3 = *(long *)(param_1 + 0x30);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return (int)((ulong)(lVar3 - *(long *)(param_1 + 0x28)) >> 3) * -0x55555555 + -1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

