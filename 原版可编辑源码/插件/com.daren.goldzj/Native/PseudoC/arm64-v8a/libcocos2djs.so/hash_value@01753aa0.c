
/* v8::internal::compiler::hash_value(v8::internal::compiler::CreateLiteralParameters const&) */

void v8::internal::compiler::hash_value(CreateLiteralParameters *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)param_1;
  uVar3 = *(ulong *)(param_1 + 8);
  uVar2 = base::hash_combine(0,(long)*(int *)(param_1 + 0x10));
  uVar3 = base::hash_value(uVar3);
  uVar3 = base::hash_combine(uVar2,uVar3);
  uVar1 = *(uint *)(param_1 + 0x18);
  uVar2 = base::hash_value(*(uint *)(param_1 + 0x1c));
  uVar2 = base::hash_combine(0,uVar2);
  uVar4 = base::hash_value(uVar1);
  uVar2 = base::hash_combine(uVar2,uVar4);
  uVar3 = base::hash_value(uVar3);
  uVar3 = base::hash_combine(uVar2,uVar3);
  uVar5 = base::hash_value(uVar5);
  base::hash_combine(uVar3,uVar5);
  return;
}

