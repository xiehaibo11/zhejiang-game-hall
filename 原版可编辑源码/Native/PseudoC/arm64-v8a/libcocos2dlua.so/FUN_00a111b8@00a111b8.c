
ulong FUN_00a111b8(undefined8 param_1,undefined1 *param_2,uint param_3,ulong param_4)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  undefined1 uVar8;
  
  if (param_3 < 0xa0) {
    *param_2 = (char)param_3;
    return 1;
  }
  uVar4 = 6;
  if (0xffff < param_3) {
    uVar4 = 10;
  }
  if (param_4 < uVar4) {
    return 0xfffffffe;
  }
  uVar8 = 0x75;
  if (0xffff < param_3) {
    uVar8 = 0x55;
  }
  iVar6 = uVar4 - 2;
  param_2[1] = uVar8;
  uVar7 = uVar4 * 4 - 0xc;
  *param_2 = 0x5c;
  pbVar5 = param_2 + 2;
  do {
    uVar3 = param_3 >> (ulong)(uVar7 & 0x1f);
    uVar1 = uVar3 & 0xf;
    iVar6 = iVar6 + -1;
    bVar2 = (byte)uVar3 & 0xf | 0x30;
    if (9 < uVar1) {
      bVar2 = (char)uVar1 + 0x57;
    }
    *pbVar5 = bVar2;
    uVar7 = uVar7 - 4;
    pbVar5 = pbVar5 + 1;
  } while (0 < iVar6);
  return (ulong)uVar4;
}

