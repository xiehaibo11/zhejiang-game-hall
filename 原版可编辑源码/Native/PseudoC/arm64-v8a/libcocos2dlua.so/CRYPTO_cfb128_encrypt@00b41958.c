
void CRYPTO_cfb128_encrypt
               (byte *param_1,byte *param_2,ulong param_3,undefined8 param_4,long param_5,
               uint *param_6,int param_7,code *param_8)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  
  uVar9 = *param_6;
  if (param_7 == 0) {
    uVar6 = param_3;
    pbVar8 = param_2;
    pbVar11 = param_1;
    if (uVar9 != 0 && param_3 != 0) {
      do {
        uVar4 = (ulong)uVar9;
        param_1 = pbVar11 + 1;
        bVar2 = *pbVar11;
        uVar9 = uVar9 + 1 & 0xf;
        param_3 = uVar6 - 1;
        param_2 = pbVar8 + 1;
        *pbVar8 = bVar2 ^ *(byte *)(param_5 + uVar4);
        *(byte *)(param_5 + uVar4) = bVar2;
        if (uVar9 == 0) break;
        bVar3 = uVar6 != 1;
        uVar6 = param_3;
        pbVar8 = param_2;
        pbVar11 = param_1;
      } while (bVar3);
    }
    uVar6 = param_3 - 0x10;
    if (0xf < param_3) {
      uVar4 = uVar6 & 0xfffffffffffffff0;
      lVar1 = uVar4 + 0x10;
      pbVar11 = param_2 + lVar1;
      pbVar8 = param_1;
      do {
        (*param_8)(param_5,param_5,param_4);
        if (uVar9 < 0x10) {
          uVar5 = (ulong)uVar9;
          do {
            uVar7 = *(ulong *)(pbVar8 + uVar5);
            *(ulong *)(param_2 + uVar5) = *(ulong *)(param_5 + uVar5) ^ uVar7;
            *(ulong *)(param_5 + uVar5) = uVar7;
            uVar5 = uVar5 + 8;
          } while (uVar5 < 0x10);
        }
        param_3 = param_3 - 0x10;
        uVar9 = 0;
        param_2 = param_2 + 0x10;
        pbVar8 = pbVar8 + 0x10;
      } while (0xf < param_3);
      uVar9 = 0;
      param_3 = uVar6 - uVar4;
      param_1 = param_1 + lVar1;
      param_2 = pbVar11;
    }
    uVar10 = uVar9;
    if (param_3 != 0) {
      (*param_8)(param_5,param_5,param_4);
      uVar10 = uVar9 + (int)param_3;
      do {
        uVar6 = (ulong)uVar9;
        bVar2 = param_1[uVar6];
        param_3 = param_3 - 1;
        uVar9 = uVar9 + 1;
        param_2[uVar6] = bVar2 ^ *(byte *)(param_5 + uVar6);
        *(byte *)(param_5 + uVar6) = bVar2;
      } while (param_3 != 0);
    }
  }
  else {
    pbVar8 = param_2;
    pbVar11 = param_1;
    if (uVar9 == 0 || param_3 == 0) {
      uVar6 = param_3 - 0x10;
    }
    else {
      do {
        uVar6 = param_3;
        uVar4 = (ulong)uVar9;
        param_1 = pbVar11 + 1;
        uVar9 = uVar9 + 1 & 0xf;
        param_3 = uVar6 - 1;
        bVar2 = *(byte *)(param_5 + uVar4) ^ *pbVar11;
        *(byte *)(param_5 + uVar4) = bVar2;
        param_2 = pbVar8 + 1;
        *pbVar8 = bVar2;
        if (uVar9 == 0) break;
        pbVar8 = param_2;
        pbVar11 = param_1;
      } while (uVar6 != 1);
      uVar6 = uVar6 - 0x11;
    }
    if (0xf < param_3) {
      lVar1 = (uVar6 & 0xfffffffffffffff0) + 0x10;
      pbVar11 = param_2 + lVar1;
      pbVar8 = param_1;
      do {
        (*param_8)(param_5,param_5,param_4);
        if (uVar9 < 0x10) {
          uVar4 = (ulong)uVar9;
          do {
            uVar5 = *(ulong *)(param_5 + uVar4) ^ *(ulong *)(pbVar8 + uVar4);
            *(ulong *)(param_5 + uVar4) = uVar5;
            *(ulong *)(param_2 + uVar4) = uVar5;
            uVar4 = uVar4 + 8;
          } while (uVar4 < 0x10);
        }
        param_3 = param_3 - 0x10;
        uVar9 = 0;
        param_2 = param_2 + 0x10;
        pbVar8 = pbVar8 + 0x10;
      } while (0xf < param_3);
      uVar9 = 0;
      param_3 = uVar6 - (uVar6 & 0xfffffffffffffff0);
      param_1 = param_1 + lVar1;
      param_2 = pbVar11;
    }
    uVar10 = uVar9;
    if (param_3 != 0) {
      (*param_8)(param_5,param_5,param_4);
      uVar10 = uVar9 + (int)param_3;
      do {
        uVar6 = (ulong)uVar9;
        param_3 = param_3 - 1;
        uVar9 = uVar9 + 1;
        bVar2 = *(byte *)(param_5 + uVar6) ^ param_1[uVar6];
        *(byte *)(param_5 + uVar6) = bVar2;
        param_2[uVar6] = bVar2;
      } while (param_3 != 0);
    }
  }
  *param_6 = uVar10;
  return;
}

