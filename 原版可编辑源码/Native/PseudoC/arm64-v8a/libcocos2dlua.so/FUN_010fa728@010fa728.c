
undefined8 FUN_010fa728(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  ushort *puVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_1 + 0x270);
  if (*(int *)(param_1 + 0x174) != 0) {
    iVar2 = *(int *)(lVar4 + 0x4c);
    if (iVar2 == 0) {
      FUN_010fad24(param_1);
      iVar2 = *(int *)(lVar4 + 0x4c);
    }
    *(int *)(lVar4 + 0x4c) = iVar2 + -1;
  }
  if (0 < *(int *)(param_1 + 0x1f0)) {
    uVar1 = *(uint *)(param_1 + 0x228);
    lVar5 = 0;
    do {
      iVar2 = FUN_010fae24(param_1,lVar4 + 0x150);
      if (iVar2 != 0) {
        puVar3 = *(ushort **)(param_2 + lVar5 * 8);
        *puVar3 = (ushort)(1 << (ulong)(uVar1 & 0x1f)) | *puVar3;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x1f0));
  }
  return 1;
}

