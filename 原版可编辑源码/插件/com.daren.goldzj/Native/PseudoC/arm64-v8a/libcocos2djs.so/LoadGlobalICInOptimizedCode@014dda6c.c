
/* v8::internal::CodeFactory::LoadGlobalICInOptimizedCode(v8::internal::Isolate*,
   v8::internal::TypeofMode) */

void v8::internal::CodeFactory::LoadGlobalICInOptimizedCode(Builtins *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x169;
  if (param_2 != 1) {
    uVar1 = 0x16a;
  }
  Builtins::CallableFor(param_1,uVar1);
  return;
}

