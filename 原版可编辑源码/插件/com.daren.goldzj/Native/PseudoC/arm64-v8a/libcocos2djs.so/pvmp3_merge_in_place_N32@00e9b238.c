
void pvmp3_merge_in_place_N32(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  uVar2 = *(undefined4 *)(param_1 + 0x38);
  uVar3 = *(undefined4 *)(param_1 + 0x30);
  uVar4 = *(undefined4 *)(param_1 + 0x28);
  uVar5 = *(undefined4 *)(param_1 + 0x20);
  uVar1 = *(undefined4 *)(param_1 + 0x3c);
  iVar6 = *(int *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x1c);
  iVar7 = *(int *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x14);
  iVar8 = *(int *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0xc);
  iVar9 = *(int *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
  iVar10 = *(int *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x40) = uVar5;
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x24);
  iVar11 = *(int *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x50) = uVar4;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x2c);
  iVar12 = *(int *)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x60) = uVar3;
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 0x44) + iVar6;
  *(int *)(param_1 + 0xc) = iVar7 + *(int *)(param_1 + 0x44);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x4c) + iVar7;
  *(int *)(param_1 + 0x1c) = iVar8 + *(int *)(param_1 + 0x4c);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x54) + iVar8;
  *(int *)(param_1 + 0x2c) = iVar9 + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x5c) + iVar9;
  *(int *)(param_1 + 0x3c) = iVar10 + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 100) + iVar10;
  *(int *)(param_1 + 0x4c) = iVar11 + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x6c) + iVar11;
  *(int *)(param_1 + 0x5c) = iVar12 + *(int *)(param_1 + 0x6c);
  *(int *)(param_1 + 100) = *(int *)(param_1 + 0x74) + iVar12;
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x78) + *(int *)(param_1 + 0x74);
  *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x7c) + *(int *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  return;
}

