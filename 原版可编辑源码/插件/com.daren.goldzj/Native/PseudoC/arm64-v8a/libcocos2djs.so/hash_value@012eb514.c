
/* v8::internal::compiler::hash_value(v8::internal::compiler::ElementsTransition) */

void v8::internal::compiler::hash_value(byte *param_1)

{
  byte bVar1;
  ulong uVar2;
  
  bVar1 = *param_1;
  uVar2 = base::hash_combine(*(ulong *)(param_1 + 8),*(ulong *)(param_1 + 0x10));
  base::hash_combine(uVar2,(ulong)bVar1);
  return;
}

