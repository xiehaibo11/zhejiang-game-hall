
/* v8::internal::compiler::hash_value(v8::internal::compiler::LoadTransformParameters) */

void v8::internal::compiler::hash_value(long param_1)

{
  ulong uVar1;
  
  uVar1 = base::hash_combine(0,param_1 >> 0x20);
  base::hash_combine(uVar1,(long)(int)param_1);
  return;
}

