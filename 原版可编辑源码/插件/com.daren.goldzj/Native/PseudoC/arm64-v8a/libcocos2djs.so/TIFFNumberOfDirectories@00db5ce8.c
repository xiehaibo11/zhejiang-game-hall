
int TIFFNumberOfDirectories(long param_1)

{
  int iVar1;
  int iVar2;
  ulong local_28;
  
  if ((*(byte *)(param_1 + 0x12) >> 3 & 1) == 0) {
    local_28 = (ulong)*(uint *)(param_1 + 0x26c);
  }
  else {
    local_28 = *(ulong *)(param_1 + 0x270);
  }
  iVar2 = 0;
  while ((local_28 != 0 && (iVar1 = FUN_00db5d50(param_1,&local_28,0), iVar1 != 0))) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

