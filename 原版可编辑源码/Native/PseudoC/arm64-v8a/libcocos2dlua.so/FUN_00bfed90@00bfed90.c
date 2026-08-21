
void FUN_00bfed90(long param_1,ulong param_2)

{
  undefined4 uVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  
  puVar7 = (undefined4 *)__errno();
  lVar9 = *(long *)(param_1 + 0x20);
  lVar12 = *(long *)(param_1 + 0x10);
  uVar8 = *(ulong *)(param_1 + 0x50) & 0xfffffffffffffffc;
  uVar1 = *puVar7;
  uVar10 = *(ulong *)(uVar8 + 0xa8);
  lVar11 = *(long *)((*(ulong *)(lVar9 + -0x10) & 0x7fffffffffff) + 0x20);
  *(ulong *)(uVar8 + 0xa8) = param_2;
  uVar8 = FUN_00bfe678(lVar11 + -0x5d,param_2,*(uint *)(uVar8 + 0xc0) >> 3);
  lVar3 = (uVar8 & 0xffffffff) * 8;
  *(long *)(param_1 + 0x28) = lVar9 + lVar3;
  bVar2 = *(byte *)(lVar12 + 0xc1);
  if (((bVar2 >> 3 & 1) != 0) && (*(int *)(lVar12 + 0x130) == 0)) {
    *(undefined4 *)(lVar12 + 0x130) = *(undefined4 *)(lVar12 + 0x134);
    FUN_00bfe5a0(param_1,3,0xffffffff);
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x20) + lVar3;
    bVar2 = *(byte *)(lVar12 + 0xc1);
  }
  uVar5 = (uint)bVar2;
  if ((bVar2 >> 2 & 1) != 0) {
    iVar4 = FUN_00bfc8bc(lVar11 + -0x68,(int)((long)(param_2 - lVar11) >> 2) + -1);
    if (((uVar10 < param_2) &&
        ((int)((long)(uVar10 - lVar11) >> 2) - 1U < *(uint *)(lVar11 + -0x5c))) &&
       (iVar6 = FUN_00bfc8bc(lVar11 + -0x68), iVar6 == iVar4)) {
      uVar5 = (uint)*(byte *)(lVar12 + 0xc1);
    }
    else {
      FUN_00bfe5a0(param_1,2);
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x20) + lVar3;
      uVar5 = (uint)*(byte *)(lVar12 + 0xc1);
    }
  }
  if (((uVar5 >> 1 & 1) != 0) && (*(byte *)(param_2 - 4) - 0x49 < 4)) {
    FUN_00bfe5a0(param_1,1,0xffffffff);
  }
  *puVar7 = uVar1;
  return;
}

