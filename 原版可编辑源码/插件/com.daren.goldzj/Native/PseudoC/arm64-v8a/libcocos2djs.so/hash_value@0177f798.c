
/* v8::internal::compiler::hash_value(v8::internal::compiler::StoreRepresentation) */

void v8::internal::compiler::hash_value(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = base::hash_combine(0,param_1 >> 8 & 0xff);
  base::hash_combine(uVar1,param_1 & 0xff);
  return;
}

