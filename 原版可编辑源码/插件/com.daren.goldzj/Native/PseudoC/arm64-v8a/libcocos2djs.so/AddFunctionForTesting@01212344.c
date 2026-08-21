
/* WARNING: Removing unreachable block (ram,0x01212468) */
/* WARNING: Removing unreachable block (ram,0x012123b0) */
/* WARNING: Removing unreachable block (ram,0x012123b8) */
/* WARNING: Removing unreachable block (ram,0x012123d0) */
/* WARNING: Removing unreachable block (ram,0x012123d8) */
/* WARNING: Removing unreachable block (ram,0x012123f0) */
/* WARNING: Removing unreachable block (ram,0x01212474) */
/* v8::internal::wasm::WasmInterpreter::AddFunctionForTesting(v8::internal::wasm::WasmFunction
   const*) */

void __thiscall
v8::internal::wasm::WasmInterpreter::AddFunctionForTesting
          (WasmInterpreter *this,WasmFunction *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  WasmFunction *local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar2 = *(long *)(this + 0x40);
  local_60 = *(undefined8 *)(lVar2 + 0x20);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  uStack_40 = 0;
  local_48 = 0;
  uStack_50 = 0;
  local_58 = 0;
  local_38 = 0;
  local_68 = 0;
  puVar1 = *(undefined8 **)(lVar2 + 0x38);
  if (puVar1 == *(undefined8 **)(lVar2 + 0x40)) {
    local_88 = param_1;
    std::__ndk1::
    vector<v8::internal::wasm::InterpreterCode,v8::internal::ZoneAllocator<v8::internal::wasm::InterpreterCode>>
    ::__push_back_slow_path<v8::internal::wasm::InterpreterCode_const&>
              ((vector<v8::internal::wasm::InterpreterCode,v8::internal::ZoneAllocator<v8::internal::wasm::InterpreterCode>>
                *)(lVar2 + 0x30),(InterpreterCode *)&local_88);
  }
  else {
    *puVar1 = param_1;
    *(undefined4 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = local_60;
    puVar1[10] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    *(long *)(lVar2 + 0x38) = *(long *)(lVar2 + 0x38) + 0x58;
  }
  return;
}

