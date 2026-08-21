
/* v8::internal::wasm::WasmError::FormatError(char const*, std::__va_list) */

void __thiscall
v8::internal::wasm::WasmError::FormatError
          (undefined8 *param_1_00,WasmError *this,undefined8 *param_1)

{
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  *param_1_00 = 0;
  param_1_00[1] = 0;
  param_1_00[2] = 0;
  uStack_28 = param_1[1];
  local_30 = *param_1;
  uStack_18 = param_1[3];
  uStack_20 = param_1[2];
  FUN_01257fe0(param_1_00,0,this,&local_30);
  return;
}

