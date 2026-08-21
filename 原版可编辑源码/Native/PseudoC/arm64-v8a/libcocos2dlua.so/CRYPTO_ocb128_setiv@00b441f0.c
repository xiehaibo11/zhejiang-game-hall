
undefined8 CRYPTO_ocb128_setiv(undefined8 *param_1,void *param_2,size_t param_3,ulong param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  long lVar8;
  byte *pbVar9;
  byte bVar10;
  long lVar11;
  byte local_90 [15];
  byte abStack_81 [33];
  long local_60;
  long lStack_58;
  undefined1 local_50 [15];
  byte abStack_41 [17];
  
  uVar6 = 0xffffffff;
  if ((param_3 - 1 < 0xf) && (param_4 - 1 < 0x10)) {
    abStack_81[0] = 0;
    memcpy(abStack_81 + (1 - param_3),param_2,param_3);
    abStack_81[-param_3] = abStack_81[-param_3] | 1;
    local_60 = (param_4 & 0xf) << 4;
    lStack_58 = ((ulong)abStack_81[0] & 0xc0) << 0x38;
    (*(code *)*param_1)(&local_60,local_50,param_1[2]);
    uVar2 = abStack_81[0] & 7;
    pcVar7 = (char *)((ulong)(abStack_81 + 1) | (ulong)(abStack_81[0] >> 3 & 7));
    uVar4 = 8 - uVar2;
    pbVar1 = (byte *)(param_1 + 0x14);
    uVar3 = 0xff << (ulong)(uVar4 & 0x1f);
    lVar5 = 0xf;
LAB_00b44320:
    do {
      lVar11 = lVar5;
      if (lVar11 == 0) {
        bVar10 = *pcVar7 << (ulong)uVar2;
        *pbVar1 = bVar10;
        lVar8 = -1;
        pbVar9 = pbVar1;
      }
      else {
        lVar8 = lVar11 + -1;
        pbVar9 = pbVar1 + lVar11;
        bVar10 = pcVar7[lVar11] << (ulong)uVar2;
        abStack_41[lVar11] = (byte)((uVar3 & (byte)pcVar7[lVar11]) >> (ulong)(uVar4 & 0x1f));
        *pbVar9 = bVar10;
        lVar5 = 0xe;
        if (lVar11 == 0xf) goto LAB_00b44320;
      }
      *pbVar9 = bVar10 ^ abStack_41[lVar11 + 1];
      lVar5 = lVar8;
    } while (0 < lVar11);
    uVar6 = 1;
    *(byte *)((long)param_1 + 0xaf) =
         (byte)((uVar3 & (byte)pcVar7[0x10]) >> (ulong)(uVar4 & 0x1f)) |
         *(byte *)((long)param_1 + 0xaf);
  }
  return uVar6;
}

