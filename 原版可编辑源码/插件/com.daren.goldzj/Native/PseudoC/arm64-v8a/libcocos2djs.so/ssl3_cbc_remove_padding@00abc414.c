
uint ssl3_cbc_remove_padding(long param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 8);
  if (uVar2 < param_3 + 1U) {
    return 0;
  }
  uVar3 = (uint)*(byte *)(*(long *)(param_1 + 0x18) + (ulong)(uVar2 - 1));
  uVar1 = param_3 + 1U + uVar3;
  uVar3 = uVar3 + 1;
  uVar1 = (int)((uVar2 - uVar1 ^ uVar1 | uVar1 ^ uVar2) ^ uVar2 |
               param_2 - uVar3 & (param_2 ^ 0xffffffff)) >> 0x1f;
  *(uint *)(param_1 + 8) = uVar2 - (uVar3 & (uVar1 ^ 0xffffffff));
  return uVar1 | 1;
}

