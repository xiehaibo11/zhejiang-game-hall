
/* v8::internal::compiler::hash_value(v8::internal::compiler::IfValueParameters const&) */

void v8::internal::compiler::hash_value(IfValueParameters *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)param_1;
  uVar2 = *(uint *)(param_1 + 4);
  uVar3 = base::hash_combine(0,(ulong)(byte)param_1[8]);
  uVar4 = base::hash_value(uVar2);
  uVar3 = base::hash_combine(uVar3,uVar4);
  uVar4 = base::hash_value(uVar1);
  base::hash_combine(uVar3,uVar4);
  return;
}

