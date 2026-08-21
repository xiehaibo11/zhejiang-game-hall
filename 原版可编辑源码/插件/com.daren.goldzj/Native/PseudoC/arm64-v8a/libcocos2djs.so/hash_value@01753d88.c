
/* v8::internal::compiler::hash_value(v8::internal::compiler::GetIteratorParameters const&) */

void v8::internal::compiler::hash_value(GetIteratorParameters *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)param_1;
  uVar1 = base::hash_combine(0,(long)*(int *)(param_1 + 8));
  uVar2 = base::hash_value(uVar2);
  uVar1 = base::hash_combine(uVar1,uVar2);
  uVar3 = *(ulong *)(param_1 + 0x10);
  uVar2 = base::hash_combine(0,(long)*(int *)(param_1 + 0x18));
  uVar3 = base::hash_value(uVar3);
  uVar2 = base::hash_combine(uVar2,uVar3);
  base::hash_combine(uVar1,uVar2);
  return;
}

