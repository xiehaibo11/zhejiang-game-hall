
uint FUN_00c0ffa8(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_2 - *(long *)(param_1 + 0xb8);
  if (0xfff < uVar3) {
    return 0xffffffff;
  }
  iVar2 = (int)uVar3;
  uVar1 = iVar2 - 0x20U >> 3;
  if (iVar2 != (uVar1 + 4) * 8) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

