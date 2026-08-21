
undefined8 FUN_00c19f80(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x10);
  uVar2 = *(int *)(lVar5 + 0x78) * 10;
  uVar1 = *(undefined4 *)(lVar5 + 0x80);
  uVar4 = (ulong)uVar2;
  *(undefined4 *)(lVar5 + 0x80) = 0xfffffffd;
  if (uVar2 == 0) {
    uVar4 = 0x800000000000;
  }
  if (*(ulong *)(lVar5 + 0x28) < *(ulong *)(lVar5 + 0x20)) {
    *(ulong *)(lVar5 + 0x68) =
         (*(ulong *)(lVar5 + 0x20) + *(long *)(lVar5 + 0x68)) - *(ulong *)(lVar5 + 0x28);
  }
  do {
    lVar3 = FUN_00c197fc(param_1);
    uVar4 = uVar4 - lVar3;
    if (*(char *)(lVar5 + 0x31) == '\0') {
      *(undefined4 *)(lVar5 + 0x80) = uVar1;
      *(ulong *)(lVar5 + 0x28) = (ulong)*(uint *)(lVar5 + 0x7c) * (*(ulong *)(lVar5 + 0x70) / 100);
      return 1;
    }
  } while (0 < (long)uVar4);
  if (*(ulong *)(lVar5 + 0x68) < 0x400) {
    *(undefined4 *)(lVar5 + 0x80) = uVar1;
    *(long *)(lVar5 + 0x28) = *(long *)(lVar5 + 0x20) + 0x400;
    return 0xffffffff;
  }
  *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(lVar5 + 0x20);
  *(ulong *)(lVar5 + 0x68) = *(ulong *)(lVar5 + 0x68) - 0x400;
  *(undefined4 *)(lVar5 + 0x80) = uVar1;
  return 0;
}

