
undefined8
CRYPTO_gcm128_decrypt_ctr32(long param_1,byte *param_2,byte *param_3,ulong param_4,code *param_5)

{
  code *pcVar1;
  code *pcVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint uVar11;
  
  uVar10 = *(ulong *)(param_1 + 0x38) + param_4;
  if (0xfffffffe0 < uVar10) {
    return 0xffffffff;
  }
  if (CARRY8(*(ulong *)(param_1 + 0x38),param_4)) {
    return 0xffffffff;
  }
  uVar9 = *(undefined8 *)(param_1 + 0x180);
  pcVar1 = *(code **)(param_1 + 0x160);
  pcVar2 = *(code **)(param_1 + 0x168);
  *(ulong *)(param_1 + 0x38) = uVar10;
  if (*(int *)(param_1 + 0x174) != 0) {
    (*pcVar1)(param_1 + 0x40,param_1 + 0x60);
    *(undefined4 *)(param_1 + 0x174) = 0;
  }
  uVar11 = *(uint *)(param_1 + 0x170);
  uVar3 = *(uint *)(param_1 + 0xc);
  if (uVar11 != 0) {
    if (param_4 == 0) goto LAB_00b43810;
    pbVar7 = param_3;
    pbVar8 = param_2;
    uVar10 = param_4;
    do {
      uVar6 = (ulong)uVar11;
      param_2 = pbVar8 + 1;
      bVar4 = *pbVar8;
      uVar11 = uVar11 + 1 & 0xf;
      param_4 = uVar10 - 1;
      param_3 = pbVar7 + 1;
      *pbVar7 = *(byte *)(param_1 + 0x10 + uVar6) ^ bVar4;
      *(byte *)(param_1 + 0x40 + uVar6) = *(byte *)(param_1 + 0x40 + uVar6) ^ bVar4;
      if (uVar11 == 0) break;
      bVar5 = uVar10 != 1;
      pbVar7 = param_3;
      pbVar8 = param_2;
      uVar10 = param_4;
    } while (bVar5);
    if (uVar11 != 0) goto LAB_00b43810;
    (*pcVar1)(param_1 + 0x40,param_1 + 0x60);
  }
  uVar11 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar11 = uVar11 >> 0x10 | uVar11 << 0x10;
  if (0xbff < param_4) {
    do {
      (*pcVar2)(param_1 + 0x40,param_1 + 0x60,param_2,0xc00);
      (*param_5)(param_2,param_3,0xc0,uVar9,param_1);
      uVar11 = uVar11 + 0xc0;
      param_4 = param_4 - 0xc00;
      param_3 = param_3 + 0xc00;
      uVar3 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
      param_2 = param_2 + 0xc00;
      *(uint *)(param_1 + 0xc) = uVar3 >> 0x10 | uVar3 << 0x10;
    } while (0xbff < param_4);
  }
  uVar10 = param_4 & 0xfffffffffffffff0;
  if (uVar10 != 0) {
    (*pcVar2)(param_1 + 0x40,param_1 + 0x60,param_2,uVar10);
    (*param_5)(param_2,param_3,param_4 >> 4,uVar9,param_1);
    uVar11 = uVar11 + (int)(param_4 >> 4);
    param_3 = param_3 + uVar10;
    param_2 = param_2 + uVar10;
    uVar3 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
    param_4 = param_4 - uVar10;
    *(uint *)(param_1 + 0xc) = uVar3 >> 0x10 | uVar3 << 0x10;
  }
  if (param_4 == 0) {
    uVar11 = 0;
  }
  else {
    (**(code **)(param_1 + 0x178))(param_1,param_1 + 0x10,uVar9);
    uVar11 = (uVar11 + 1 & 0xff00ff00) >> 8 | (uVar11 + 1 & 0xff00ff) << 8;
    uVar10 = 0;
    *(uint *)(param_1 + 0xc) = uVar11 >> 0x10 | uVar11 << 0x10;
    do {
      uVar6 = uVar10 & 0xffffffff;
      bVar4 = param_2[uVar6];
      uVar10 = uVar10 + 1;
      *(byte *)(param_1 + 0x40 + uVar6) = *(byte *)(param_1 + 0x40 + uVar6) ^ bVar4;
      param_3[uVar6] = *(byte *)(param_1 + 0x10 + uVar6) ^ bVar4;
    } while (param_4 != uVar10);
    uVar11 = (uint)param_4;
  }
LAB_00b43810:
  *(uint *)(param_1 + 0x170) = uVar11;
  return 0;
}

