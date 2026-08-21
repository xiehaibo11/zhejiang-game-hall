
/* v8::internal::compiler::hash_value(v8::internal::compiler::ContextAccess const&) */

void v8::internal::compiler::hash_value(ContextAccess *param_1)

{
  uint uVar1;
  ushort uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = *(ushort *)(param_1 + 2);
  uVar1 = *(uint *)(param_1 + 4);
  uVar3 = base::hash_combine(0,(ulong)(byte)*param_1);
  uVar4 = base::hash_value((ulong)uVar1);
  uVar3 = base::hash_combine(uVar3,uVar4);
  uVar4 = base::hash_value((ulong)uVar2);
  base::hash_combine(uVar3,uVar4);
  return;
}

