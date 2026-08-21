
void FUN_00ded540(short *param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  short sVar8;
  uint uVar9;
  
  sVar7 = param_1[4];
  sVar8 = param_1[1];
  iVar1 = *param_1 + 4;
  iVar2 = (int)sVar7 + (sVar7 * 0x4e7b >> 0x10);
  iVar3 = (int)sVar8 + (sVar8 * 0x4e7b >> 0x10);
  iVar4 = iVar2 + iVar1;
  uVar9 = (uint)*param_2 + (iVar4 + iVar3 >> 3);
  iVar5 = sVar8 * 0x8a8c >> 0x10;
  if (0xff < uVar9) {
    uVar9 = ((int)uVar9 >> 0x1f & 0xffffff01U) + 0xff;
  }
  *param_2 = (byte)uVar9;
  uVar9 = (uint)param_2[1] + (iVar4 + iVar5 >> 3);
  if (0xff < uVar9) {
    uVar9 = ((int)uVar9 >> 0x1f & 0xffffff01U) + 0xff;
  }
  param_2[1] = (byte)uVar9;
  uVar9 = (uint)param_2[2] + (iVar4 - iVar5 >> 3);
  if (0xff < uVar9) {
    uVar9 = ((int)uVar9 >> 0x1f & 0xffffff01U) + 0xff;
  }
  iVar6 = sVar7 * 0x8a8c >> 0x10;
  param_2[2] = (byte)uVar9;
  uVar9 = (uint)param_2[3] + (iVar4 - iVar3 >> 3);
  if (0xff < uVar9) {
    uVar9 = ((int)uVar9 >> 0x1f & 0xffffff01U) + 0xff;
  }
  iVar4 = iVar6 + iVar1;
  param_2[3] = (byte)uVar9;
  uVar9 = (uint)param_2[0x20] + (iVar3 + iVar4 >> 3);
  if (0xff < uVar9) {
    uVar9 = ((int)uVar9 >> 0x1f & 0xffffff01U) + 0xff;
  }
  param_2[0x20] = (byte)uVar9;
  uVar9 = (uint)param_2[0x21] + (iVar4 + iVar5 >> 3);
  if (0xff < uVar9) {
    uVar9 = ((int)uVar9 >> 0x1f & 0xffffff01U) + 0xff;
  }
  param_2[0x21] = (byte)uVar9;
  uVar9 = (uint)param_2[0x22] + (iVar4 - iVar5 >> 3);
  if (0xff < uVar9) {
    uVar9 = ((int)uVar9 >> 0x1f & 0xffffff01U) + 0xff;
  }
  param_2[0x22] = (byte)uVar9;
  uVar9 = (uint)param_2[0x23] + (iVar4 - iVar3 >> 3);
  if (0xff < uVar9) {
    uVar9 = ((int)uVar9 >> 0x1f & 0xffffff01U) + 0xff;
  }
  iVar6 = iVar1 - iVar6;
  param_2[0x23] = (byte)uVar9;
  uVar9 = (uint)param_2[0x40] + (iVar3 + iVar6 >> 3);
  if (0xff < uVar9) {
    uVar9 = ((int)uVar9 >> 0x1f & 0xffffff01U) + 0xff;
  }
  param_2[0x40] = (byte)uVar9;
  uVar9 = (uint)param_2[0x41] + (iVar6 + iVar5 >> 3);
  if (0xff < uVar9) {
    uVar9 = ((int)uVar9 >> 0x1f & 0xffffff01U) + 0xff;
  }
  param_2[0x41] = (byte)uVar9;
  uVar9 = (uint)param_2[0x42] + (iVar6 - iVar5 >> 3);
  if (0xff < uVar9) {
    uVar9 = ((int)uVar9 >> 0x1f & 0xffffff01U) + 0xff;
  }
  param_2[0x42] = (byte)uVar9;
  uVar9 = (uint)param_2[0x43] + (iVar6 - iVar3 >> 3);
  if (0xff < uVar9) {
    uVar9 = ((int)uVar9 >> 0x1f & 0xffffff01U) + 0xff;
  }
  iVar1 = iVar1 - iVar2;
  param_2[0x43] = (byte)uVar9;
  uVar9 = (uint)param_2[0x60] + (iVar1 + iVar3 >> 3);
  if (0xff < uVar9) {
    uVar9 = ((int)uVar9 >> 0x1f & 0xffffff01U) + 0xff;
  }
  param_2[0x60] = (byte)uVar9;
  uVar9 = (uint)param_2[0x61] + (iVar1 + iVar5 >> 3);
  if (0xff < uVar9) {
    uVar9 = ((int)uVar9 >> 0x1f & 0xffffff01U) + 0xff;
  }
  param_2[0x61] = (byte)uVar9;
  uVar9 = (uint)param_2[0x62] + (iVar1 - iVar5 >> 3);
  if (0xff < uVar9) {
    uVar9 = ((int)uVar9 >> 0x1f & 0xffffff01U) + 0xff;
  }
  param_2[0x62] = (byte)uVar9;
  uVar9 = (uint)param_2[99] + (iVar1 - iVar3 >> 3);
  if (0xff < uVar9) {
    uVar9 = ((int)uVar9 >> 0x1f & 0xffffff01U) + 0xff;
  }
  param_2[99] = (byte)uVar9;
  return;
}

