
int FUN_01090124(undefined8 param_1,ulong param_2)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  
  uVar5 = param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 + 7);
  uVar4 = 0;
  piVar2 = (int *)(param_2 + 0xb);
  if (*(short *)((param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_2 - 1)) != 0x423) {
    piVar2 = (int *)(uVar5 + 3);
  }
  uVar10 = *piVar2 >> 1;
  uVar6 = (ulong)uVar10;
  if (uVar10 == 0) {
    return 0;
  }
  if (uVar10 == 1) {
    iVar8 = 0;
  }
  else {
    uVar4 = uVar6 & 0xfffffffe;
    iVar9 = 0;
    iVar8 = 0;
    iVar11 = 0xf;
    uVar12 = uVar4;
    do {
      iVar3 = iVar11 + -8;
      lVar7 = (long)iVar11;
      iVar11 = iVar11 + 0x10;
      if (*(long *)(uVar5 + (long)iVar3) != -0x8000000080001) {
        iVar9 = iVar9 + 1;
      }
      if (*(long *)(uVar5 + lVar7) != -0x8000000080001) {
        iVar8 = iVar8 + 1;
      }
      uVar12 = uVar12 - 2;
    } while (uVar12 != 0);
    iVar8 = iVar8 + iVar9;
    if (uVar4 == uVar6) {
      return iVar8;
    }
  }
  lVar7 = uVar6 - uVar4;
  uVar10 = (int)uVar4 << 3 | 7;
  do {
    lVar1 = (long)(int)uVar10;
    uVar10 = uVar10 + 8;
    if (*(long *)(uVar5 + lVar1) != -0x8000000080001) {
      iVar8 = iVar8 + 1;
    }
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return iVar8;
}

