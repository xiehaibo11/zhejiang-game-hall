
void FUN_012f8c0c(long param_1)

{
  ushort uVar1;
  ulong uVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x10);
  uVar2 = v8::base::hash_combine(*(ulong *)(param_1 + 0x38),*(ulong *)(param_1 + 0x30));
  v8::base::hash_combine(uVar2,(ulong)uVar1);
  return;
}

