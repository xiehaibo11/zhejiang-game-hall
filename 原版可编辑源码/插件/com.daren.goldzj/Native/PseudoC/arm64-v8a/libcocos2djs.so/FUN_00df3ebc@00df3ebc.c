
uint FUN_00df3ebc(undefined8 param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  
  uVar2 = param_2[-1];
  uVar3 = *param_2;
  uVar13 = (uint)param_1;
  iVar4 = ((uint)((ulong)param_1 >> 0x18) & 0xff) - (uVar2 >> 0x18);
  uVar12 = uVar2 >> 0x10 & 0xff;
  iVar1 = -iVar4;
  if (-1 < iVar4) {
    iVar1 = iVar4;
  }
  iVar5 = (uVar3 >> 0x18) - (uVar2 >> 0x18);
  iVar4 = -iVar5;
  if (-1 < iVar5) {
    iVar4 = iVar5;
  }
  iVar6 = (uVar13 >> 0x10 & 0xff) - uVar12;
  iVar5 = -iVar6;
  if (-1 < iVar6) {
    iVar5 = iVar6;
  }
  iVar7 = (uVar3 >> 0x10 & 0xff) - uVar12;
  uVar12 = uVar2 >> 8 & 0xff;
  iVar6 = -iVar7;
  if (-1 < iVar7) {
    iVar6 = iVar7;
  }
  iVar8 = (uVar13 >> 8 & 0xff) - uVar12;
  iVar7 = -iVar8;
  if (-1 < iVar8) {
    iVar7 = iVar8;
  }
  iVar9 = (uVar3 >> 8 & 0xff) - uVar12;
  iVar8 = -iVar9;
  if (-1 < iVar9) {
    iVar8 = iVar9;
  }
  iVar10 = (uVar13 & 0xff) - (uVar2 & 0xff);
  iVar9 = -iVar10;
  if (-1 < iVar10) {
    iVar9 = iVar10;
  }
  iVar11 = (uVar3 & 0xff) - (uVar2 & 0xff);
  iVar10 = -iVar11;
  if (-1 < iVar11) {
    iVar10 = iVar11;
  }
  if (0 < ((((((iVar9 - iVar10) - iVar4) + iVar1) - iVar8) + iVar7) - iVar6) + iVar5) {
    uVar3 = uVar13;
  }
  return uVar3;
}

