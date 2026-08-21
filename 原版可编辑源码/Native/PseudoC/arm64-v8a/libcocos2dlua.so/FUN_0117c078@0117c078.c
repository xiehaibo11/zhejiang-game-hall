
void FUN_0117c078(long param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x1724) == 0x10) {
    uVar1 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar1 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar1) = *(undefined1 *)(param_1 + 0x1720);
    uVar1 = *(uint *)(param_1 + 0x28);
    iVar2 = 0;
    *(uint *)(param_1 + 0x28) = uVar1 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar1) = *(undefined1 *)(param_1 + 0x1721);
    *(undefined2 *)(param_1 + 0x1720) = 0;
  }
  else {
    if (*(int *)(param_1 + 0x1724) < 8) {
      return;
    }
    uVar1 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar1 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar1) = *(undefined1 *)(param_1 + 0x1720);
    *(ushort *)(param_1 + 0x1720) = (ushort)*(byte *)(param_1 + 0x1721);
    iVar2 = *(int *)(param_1 + 0x1724) + -8;
  }
  *(int *)(param_1 + 0x1724) = iVar2;
  return;
}

