
void FUN_01248a3c(long *param_1)

{
  Isolate *pIVar1;
  Isolate *local_68;
  char *pcStack_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  HandleScope aHStack_38 [24];
  
  pIVar1 = *(Isolate **)(*param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_38,pIVar1);
  local_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  pcStack_60 = "WebAssembly.Exception()";
  local_40 = 0;
  local_68 = pIVar1;
  v8::internal::wasm::ErrorThrower::TypeError
            ((char *)&local_68,"WebAssembly.Exception cannot be called");
  FUN_01249590(&local_68);
  v8::HandleScope::~HandleScope(aHStack_38);
  return;
}

