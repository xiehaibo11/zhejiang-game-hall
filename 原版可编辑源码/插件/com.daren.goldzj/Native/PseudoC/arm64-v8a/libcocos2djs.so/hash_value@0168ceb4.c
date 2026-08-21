
/* v8::internal::compiler::hash_value(v8::internal::compiler::DeoptimizeParameters) */

void v8::internal::compiler::hash_value(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  
  bVar1 = *param_1;
  uVar4 = *(ulong *)(param_1 + 8);
  bVar2 = param_1[1];
  uVar3 = base::hash_combine(0,(long)*(int *)(param_1 + 0x10));
  uVar4 = base::hash_value(uVar4);
  uVar3 = base::hash_combine(uVar3,uVar4);
  uVar4 = base::hash_combine(0,(ulong)param_1[0x18]);
  uVar3 = base::hash_value(uVar3);
  uVar3 = base::hash_combine(uVar4,uVar3);
  uVar4 = internal::hash_value(bVar2);
  uVar3 = base::hash_combine(uVar3,uVar4);
  base::hash_combine(uVar3,(ulong)bVar1);
  return;
}

