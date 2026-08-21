
uint png_set_option(long param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 1;
  if (((param_1 != 0) && (param_2 < 6)) && ((param_2 & 1) == 0)) {
    uVar1 = 3 << (ulong)(param_2 & 0x1f);
    iVar3 = 2;
    if (param_3 != 0) {
      iVar3 = 3;
    }
    uVar2 = (uVar1 & *(byte *)(param_1 + 0x400)) >> (ulong)(param_2 & 0x1f);
    *(byte *)(param_1 + 0x400) =
         *(byte *)(param_1 + 0x400) & ((byte)uVar1 ^ 0xff) |
         (byte)(iVar3 << (ulong)(param_2 & 0x1f));
  }
  return uVar2;
}

