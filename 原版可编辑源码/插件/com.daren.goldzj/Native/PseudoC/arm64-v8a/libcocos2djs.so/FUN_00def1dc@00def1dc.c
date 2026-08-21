
void FUN_00def1dc(short *param_1,byte *param_2)

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
  short sVar11;
  short sVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  
  sVar11 = param_1[4];
  sVar12 = param_1[0xc];
  iVar1 = (int)param_1[8] + (int)*param_1;
  iVar13 = (int)*param_1 - (int)param_1[8];
  iVar2 = (int)sVar11 + (sVar11 * 0x4e7b >> 0x10) + (sVar12 * 0x8a8c >> 0x10);
  iVar14 = ((sVar11 * 0x8a8c >> 0x10) - (int)sVar12) - (sVar12 * 0x4e7b >> 0x10);
  sVar11 = param_1[5];
  sVar12 = param_1[0xd];
  iVar3 = (int)param_1[9] + (int)param_1[1];
  iVar15 = (int)param_1[1] - (int)param_1[9];
  iVar4 = (int)sVar11 + (sVar11 * 0x4e7b >> 0x10) + (sVar12 * 0x8a8c >> 0x10);
  iVar16 = ((sVar11 * 0x8a8c >> 0x10) - (int)sVar12) - (sVar12 * 0x4e7b >> 0x10);
  iVar5 = iVar4 + iVar3;
  iVar3 = iVar3 - iVar4;
  iVar6 = iVar16 + iVar15;
  iVar15 = iVar15 - iVar16;
  sVar11 = param_1[6];
  sVar12 = param_1[0xe];
  iVar16 = (int)param_1[10] + (int)param_1[2];
  iVar17 = (int)param_1[2] - (int)param_1[10];
  iVar4 = (int)sVar11 + (sVar11 * 0x4e7b >> 0x10) + (sVar12 * 0x8a8c >> 0x10);
  iVar18 = ((sVar11 * 0x8a8c >> 0x10) - (int)sVar12) - (sVar12 * 0x4e7b >> 0x10);
  iVar7 = iVar4 + iVar16;
  iVar16 = iVar16 - iVar4;
  iVar8 = iVar18 + iVar17;
  iVar17 = iVar17 - iVar18;
  sVar11 = param_1[7];
  sVar12 = param_1[0xf];
  iVar18 = (int)param_1[0xb] + (int)param_1[3];
  iVar19 = (int)param_1[3] - (int)param_1[0xb];
  iVar4 = (int)sVar11 + (sVar11 * 0x4e7b >> 0x10) + (sVar12 * 0x8a8c >> 0x10);
  iVar20 = ((sVar11 * 0x8a8c >> 0x10) - (int)sVar12) - (sVar12 * 0x4e7b >> 0x10);
  iVar9 = iVar4 + iVar18;
  iVar10 = iVar20 + iVar19;
  iVar19 = iVar19 - iVar20;
  iVar18 = iVar18 - iVar4;
  iVar4 = iVar2 + iVar1 + 4;
  iVar20 = iVar4 + iVar7;
  iVar4 = iVar4 - iVar7;
  iVar7 = iVar5 + (iVar5 * 0x4e7b >> 0x10) + (iVar9 * 0x8a8c >> 0x10);
  uVar21 = (uint)*param_2 + (iVar7 + iVar20 >> 3);
  iVar5 = ((iVar5 * 0x8a8c >> 0x10) - iVar9) - (iVar9 * 0x4e7b >> 0x10);
  if (0xff < uVar21) {
    uVar21 = ((int)uVar21 >> 0x1f & 0xffffff01U) + 0xff;
  }
  *param_2 = (byte)uVar21;
  uVar21 = (uint)param_2[1] + (iVar5 + iVar4 >> 3);
  if (0xff < uVar21) {
    uVar21 = ((int)uVar21 >> 0x1f & 0xffffff01U) + 0xff;
  }
  param_2[1] = (byte)uVar21;
  uVar21 = (uint)param_2[2] + (iVar4 - iVar5 >> 3);
  if (0xff < uVar21) {
    uVar21 = ((int)uVar21 >> 0x1f & 0xffffff01U) + 0xff;
  }
  param_2[2] = (byte)uVar21;
  uVar21 = (uint)param_2[3] + (iVar20 - iVar7 >> 3);
  if (0xff < uVar21) {
    uVar21 = ((int)uVar21 >> 0x1f & 0xffffff01U) + 0xff;
  }
  param_2[3] = (byte)uVar21;
  iVar4 = iVar14 + iVar13 + 4;
  iVar5 = iVar4 + iVar8;
  iVar4 = iVar4 - iVar8;
  iVar7 = iVar6 + (iVar6 * 0x4e7b >> 0x10) + (iVar10 * 0x8a8c >> 0x10);
  uVar21 = (uint)param_2[0x20] + (iVar7 + iVar5 >> 3);
  iVar6 = ((iVar6 * 0x8a8c >> 0x10) - iVar10) - (iVar10 * 0x4e7b >> 0x10);
  if (0xff < uVar21) {
    uVar21 = ((int)uVar21 >> 0x1f & 0xffffff01U) + 0xff;
  }
  param_2[0x20] = (byte)uVar21;
  uVar21 = (uint)param_2[0x21] + (iVar6 + iVar4 >> 3);
  if (0xff < uVar21) {
    uVar21 = ((int)uVar21 >> 0x1f & 0xffffff01U) + 0xff;
  }
  param_2[0x21] = (byte)uVar21;
  uVar21 = (uint)param_2[0x22] + (iVar4 - iVar6 >> 3);
  if (0xff < uVar21) {
    uVar21 = ((int)uVar21 >> 0x1f & 0xffffff01U) + 0xff;
  }
  param_2[0x22] = (byte)uVar21;
  uVar21 = (uint)param_2[0x23] + (iVar5 - iVar7 >> 3);
  if (0xff < uVar21) {
    uVar21 = ((int)uVar21 >> 0x1f & 0xffffff01U) + 0xff;
  }
  param_2[0x23] = (byte)uVar21;
  iVar4 = (iVar13 - iVar14) + 4;
  iVar5 = iVar4 + iVar17;
  iVar4 = iVar4 - iVar17;
  iVar6 = iVar15 + (iVar15 * 0x4e7b >> 0x10) + (iVar19 * 0x8a8c >> 0x10);
  uVar21 = (uint)param_2[0x40] + (iVar6 + iVar5 >> 3);
  iVar7 = ((iVar15 * 0x8a8c >> 0x10) - iVar19) - (iVar19 * 0x4e7b >> 0x10);
  if (0xff < uVar21) {
    uVar21 = ((int)uVar21 >> 0x1f & 0xffffff01U) + 0xff;
  }
  param_2[0x40] = (byte)uVar21;
  uVar21 = (uint)param_2[0x41] + (iVar7 + iVar4 >> 3);
  if (0xff < uVar21) {
    uVar21 = ((int)uVar21 >> 0x1f & 0xffffff01U) + 0xff;
  }
  param_2[0x41] = (byte)uVar21;
  uVar21 = (uint)param_2[0x42] + (iVar4 - iVar7 >> 3);
  if (0xff < uVar21) {
    uVar21 = ((int)uVar21 >> 0x1f & 0xffffff01U) + 0xff;
  }
  param_2[0x42] = (byte)uVar21;
  uVar21 = (uint)param_2[0x43] + (iVar5 - iVar6 >> 3);
  if (0xff < uVar21) {
    uVar21 = ((int)uVar21 >> 0x1f & 0xffffff01U) + 0xff;
  }
  param_2[0x43] = (byte)uVar21;
  iVar4 = (iVar1 - iVar2) + 4;
  iVar1 = iVar4 + iVar16;
  iVar4 = iVar4 - iVar16;
  iVar2 = iVar3 + (iVar3 * 0x4e7b >> 0x10) + (iVar18 * 0x8a8c >> 0x10);
  uVar21 = (uint)param_2[0x60] + (iVar2 + iVar1 >> 3);
  iVar3 = ((iVar3 * 0x8a8c >> 0x10) - iVar18) - (iVar18 * 0x4e7b >> 0x10);
  if (0xff < uVar21) {
    uVar21 = ((int)uVar21 >> 0x1f & 0xffffff01U) + 0xff;
  }
  param_2[0x60] = (byte)uVar21;
  uVar21 = (uint)param_2[0x61] + (iVar3 + iVar4 >> 3);
  if (0xff < uVar21) {
    uVar21 = ((int)uVar21 >> 0x1f & 0xffffff01U) + 0xff;
  }
  param_2[0x61] = (byte)uVar21;
  uVar21 = (uint)param_2[0x62] + (iVar4 - iVar3 >> 3);
  if (0xff < uVar21) {
    uVar21 = ((int)uVar21 >> 0x1f & 0xffffff01U) + 0xff;
  }
  param_2[0x62] = (byte)uVar21;
  uVar21 = (uint)param_2[99] + (iVar1 - iVar2 >> 3);
  if (0xff < uVar21) {
    uVar21 = ((int)uVar21 >> 0x1f & 0xffffff01U) + 0xff;
  }
  param_2[99] = (byte)uVar21;
  return;
}

