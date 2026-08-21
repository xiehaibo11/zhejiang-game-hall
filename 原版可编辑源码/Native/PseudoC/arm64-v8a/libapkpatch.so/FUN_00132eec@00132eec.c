
void FUN_00132eec(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x1734);
  uVar2 = (uint)*(ushort *)(param_1 + 0x1730) | 2 << (ulong)(uVar1 & 0x1f);
  *(short *)(param_1 + 0x1730) = (short)uVar2;
  if ((int)uVar1 < 0xe) {
    iVar3 = uVar1 + 3;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar4 + 1;
    *(char *)(*(long *)(param_1 + 0x10) + lVar4) = (char)uVar2;
    lVar4 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar4 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar4) = *(undefined1 *)(param_1 + 0x1731);
    uVar2 = 2 >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f);
    *(short *)(param_1 + 0x1730) = (short)uVar2;
    iVar3 = *(int *)(param_1 + 0x1734) + -0xd;
  }
  *(int *)(param_1 + 0x1734) = iVar3;
  if (iVar3 < 10) {
    iVar3 = iVar3 + 7;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar4 + 1;
    *(char *)(*(long *)(param_1 + 0x10) + lVar4) = (char)uVar2;
    lVar4 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar4 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar4) = *(undefined1 *)(param_1 + 0x1731);
    *(undefined2 *)(param_1 + 0x1730) = 0;
    iVar3 = *(int *)(param_1 + 0x1734) + -9;
  }
  *(int *)(param_1 + 0x1734) = iVar3;
  FUN_00132e5c();
  return;
}

