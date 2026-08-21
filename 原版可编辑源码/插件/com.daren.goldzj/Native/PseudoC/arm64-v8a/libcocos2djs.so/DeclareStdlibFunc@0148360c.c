
/* v8::internal::wasm::AsmJsParser::DeclareStdlibFunc(v8::internal::wasm::AsmJsParser::VarInfo*,
   v8::internal::wasm::AsmJsParser::VarKind, v8::internal::wasm::AsmType*) */

void __thiscall
v8::internal::wasm::AsmJsParser::DeclareStdlibFunc
          (undefined8 param_1_00,undefined8 *param_1,undefined4 param_3,undefined8 param_4)

{
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 4) = param_3;
  *param_1 = param_4;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  return;
}

