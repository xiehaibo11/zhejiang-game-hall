
char * FUN_0123e76c(int param_1)

{
  char *pcVar1;
  
  if (param_1 == 0xff) {
    return "InternalBreakpoint";
  }
  pcVar1 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName();
  return pcVar1;
}

