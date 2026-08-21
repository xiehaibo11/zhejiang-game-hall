
/* v8::internal::compiler::hash_value(v8::internal::compiler::ObjectStateInfo const&) */

void v8::internal::compiler::hash_value(ObjectStateInfo *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *(uint *)param_1;
  uVar2 = base::hash_value(*(uint *)(param_1 + 4));
  uVar2 = base::hash_combine(0,uVar2);
  uVar3 = base::hash_value(uVar1);
  base::hash_combine(uVar2,uVar3);
  return;
}

