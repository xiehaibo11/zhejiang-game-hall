
/* v8::internal::compiler::hash_value(v8::internal::compiler::StoreGlobalParameters const&) */

void v8::internal::compiler::hash_value(StoreGlobalParameters *param_1)

{
  StoreGlobalParameters SVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  SVar1 = *param_1;
  uVar4 = *(ulong *)(param_1 + 8);
  uVar3 = *(ulong *)(param_1 + 0x10);
  uVar2 = base::hash_combine(0,(long)*(int *)(param_1 + 0x18));
  uVar3 = base::hash_value(uVar3);
  uVar3 = base::hash_combine(uVar2,uVar3);
  uVar4 = base::hash_value(uVar4);
  uVar4 = base::hash_combine(uVar3,uVar4);
  base::hash_combine(uVar4,(ulong)(byte)SVar1);
  return;
}

