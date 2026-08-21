
void CRYPTO_ofb128_encrypt
               (byte *param_1,byte *param_2,ulong param_3,undefined8 param_4,long param_5,
               uint *param_6,code *param_7)

{
  long lVar1;
  byte *pbVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  
  for (uVar8 = *param_6; (uVar7 = uVar8, param_3 != 0 && (uVar7 = 0, uVar8 != 0));
      uVar8 = uVar8 + 1 & 0xf) {
    param_3 = param_3 - 1;
    *param_2 = *(byte *)(param_5 + (ulong)uVar8) ^ *param_1;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  uVar5 = param_3 - 0x10;
  if (0xf < param_3) {
    uVar3 = uVar5 & 0xfffffffffffffff0;
    lVar1 = uVar3 + 0x10;
    pbVar2 = param_2 + lVar1;
    pbVar6 = param_1;
    do {
      (*param_7)(param_5,param_5,param_4);
      if (uVar7 < 0x10) {
        uVar4 = (ulong)uVar7;
        do {
          *(ulong *)(param_2 + uVar4) = *(ulong *)(param_5 + uVar4) ^ *(ulong *)(pbVar6 + uVar4);
          uVar4 = uVar4 + 8;
        } while (uVar4 < 0x10);
      }
      param_3 = param_3 - 0x10;
      uVar7 = 0;
      param_2 = param_2 + 0x10;
      pbVar6 = pbVar6 + 0x10;
    } while (0xf < param_3);
    uVar7 = 0;
    param_3 = uVar5 - uVar3;
    param_1 = param_1 + lVar1;
    param_2 = pbVar2;
  }
  uVar8 = uVar7;
  if (param_3 != 0) {
    (*param_7)(param_5,param_5,param_4);
    uVar8 = uVar7 + (int)param_3;
    do {
      uVar5 = (ulong)uVar7;
      param_3 = param_3 - 1;
      uVar7 = uVar7 + 1;
      param_2[uVar5] = *(byte *)(param_5 + uVar5) ^ param_1[uVar5];
    } while (param_3 != 0);
  }
  *param_6 = uVar8;
  return;
}

