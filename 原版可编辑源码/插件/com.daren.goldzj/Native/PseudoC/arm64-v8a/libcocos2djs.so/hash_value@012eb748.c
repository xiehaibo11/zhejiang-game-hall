
/* v8::internal::compiler::hash_value(v8::internal::compiler::NumberOperationParameters const&) */

void v8::internal::compiler::hash_value(NumberOperationParameters *param_1)

{
  NumberOperationParameters NVar1;
  ulong uVar2;
  ulong uVar3;
  
  NVar1 = *param_1;
  uVar3 = *(ulong *)(param_1 + 8);
  uVar2 = base::hash_combine(0,(long)*(int *)(param_1 + 0x10));
  uVar3 = base::hash_value(uVar3);
  uVar2 = base::hash_combine(uVar2,uVar3);
  base::hash_combine(uVar2,(ulong)(byte)NVar1);
  return;
}

