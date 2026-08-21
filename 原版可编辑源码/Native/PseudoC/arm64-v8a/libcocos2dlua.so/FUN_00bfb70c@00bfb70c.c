
ulong FUN_00bfb70c(ulong *param_1)

{
  ulong uVar1;
  int iVar2;
  
  uVar1 = *param_1;
  iVar2 = (int)((long)uVar1 >> 0x2f);
  if (iVar2 == -0xd) {
    return (uVar1 & 0x7fffffffffff) + 0x30;
  }
  if (iVar2 != -4) {
    if (iVar2 != -0xb) {
      uVar1 = uVar1 & 0x7fffffffffff;
      if (iVar2 + 4U < 0xfffffff7) {
        uVar1 = 0;
      }
      return uVar1;
    }
    return (uVar1 & 0x7fffffffffff) + 0x10;
  }
  return uVar1 & 0x7fffffffffff;
}

