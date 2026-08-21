
/* v8::internal::CodeFactory::LoadGlobalIC(v8::internal::Isolate*, v8::internal::TypeofMode) */

void v8::internal::CodeFactory::LoadGlobalIC(Builtins *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x16b;
  if (param_2 != 1) {
    uVar1 = 0x16c;
  }
  Builtins::CallableFor(param_1,uVar1);
  return;
}

