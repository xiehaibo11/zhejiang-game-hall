
undefined8
CRYPTO_ocb128_init(undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  long lVar2;
  void *pvVar3;
  undefined8 uVar4;
  long lVar5;
  byte *pbVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  byte bVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte abStack_51 [17];
  
  memset(param_1,0,0xc0);
  param_1[6] = 5;
  pvVar3 = CRYPTO_malloc(0x50,"crypto/modes/ocb128.c",0xa7);
  param_1[0xb] = pvVar3;
  uVar4 = 0;
  if (pvVar3 != (void *)0x0) {
    param_1[3] = param_3;
    param_1[4] = param_6;
    pcVar7 = (char *)(param_1 + 7);
    *param_1 = param_4;
    param_1[1] = param_5;
    param_1[2] = param_2;
    (*param_4)(pcVar7,pcVar7,param_2);
    cVar1 = *(char *)(param_1 + 7);
    pbVar12 = (byte *)(param_1 + 9);
    lVar2 = 0xf;
LAB_00b35998:
    do {
      lVar5 = lVar2;
      if (lVar5 == 0) {
        bVar10 = *pcVar7 << 1;
        *pbVar12 = bVar10;
        lVar8 = -1;
        pbVar6 = pbVar12;
      }
      else {
        lVar8 = lVar5 + -1;
        pbVar6 = pbVar12 + lVar5;
        bVar10 = pcVar7[lVar5] << 1;
        abStack_51[lVar5] = (byte)pcVar7[lVar5] >> 7;
        *pbVar6 = bVar10;
        lVar2 = 0xe;
        if (lVar5 == 0xf) goto LAB_00b35998;
      }
      *pbVar6 = bVar10 ^ abStack_51[lVar5 + 1];
      lVar2 = lVar8;
    } while (0 < lVar5);
    *(byte *)((long)param_1 + 0x57) = *(byte *)((long)param_1 + 0x57) ^ cVar1 >> 7 & 0x87U;
    cVar1 = *(char *)(param_1 + 9);
    pbVar6 = (byte *)param_1[0xb];
    lVar2 = 0xf;
LAB_00b35a20:
    do {
      lVar5 = lVar2;
      if (lVar5 == 0) {
        bVar10 = *pbVar12 << 1;
        *pbVar6 = bVar10;
        lVar8 = -1;
        pbVar11 = pbVar6;
      }
      else {
        lVar8 = lVar5 + -1;
        pbVar11 = pbVar6 + lVar5;
        bVar10 = pbVar12[lVar5] << 1;
        abStack_51[lVar5] = pbVar12[lVar5] >> 7;
        *pbVar11 = bVar10;
        lVar2 = 0xe;
        if (lVar5 == 0xf) goto LAB_00b35a20;
      }
      *pbVar11 = bVar10 ^ abStack_51[lVar5 + 1];
      lVar2 = lVar8;
    } while (0 < lVar5);
    pbVar6[0xf] = pbVar6[0xf] ^ cVar1 >> 7 & 0x87U;
    pcVar7 = (char *)param_1[0xb];
    cVar1 = *pcVar7;
    lVar2 = 0xf;
LAB_00b35aac:
    do {
      lVar5 = lVar2;
      if (lVar5 == 0) {
        bVar10 = *pcVar7 << 1;
        pcVar7[0x10] = bVar10;
        lVar8 = -1;
        pbVar12 = (byte *)(pcVar7 + 0x10);
      }
      else {
        lVar8 = lVar5 + -1;
        pbVar12 = (byte *)(pcVar7 + 0x10 + lVar5);
        bVar10 = pcVar7[lVar5] << 1;
        abStack_51[lVar5] = (byte)pcVar7[lVar5] >> 7;
        *pbVar12 = bVar10;
        lVar2 = 0xe;
        if (lVar5 == 0xf) goto LAB_00b35aac;
      }
      *pbVar12 = bVar10 ^ abStack_51[lVar5 + 1];
      lVar2 = lVar8;
    } while (0 < lVar5);
    pcVar7[0x1f] = pcVar7[0x1f] ^ cVar1 >> 7 & 0x87U;
    lVar5 = param_1[0xb];
    pcVar7 = (char *)(lVar5 + 0x10);
    cVar1 = *pcVar7;
    pbVar12 = (byte *)(lVar5 + 0x20);
    lVar2 = 0xf;
LAB_00b35b38:
    do {
      lVar8 = lVar2;
      if (lVar8 == 0) {
        bVar10 = *pcVar7 << 1;
        *pbVar12 = bVar10;
        lVar9 = -1;
        pbVar6 = pbVar12;
      }
      else {
        lVar9 = lVar8 + -1;
        pbVar6 = pbVar12 + lVar8;
        bVar10 = pcVar7[lVar8] << 1;
        abStack_51[lVar8] = (byte)pcVar7[lVar8] >> 7;
        *pbVar6 = bVar10;
        lVar2 = 0xe;
        if (lVar8 == 0xf) goto LAB_00b35b38;
      }
      *pbVar6 = bVar10 ^ abStack_51[lVar8 + 1];
      lVar2 = lVar9;
    } while (0 < lVar8);
    *(byte *)(lVar5 + 0x2f) = *(byte *)(lVar5 + 0x2f) ^ cVar1 >> 7 & 0x87U;
    lVar5 = param_1[0xb];
    pcVar7 = (char *)(lVar5 + 0x20);
    cVar1 = *pcVar7;
    pbVar12 = (byte *)(lVar5 + 0x30);
    lVar2 = 0xf;
LAB_00b35bc4:
    do {
      lVar8 = lVar2;
      if (lVar8 == 0) {
        bVar10 = *pcVar7 << 1;
        *pbVar12 = bVar10;
        lVar9 = -1;
        pbVar6 = pbVar12;
      }
      else {
        lVar9 = lVar8 + -1;
        pbVar6 = pbVar12 + lVar8;
        bVar10 = pcVar7[lVar8] << 1;
        abStack_51[lVar8] = (byte)pcVar7[lVar8] >> 7;
        *pbVar6 = bVar10;
        lVar2 = 0xe;
        if (lVar8 == 0xf) goto LAB_00b35bc4;
      }
      *pbVar6 = bVar10 ^ abStack_51[lVar8 + 1];
      lVar2 = lVar9;
    } while (0 < lVar8);
    *(byte *)(lVar5 + 0x3f) = *(byte *)(lVar5 + 0x3f) ^ cVar1 >> 7 & 0x87U;
    lVar5 = param_1[0xb];
    pcVar7 = (char *)(lVar5 + 0x30);
    cVar1 = *pcVar7;
    pbVar12 = (byte *)(lVar5 + 0x40);
    lVar2 = 0xf;
LAB_00b35c50:
    do {
      lVar8 = lVar2;
      if (lVar8 == 0) {
        bVar10 = *pcVar7 << 1;
        *pbVar12 = bVar10;
        lVar9 = -1;
        pbVar6 = pbVar12;
      }
      else {
        lVar9 = lVar8 + -1;
        pbVar6 = pbVar12 + lVar8;
        bVar10 = pcVar7[lVar8] << 1;
        abStack_51[lVar8] = (byte)pcVar7[lVar8] >> 7;
        *pbVar6 = bVar10;
        lVar2 = 0xe;
        if (lVar8 == 0xf) goto LAB_00b35c50;
      }
      *pbVar6 = bVar10 ^ abStack_51[lVar8 + 1];
      lVar2 = lVar9;
    } while (0 < lVar8);
    uVar4 = 1;
    *(byte *)(lVar5 + 0x4f) = *(byte *)(lVar5 + 0x4f) ^ cVar1 >> 7 & 0x87U;
    param_1[5] = 4;
  }
  return uVar4;
}

