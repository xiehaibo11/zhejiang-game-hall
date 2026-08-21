
void TIFFSetDirectory(long param_1,short param_2)

{
  short sVar1;
  int iVar2;
  ulong local_28;
  
  sVar1 = param_2;
  if ((*(byte *)(param_1 + 0x12) >> 3 & 1) == 0) {
    local_28 = (ulong)*(uint *)(param_1 + 0x26c);
  }
  else {
    local_28 = *(ulong *)(param_1 + 0x270);
  }
  while ((sVar1 != 0 && (local_28 != 0))) {
    iVar2 = FUN_011121f8(param_1,&local_28,0);
    if (iVar2 == 0) {
      return;
    }
    sVar1 = sVar1 + -1;
  }
  *(ulong *)(param_1 + 0x20) = local_28;
  *(short *)(param_1 + 0x280) = (param_2 + -1) - sVar1;
  *(undefined2 *)(param_1 + 0x32) = 0;
  TIFFReadDirectory(param_1);
  return;
}

