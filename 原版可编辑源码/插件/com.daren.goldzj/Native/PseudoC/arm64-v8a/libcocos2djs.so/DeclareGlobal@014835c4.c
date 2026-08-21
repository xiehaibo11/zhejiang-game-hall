
/* v8::internal::wasm::AsmJsParser::DeclareGlobal(v8::internal::wasm::AsmJsParser::VarInfo*, bool,
   v8::internal::wasm::AsmType*, v8::internal::wasm::ValueType, v8::internal::wasm::WasmInitExpr
   const&) */

void __thiscall
v8::internal::wasm::AsmJsParser::DeclareGlobal
          (AsmJsParser *this,undefined8 *param_1,byte param_2,undefined8 param_3,undefined4 param_5,
          undefined8 param_6)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 4) = 2;
  *param_1 = param_3;
  uVar1 = WasmModuleBuilder::AddGlobal(*(WasmModuleBuilder **)(this + 0xf0),param_5,1,param_6);
  *(undefined4 *)((long)param_1 + 0x1c) = uVar1;
  *(byte *)((long)param_1 + 0x24) = param_2 & 1;
  return;
}

