
char * FUN_00c00ca0(char *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  ulong uVar6;
  int iVar7;
  
  iVar7 = (int)((ulong)param_2 / 10000);
  iVar3 = param_2 + iVar7 * -10000;
  uVar6 = ((ulong)param_2 / 10000) / 10000;
  iVar7 = iVar7 + (int)uVar6 * -10000;
  uVar1 = (uint)(iVar3 * 0x20c5) >> 0x17;
  *param_1 = (char)uVar6 + '0';
  iVar3 = iVar3 + uVar1 * -1000;
  uVar2 = (uint)(iVar7 * 0x20c5) >> 0x17;
  param_1[5] = (char)uVar1 + '0';
  iVar7 = iVar7 + uVar2 * -1000;
  param_1[1] = (char)uVar2 + '0';
  uVar1 = (uint)(iVar3 * 0x29) >> 0xc;
  uVar2 = (uint)(iVar7 * 0x29) >> 0xc;
  param_1[6] = (char)uVar1 + '0';
  iVar3 = iVar3 + uVar1 * -100;
  iVar7 = iVar7 + uVar2 * -100;
  param_1[2] = (char)uVar2 + '0';
  uVar1 = (uint)(iVar3 * 0x67) >> 10;
  uVar2 = (uint)(iVar7 * 0x67) >> 10;
  cVar5 = (char)uVar1;
  cVar4 = (char)uVar2;
  param_1[3] = cVar4 + '0';
  param_1[4] = ((char)iVar7 - (cVar4 * '\b' + (char)(uVar2 << 1))) + '0';
  param_1[7] = cVar5 + '0';
  param_1[8] = ((char)iVar3 - (cVar5 * '\b' + (char)(uVar1 << 1))) + '0';
  return param_1 + 9;
}

