
undefined8 FUN_010f2ac4(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0x230);
  if (*(int *)(param_1 + 0x13c) != 0) {
    iVar2 = *(int *)(lVar3 + 0x60);
    if (iVar2 == 0) {
      FUN_010f3290(param_1,*(undefined4 *)(lVar3 + 100));
      iVar2 = *(int *)(param_1 + 0x13c);
      *(int *)(lVar3 + 0x60) = iVar2;
      *(uint *)(lVar3 + 100) = *(int *)(lVar3 + 100) + 1U & 7;
    }
    *(int *)(lVar3 + 0x60) = iVar2 + -1;
  }
  if (0 < *(int *)(param_1 + 0x1a0)) {
    uVar1 = *(uint *)(param_1 + 0x1d8);
    lVar4 = 0;
    do {
      FUN_010f3408(param_1,lVar3 + 0x168,
                   (uint)(int)**(short **)(param_2 + lVar4 * 8) >> (ulong)(uVar1 & 0x1f) & 1);
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_1 + 0x1a0));
  }
  return 1;
}

