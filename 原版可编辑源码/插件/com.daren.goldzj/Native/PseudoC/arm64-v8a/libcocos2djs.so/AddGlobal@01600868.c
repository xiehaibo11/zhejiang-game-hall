
/* v8::internal::wasm::WasmModuleBuilder::AddGlobal(v8::internal::wasm::ValueType, bool,
   v8::internal::wasm::WasmInitExpr const&) */

int __thiscall
v8::internal::wasm::WasmModuleBuilder::AddGlobal
          (WasmModuleBuilder *this,WasmGlobal param_2,byte param_3,ulong *param_4)

{
  ulong *puVar1;
  long lVar2;
  WasmGlobal local_38;
  byte bStack_37;
  undefined6 uStack_36;
  ulong uStack_30;
  ulong uStack_28;
  
  bStack_37 = param_3 & 1;
  uStack_28 = param_4[1];
  uStack_30 = *param_4;
  puVar1 = *(ulong **)(this + 0x110);
  if (puVar1 < *(ulong **)(this + 0x118)) {
    puVar1[2] = uStack_28;
    puVar1[1] = uStack_30;
    *puVar1 = CONCAT62(uStack_36,CONCAT11(param_3,param_2)) & 0xffffffffffff01ff;
    lVar2 = *(long *)(this + 0x110) + 0x18;
    *(long *)(this + 0x110) = lVar2;
  }
  else {
    local_38 = param_2;
    std::__ndk1::
    vector<v8::internal::wasm::WasmModuleBuilder::WasmGlobal,v8::internal::ZoneAllocator<v8::internal::wasm::WasmModuleBuilder::WasmGlobal>>
    ::__push_back_slow_path<v8::internal::wasm::WasmModuleBuilder::WasmGlobal>
              ((vector<v8::internal::wasm::WasmModuleBuilder::WasmGlobal,v8::internal::ZoneAllocator<v8::internal::wasm::WasmModuleBuilder::WasmGlobal>>
                *)(this + 0x108),&local_38);
    lVar2 = *(long *)(this + 0x110);
  }
  return (int)((ulong)(lVar2 - *(long *)(this + 0x108)) >> 3) * -0x55555555 + -1;
}

