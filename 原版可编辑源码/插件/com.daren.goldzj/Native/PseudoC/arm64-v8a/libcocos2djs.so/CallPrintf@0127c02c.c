
/* v8::internal::TurboAssembler::CallPrintf(int, v8::internal::CPURegister const*) */

void v8::internal::TurboAssembler::CallPrintf(int param_1,CPURegister *param_2)

{
  undefined8 uVar1;
  
  uVar1 = ExternalReference::printf_function();
  Call((TurboAssembler *)param_1,uVar1);
  return;
}

