
/* v8::internal::compiler::hash_value(v8::internal::compiler::AllocateParameters) */

void __thiscall v8::internal::compiler::hash_value(compiler *this,uint param_2)

{
  ulong uVar1;
  
  uVar1 = base::hash_value(param_2 & 0xff);
  uVar1 = base::hash_combine(0,uVar1);
  base::hash_combine(uVar1,(ulong)this);
  return;
}

