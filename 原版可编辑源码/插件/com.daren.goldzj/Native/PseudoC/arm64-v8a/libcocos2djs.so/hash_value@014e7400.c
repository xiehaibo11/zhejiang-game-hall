
/* v8::internal::hash_value(v8::internal::StringCons const&) */

void v8::internal::hash_value(StringCons *param_1)

{
  StringConstantBase *pSVar1;
  ulong uVar2;
  ulong uVar3;
  
  pSVar1 = *(StringConstantBase **)(param_1 + 0x10);
  uVar2 = hash_value(*(StringConstantBase **)(param_1 + 0x18));
  uVar2 = base::hash_combine(0,uVar2);
  uVar3 = hash_value(pSVar1);
  base::hash_combine(uVar2,uVar3);
  return;
}

