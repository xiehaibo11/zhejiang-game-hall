
/* v8::internal::compiler::hash_value(v8::internal::compiler::CallRuntimeParameters const&) */

void v8::internal::compiler::hash_value(CallRuntimeParameters *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  uVar1 = base::hash_value(*(uint *)param_1);
  base::hash_combine(uVar2,uVar1);
  return;
}

