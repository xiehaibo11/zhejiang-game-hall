
/* v8::internal::compiler::hash_value(v8::internal::compiler::ConstructParameters const&) */

void v8::internal::compiler::hash_value(ConstructParameters *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *(uint *)param_1;
  uVar3 = *(ulong *)(param_1 + 8);
  uVar2 = base::hash_combine(0,(long)*(int *)(param_1 + 0x10));
  uVar3 = base::hash_value(uVar3);
  uVar2 = base::hash_combine(uVar2,uVar3);
  uVar2 = base::hash_combine(uVar2,(ulong)*(uint *)(param_1 + 4));
  uVar3 = base::hash_value(uVar1);
  base::hash_combine(uVar2,uVar3);
  return;
}

