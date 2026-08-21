
void FUN_012f8e7c(long param_1)

{
  ushort uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 0x30);
  uVar1 = *(ushort *)(param_1 + 0x10);
  uVar2 = v8::base::hash_combine(0,*(ulong *)(param_1 + 0x38));
  uVar3 = v8::base::hash_value(uVar3);
  uVar3 = v8::base::hash_combine(uVar2,uVar3);
  v8::base::hash_combine(uVar3,(ulong)uVar1);
  return;
}

