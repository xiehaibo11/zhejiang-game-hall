
void FUN_00e0d1e0(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x1724);
  uVar2 = 2 << (ulong)(uVar1 & 0x1f) | (uint)*(ushort *)(param_1 + 0x1720);
  *(short *)(param_1 + 0x1720) = (short)uVar2;
  if ((int)uVar1 < 0xe) {
    iVar4 = uVar1 + 3;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar1 + 1;
    *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar1) = (char)uVar2;
    uVar1 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar1 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar1) = *(undefined1 *)(param_1 + 0x1721);
    uVar2 = 2 >> (ulong)(0x10U - *(int *)(param_1 + 0x1724) & 0x1f);
    *(short *)(param_1 + 0x1720) = (short)uVar2;
    iVar4 = *(int *)(param_1 + 0x1724) + -0xd;
  }
  uVar3 = (undefined1)uVar2;
  *(int *)(param_1 + 0x1724) = iVar4;
  if (iVar4 < 10) {
    iVar4 = iVar4 + 7;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar1 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar1) = uVar3;
    uVar1 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar1 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar1) = *(undefined1 *)(param_1 + 0x1721);
    *(undefined2 *)(param_1 + 0x1720) = 0;
    iVar4 = *(int *)(param_1 + 0x1724) + -9;
    uVar3 = 0;
  }
  *(int *)(param_1 + 0x1724) = iVar4;
  if (iVar4 == 0x10) {
    uVar1 = *(uint *)(param_1 + 0x28);
    iVar4 = 0;
    *(uint *)(param_1 + 0x28) = uVar1 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar1) = uVar3;
    uVar1 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar1 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar1) = *(undefined1 *)(param_1 + 0x1721);
    *(undefined2 *)(param_1 + 0x1720) = 0;
  }
  else {
    if (iVar4 < 8) {
      return;
    }
    uVar1 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar1 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar1) = uVar3;
    iVar4 = *(int *)(param_1 + 0x1724) + -8;
    *(ushort *)(param_1 + 0x1720) = (ushort)*(byte *)(param_1 + 0x1721);
  }
  *(int *)(param_1 + 0x1724) = iVar4;
  return;
}

