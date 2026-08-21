
/* v8::internal::wasm::WasmModuleBuilder::AddExportedGlobal(v8::internal::wasm::ValueType, bool,
   v8::internal::wasm::WasmInitExpr const&, v8::internal::Vector<char const>) */

int v8::internal::wasm::WasmModuleBuilder::AddExportedGlobal
              (long param_1,undefined1 param_2,undefined1 param_3,ulong *param_4,undefined8 param_5,
              undefined8 param_6)

{
  ulong *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  ulong local_48;
  ulong uStack_40;
  undefined8 uStack_38;
  
  local_48 = CONCAT62(local_48._2_6_,CONCAT11(param_3,param_2)) & 0xffffffffffff01ff;
  uStack_38 = param_4[1];
  uStack_40 = *param_4;
  puVar1 = *(ulong **)(param_1 + 0x110);
  if (puVar1 < *(ulong **)(param_1 + 0x118)) {
    puVar1[2] = uStack_38;
    puVar1[1] = uStack_40;
    *puVar1 = local_48;
    lVar4 = *(long *)(param_1 + 0x110) + 0x18;
    *(long *)(param_1 + 0x110) = lVar4;
  }
  else {
    std::__ndk1::
    vector<v8::internal::wasm::WasmModuleBuilder::WasmGlobal,v8::internal::ZoneAllocator<v8::internal::wasm::WasmModuleBuilder::WasmGlobal>>
    ::__push_back_slow_path<v8::internal::wasm::WasmModuleBuilder::WasmGlobal>
              ((vector<v8::internal::wasm::WasmModuleBuilder::WasmGlobal,v8::internal::ZoneAllocator<v8::internal::wasm::WasmModuleBuilder::WasmGlobal>>
                *)(param_1 + 0x108),(WasmGlobal *)&local_48);
    lVar4 = *(long *)(param_1 + 0x110);
  }
  iVar3 = (int)((ulong)(lVar4 - *(long *)(param_1 + 0x108)) >> 3) * -0x55555555 + -1;
  uStack_38 = CONCAT71(uStack_38._1_7_,3);
  uStack_38 = CONCAT44(iVar3,(undefined4)uStack_38);
  puVar2 = *(undefined8 **)(param_1 + 0x70);
  if (puVar2 < *(undefined8 **)(param_1 + 0x78)) {
    puVar2[2] = uStack_38;
    puVar2[1] = param_6;
    *puVar2 = param_5;
    *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + 0x18;
  }
  else {
    local_48 = param_5;
    uStack_40 = param_6;
    std::__ndk1::
    vector<v8::internal::wasm::WasmModuleBuilder::WasmExport,v8::internal::ZoneAllocator<v8::internal::wasm::WasmModuleBuilder::WasmExport>>
    ::__push_back_slow_path<v8::internal::wasm::WasmModuleBuilder::WasmExport>
              ((vector<v8::internal::wasm::WasmModuleBuilder::WasmExport,v8::internal::ZoneAllocator<v8::internal::wasm::WasmModuleBuilder::WasmExport>>
                *)(param_1 + 0x68),(WasmExport *)&local_48);
  }
  return iVar3;
}

