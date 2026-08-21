
undefined8 FUN_00b77750(byte *param_1,ulong param_2,byte *param_3,ulong param_4,uint param_5)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  uint uVar5;
  byte *pbVar6;
  ulong uVar7;
  
  pbVar6 = param_1;
  if ((param_5 >> 0xf & 1) != 0) {
    uVar7 = param_2;
    if (param_4 < param_2) {
      if ((param_5 >> 4 & 1) == 0) {
        do {
          if (*pbVar6 == 0) break;
          uVar7 = uVar7 - 1;
          pbVar6 = pbVar6 + 1;
        } while (param_4 < uVar7);
      }
      else {
        do {
          if ((*pbVar6 == 0) || (*pbVar6 == 0x2e)) break;
          uVar7 = uVar7 - 1;
          pbVar6 = pbVar6 + 1;
        } while (param_4 < uVar7);
      }
    }
    uVar4 = param_4;
    if (uVar7 == param_4) goto joined_r0x00b777d4;
  }
  uVar4 = param_2;
  pbVar6 = param_1;
  if (param_2 != param_4) {
    return 0;
  }
joined_r0x00b777d4:
  while( true ) {
    if (uVar4 == 0) {
      return 1;
    }
    bVar2 = *pbVar6;
    if (bVar2 == 0) break;
    bVar3 = *param_3;
    if ((uint)bVar2 != (uint)bVar3) {
      uVar5 = (uint)bVar2;
      uVar1 = uVar5 + 0x20;
      if (0x19 < uVar5 - 0x41) {
        uVar1 = uVar5;
      }
      uVar5 = bVar3 + 0x20;
      if (0x19 < bVar3 - 0x41) {
        uVar5 = (uint)bVar3;
      }
      if ((uVar1 & 0xff) != (uVar5 & 0xff)) {
        return 0;
      }
    }
    param_3 = param_3 + 1;
    uVar4 = uVar4 - 1;
    pbVar6 = pbVar6 + 1;
  }
  return 0;
}

