
void jpeg_fdct_2x4(int *param_1,long *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  
  memset(param_1,0,0x100);
  uVar14 = (ulong)param_3;
  uVar13 = (uint)*(byte *)(*param_2 + uVar14);
  uVar12 = (uint)((byte *)(*param_2 + uVar14))[1];
  iVar1 = (uVar13 - uVar12) * 8;
  iVar4 = (uVar12 + uVar13) * 8 + -0x800;
  *param_1 = iVar4;
  param_1[1] = iVar1;
  uVar13 = (uint)*(byte *)(param_2[1] + uVar14);
  uVar12 = (uint)((byte *)(param_2[1] + uVar14))[1];
  iVar2 = (uVar13 - uVar12) * 8;
  iVar5 = (uVar12 + uVar13) * 8 + -0x800;
  param_1[8] = iVar5;
  param_1[9] = iVar2;
  uVar13 = (uint)*(byte *)(param_2[2] + uVar14);
  uVar12 = (uint)((byte *)(param_2[2] + uVar14))[1];
  iVar7 = uVar13 - uVar12;
  iVar3 = iVar7 * 8;
  iVar6 = (uVar12 + uVar13) * 8 + -0x800;
  param_1[0x10] = iVar6;
  param_1[0x11] = iVar3;
  iVar7 = iVar2 + iVar7 * -8;
  iVar3 = iVar3 + iVar2;
  uVar13 = (uint)*(byte *)(param_2[3] + uVar14);
  uVar12 = (uint)((byte *)(param_2[3] + uVar14))[1];
  iVar8 = uVar13 - uVar12;
  iVar2 = (uVar12 + uVar13) * 8 + -0x800;
  iVar9 = iVar1 + iVar8 * -8;
  iVar10 = iVar4 - iVar2;
  iVar1 = iVar8 * 8 + iVar1;
  iVar2 = iVar2 + iVar4;
  lVar11 = ((long)iVar7 + (long)iVar9) * 0x1151 + 0x1000;
  lVar15 = ((long)(iVar5 - iVar6) + (long)iVar10) * 0x1151 + 0x1000;
  *param_1 = iVar6 + iVar5 + iVar2;
  param_1[1] = iVar3 + iVar1;
  param_1[0x10] = iVar2 - (iVar6 + iVar5);
  param_1[0x11] = iVar1 - iVar3;
  param_1[8] = (int)((ulong)(lVar15 + (long)iVar10 * 0x187e) >> 0xd);
  param_1[9] = (int)((ulong)(lVar11 + (long)iVar9 * 0x187e) >> 0xd);
  param_1[0x18] = (int)((ulong)(lVar15 + (long)(iVar5 - iVar6) * -0x3b21) >> 0xd);
  param_1[0x19] = (int)((ulong)(lVar11 + (long)iVar7 * -0x3b21) >> 0xd);
  return;
}

