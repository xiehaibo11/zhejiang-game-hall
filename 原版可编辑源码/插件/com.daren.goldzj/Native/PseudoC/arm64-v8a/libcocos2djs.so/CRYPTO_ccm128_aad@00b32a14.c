
void CRYPTO_ccm128_aad(byte *param_1,byte *param_2,ulong param_3)

{
  bool bVar1;
  uint uVar2;
  byte *pbVar3;
  code *pcVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  ulong uVar8;
  long lVar9;
  byte *pbVar10;
  
  if (param_3 != 0) {
    pcVar4 = *(code **)(param_1 + 0x28);
    pbVar3 = param_1 + 0x10;
    *param_1 = *param_1 | 0x40;
    (*pcVar4)(param_1,pbVar3,*(undefined8 *)(param_1 + 0x30));
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
    bVar5 = (byte)(param_3 >> 8);
    if (param_3 >> 8 < 0xff) {
      uVar8 = 2;
      *pbVar3 = *pbVar3 ^ bVar5;
      lVar9 = 1;
    }
    else {
      *pbVar3 = ~*pbVar3;
      bVar7 = (byte)(param_3 >> 0x10);
      bVar6 = (byte)(param_3 >> 0x18);
      if (param_3 >> 0x20 == 0) {
        param_1[0x11] = param_1[0x11] ^ 0xfe;
        uVar8 = 6;
        param_1[0x12] = param_1[0x12] ^ bVar6;
        lVar9 = 5;
        param_1[0x13] = param_1[0x13] ^ bVar7;
        param_1[0x14] = param_1[0x14] ^ bVar5;
      }
      else {
        param_1[0x11] = ~param_1[0x11];
        param_1[0x12] = param_1[0x12] ^ (byte)(param_3 >> 0x38);
        param_1[0x14] = param_1[0x14] ^ (byte)(param_3 >> 0x28);
        param_1[0x15] = param_1[0x15] ^ (byte)(param_3 >> 0x20);
        param_1[0x13] = param_1[0x13] ^ (byte)(param_3 >> 0x30);
        param_1[0x16] = param_1[0x16] ^ bVar6;
        uVar8 = 10;
        param_1[0x17] = param_1[0x17] ^ bVar7;
        param_1[0x18] = param_1[0x18] ^ bVar5;
        lVar9 = 9;
      }
    }
    pbVar3[lVar9] = pbVar3[lVar9] ^ (byte)param_3;
    do {
      pbVar10 = param_2;
      if (param_3 == 0) {
        bVar1 = false;
      }
      else {
        do {
          param_2 = pbVar10 + 1;
          param_3 = param_3 - 1;
          bVar1 = param_3 != 0;
          pbVar3[uVar8] = pbVar3[uVar8] ^ *pbVar10;
          if (param_3 == 0) break;
          uVar2 = (int)uVar8 + 1;
          uVar8 = (ulong)uVar2;
          pbVar10 = param_2;
        } while (uVar2 < 0x10);
      }
      (*pcVar4)(pbVar3,pbVar3,*(undefined8 *)(param_1 + 0x30));
      uVar8 = 0;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
    } while (bVar1);
  }
  return;
}

