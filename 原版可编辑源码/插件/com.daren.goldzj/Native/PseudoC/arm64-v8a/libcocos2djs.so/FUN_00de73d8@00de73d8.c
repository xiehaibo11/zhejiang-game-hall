
int FUN_00de73d8(undefined4 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  
  iVar6 = param_1[4];
  uVar1 = *(uint *)*param_2;
  if ((((uVar1 < 0xd) && ((1 << (ulong)(uVar1 & 0x1f) & 0x103aU) != 0)) || (uVar1 - 7 < 4)) &&
     (*(long *)(param_1 + 0x26) != 0)) {
    FUN_00dec674(*(undefined8 *)(param_1 + 6),param_1[0xc],*(long *)(param_1 + 0x26),*param_1,
                 param_1[3],iVar6,0);
  }
  iVar4 = iVar6 + 1 >> 1;
  if (iVar6 < 1) {
    iVar5 = 0;
  }
  else {
    iVar3 = param_1[0xc];
    lVar7 = *(long *)(param_1 + 6);
    iVar5 = 0;
    do {
      iVar2 = FUN_00de3dfc(param_2 + 6,iVar6,lVar7,iVar3);
      iVar6 = iVar6 - iVar2;
      lVar7 = lVar7 + iVar2 * iVar3;
      iVar2 = FUN_00de3ef8(param_2 + 6);
      iVar5 = iVar2 + iVar5;
    } while (0 < iVar6);
  }
  if (0 < iVar4) {
    iVar6 = param_1[0xd];
    lVar7 = *(long *)(param_1 + 8);
    iVar3 = iVar4;
    do {
      iVar2 = FUN_00de3dfc(param_2 + 0x13,iVar3,lVar7,iVar6);
      iVar3 = iVar3 - iVar2;
      lVar7 = lVar7 + iVar2 * iVar6;
      FUN_00de3ef8(param_2 + 0x13);
    } while (0 < iVar3);
    iVar6 = param_1[0xd];
    lVar7 = *(long *)(param_1 + 10);
    do {
      iVar3 = FUN_00de3dfc(param_2 + 0x20,iVar4,lVar7,iVar6);
      iVar4 = iVar4 - iVar3;
      lVar7 = lVar7 + iVar3 * iVar6;
      FUN_00de3ef8(param_2 + 0x20);
    } while (0 < iVar4);
  }
  return iVar5;
}

