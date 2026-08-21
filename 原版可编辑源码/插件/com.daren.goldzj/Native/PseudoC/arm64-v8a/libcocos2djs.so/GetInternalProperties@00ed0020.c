
/* v8::debug::GetInternalProperties(v8::Isolate*, v8::Local<v8::Value>) */

void v8::debug::GetInternalProperties(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x2c60);
  *(undefined4 *)(param_1 + 0x2c60) = 5;
  internal::Runtime::GetInternalProperties();
  *(undefined4 *)(param_1 + 0x2c60) = uVar1;
  return;
}

