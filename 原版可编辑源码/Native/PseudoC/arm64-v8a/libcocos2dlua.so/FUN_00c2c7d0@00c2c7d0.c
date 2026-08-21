
int FUN_00c2c7d0(long param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = FUN_00c29ac0(param_1,1);
  iVar2 = *(int *)(lVar6 + 0x10);
  iVar4 = FUN_00c29da0(param_1,2,1);
  iVar5 = FUN_00c29da0(param_1,3,iVar4);
  if (iVar5 < 0) {
    iVar5 = iVar5 + iVar2 + 1;
  }
  if (iVar4 < 0) {
    iVar4 = iVar4 + iVar2 + 1;
    if (iVar4 < 1) {
      iVar4 = 1;
    }
    if (iVar2 < iVar5) {
      iVar5 = iVar2;
    }
    if (iVar5 < iVar4) {
      return 1;
    }
  }
  else {
    if (iVar4 < 1) {
      iVar4 = 1;
    }
    if (iVar2 < iVar5) {
      iVar5 = iVar2;
    }
    if (iVar5 < iVar4) {
      return 1;
    }
  }
  uVar3 = iVar5 - (iVar4 + -1);
  if (8000 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00bfb3a0(param_1,0x66c);
  }
  if (*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28) <= (long)((ulong)uVar3 * 8)) {
    FUN_00bfe0e0(param_1,uVar3);
  }
  if (uVar3 != 0) {
    lVar7 = -0x10;
    lVar6 = lVar6 + (iVar4 + -1);
    do {
      lVar1 = *(long *)(param_1 + 0x20) + lVar7;
      *(uint *)(*(long *)(param_1 + 0x20) + lVar7) = (uint)*(byte *)(lVar6 + 0x18);
      lVar7 = lVar7 + 8;
      *(undefined4 *)(lVar1 + 4) = 0xfff90000;
      lVar6 = lVar6 + 1;
    } while (lVar7 != (ulong)(uVar3 - 1) * 8 + -8);
  }
  return uVar3 + 1;
}

