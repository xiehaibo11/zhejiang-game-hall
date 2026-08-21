
/* v8::internal::wasm::WasmModuleBuilder::AddGlobalImport(v8::internal::Vector<char const>,
   v8::internal::wasm::ValueType, bool) */

int v8::internal::wasm::WasmModuleBuilder::AddGlobalImport
              (long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,byte param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  byte bStack_3f;
  undefined6 uStack_3e;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_40 = 0x7f;
  local_50 = param_2;
  uStack_48 = param_3;
  switch(param_4) {
  case 0:
    local_40 = 0x40;
    break;
  case 1:
    break;
  case 2:
    local_40 = 0x7e;
    break;
  case 3:
    local_40 = 0x7d;
    break;
  case 4:
    local_40 = 0x7c;
    break;
  case 5:
    local_40 = 0x7b;
    break;
  case 6:
    local_40 = 0x6f;
    break;
  case 7:
    local_40 = 0x70;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 9:
    local_40 = 0x68;
  }
  bStack_3f = param_5 & 1;
  puVar1 = *(undefined8 **)(param_1 + 0x50);
  if (puVar1 < *(undefined8 **)(param_1 + 0x58)) {
    puVar1[2] = CONCAT62(uStack_3e,CONCAT11(param_5,local_40)) & 0xffffffffffff01ff;
    puVar1[1] = param_3;
    *puVar1 = param_2;
    lVar3 = *(long *)(param_1 + 0x50) + 0x18;
    *(long *)(param_1 + 0x50) = lVar3;
  }
  else {
    std::__ndk1::
    vector<v8::internal::wasm::WasmModuleBuilder::WasmGlobalImport,v8::internal::ZoneAllocator<v8::internal::wasm::WasmModuleBuilder::WasmGlobalImport>>
    ::__push_back_slow_path<v8::internal::wasm::WasmModuleBuilder::WasmGlobalImport>
              ((vector<v8::internal::wasm::WasmModuleBuilder::WasmGlobalImport,v8::internal::ZoneAllocator<v8::internal::wasm::WasmModuleBuilder::WasmGlobalImport>>
                *)(param_1 + 0x48),(WasmGlobalImport *)&local_50);
    lVar3 = *(long *)(param_1 + 0x50);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return (int)((ulong)(lVar3 - *(long *)(param_1 + 0x48)) >> 3) * -0x55555555 + -1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

