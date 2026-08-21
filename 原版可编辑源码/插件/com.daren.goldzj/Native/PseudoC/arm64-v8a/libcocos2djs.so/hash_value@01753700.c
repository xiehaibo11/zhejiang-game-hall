
/* v8::internal::compiler::hash_value(v8::internal::compiler::GetTemplateObjectParameters const&) */

void v8::internal::compiler::hash_value(GetTemplateObjectParameters *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = *(ulong *)param_1;
  uVar2 = *(ulong *)(param_1 + 8);
  uVar4 = *(ulong *)(param_1 + 0x10);
  uVar1 = base::hash_combine(0,(long)*(int *)(param_1 + 0x18));
  uVar4 = base::hash_value(uVar4);
  uVar1 = base::hash_combine(uVar1,uVar4);
  uVar2 = base::hash_value(uVar2);
  uVar2 = base::hash_combine(uVar1,uVar2);
  uVar3 = base::hash_value(uVar3);
  base::hash_combine(uVar2,uVar3);
  return;
}

