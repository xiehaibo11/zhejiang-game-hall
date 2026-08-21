
void FUN_012f82b8(long param_1)

{
  ushort uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 0x2c);
  uVar1 = *(ushort *)(param_1 + 0x10);
  uVar2 = v8::base::hash_combine(0,uVar3 >> 0x20 & 0xff);
  uVar3 = v8::base::hash_value((uint)uVar3);
  uVar2 = v8::base::hash_combine(uVar2,uVar3);
  v8::base::hash_combine(uVar2,(ulong)uVar1);
  return;
}

