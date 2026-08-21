
int FUN_00bfc8bc(long param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x50);
  if ((*(uint *)(param_1 + 0xc) < param_2) || (lVar2 == 0)) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x48);
  if (*(uint *)(param_1 + 0xc) == param_2) {
    return iVar1 + *(int *)(param_1 + 0x4c);
  }
  if (param_2 != 0) {
    param_2 = param_2 - 1;
    if (*(int *)(param_1 + 0x4c) < 0x100) {
      return (uint)*(byte *)(lVar2 + (ulong)param_2) + iVar1;
    }
    if (*(int *)(param_1 + 0x4c) < 0x10000) {
      return (uint)*(ushort *)(lVar2 + (ulong)param_2 * 2) + iVar1;
    }
    iVar1 = iVar1 + *(int *)(lVar2 + (ulong)param_2 * 4);
  }
  return iVar1;
}

