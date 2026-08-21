
void FUN_00e05334(uint param_1,undefined8 param_2,int param_3,int param_4,int param_5,long param_6)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  byte bVar4;
  byte *pbVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  
  lVar2 = (long)param_3;
  param_5 = param_5 + param_4;
  pbVar3 = (byte *)(param_6 + (long)param_4 * (long)param_3);
  if (param_4 == 0) {
    if (1 < (int)param_1) {
      bVar4 = *pbVar3;
      uVar6 = (ulong)(param_1 - 1);
      pbVar5 = pbVar3;
      do {
        pbVar5 = pbVar5 + 1;
        uVar6 = uVar6 - 1;
        bVar4 = *pbVar5 + bVar4;
        *pbVar5 = bVar4;
      } while (uVar6 != 0);
    }
    pbVar3 = pbVar3 + lVar2;
    param_4 = 1;
    if (param_5 < 2) {
      return;
    }
  }
  else if (param_5 <= param_4) {
    return;
  }
  if ((int)param_1 < 2) {
    do {
      param_4 = param_4 + 1;
      *pbVar3 = pbVar3[-lVar2] + *pbVar3;
      pbVar3 = pbVar3 + lVar2;
    } while (param_4 < param_5);
  }
  else {
    do {
      uVar8 = (uint)pbVar3[-lVar2] + (uint)*pbVar3;
      *pbVar3 = (byte)uVar8;
      lVar7 = 0;
      do {
        uVar8 = ((uint)(pbVar3 + (lVar7 - lVar2))[1] + (uVar8 & 0xff)) - (uint)pbVar3[lVar7 - lVar2]
        ;
        if (0xff < uVar8) {
          uVar8 = ((int)uVar8 >> 0x1f & 0xffffff01U) + 0xff;
        }
        lVar1 = lVar7 + 1;
        uVar8 = uVar8 + pbVar3[lVar7 + 1];
        pbVar3[lVar7 + 1] = (byte)uVar8;
        lVar7 = lVar1;
      } while ((ulong)param_1 - 1 != lVar1);
      param_4 = param_4 + 1;
      pbVar3 = pbVar3 + lVar2;
    } while (param_4 < param_5);
  }
  return;
}

