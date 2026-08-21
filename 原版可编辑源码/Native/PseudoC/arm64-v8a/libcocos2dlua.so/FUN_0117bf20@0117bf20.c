
void FUN_0117bf20(long param_1,undefined1 *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x1724);
  uVar2 = (param_4 & 0xffff) << (ulong)(uVar1 & 0x1f) | (uint)*(ushort *)(param_1 + 0x1720);
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
    uVar2 = (param_4 & 0xffff) >> (ulong)(0x10U - *(int *)(param_1 + 0x1724) & 0x1f);
    *(short *)(param_1 + 0x1720) = (short)uVar2;
    iVar4 = *(int *)(param_1 + 0x1724) + -0xd;
  }
  uVar3 = (undefined1)uVar2;
  *(int *)(param_1 + 0x1724) = iVar4;
  if (iVar4 < 9) {
    if (iVar4 < 1) goto LAB_0117bfe8;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar1 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar1) = uVar3;
    uVar3 = *(undefined1 *)(param_1 + 0x1721);
  }
  uVar1 = *(uint *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = uVar1 + 1;
  *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar1) = uVar3;
LAB_0117bfe8:
  uVar1 = *(uint *)(param_1 + 0x28);
  *(undefined2 *)(param_1 + 0x1720) = 0;
  *(undefined4 *)(param_1 + 0x1724) = 0;
  *(uint *)(param_1 + 0x28) = uVar1 + 1;
  *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar1) = (char)param_3;
  uVar1 = *(uint *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = uVar1 + 1;
  *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar1) = (char)(param_3 >> 8);
  uVar1 = *(uint *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = uVar1 + 1;
  *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar1) = (char)~param_3;
  uVar1 = *(uint *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = uVar1 + 1;
  *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar1) = (char)(~param_3 >> 8);
  if (param_3 != 0) {
    iVar4 = -param_3;
    do {
      uVar3 = *param_2;
      uVar1 = *(uint *)(param_1 + 0x28);
      iVar4 = iVar4 + 1;
      *(uint *)(param_1 + 0x28) = uVar1 + 1;
      *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar1) = uVar3;
      param_2 = param_2 + 1;
    } while (iVar4 != 0);
  }
  return;
}

