
undefined8 png_colorspace_set_sRGB(undefined8 param_1,int *param_2,uint param_3)

{
  int iVar1;
  char *pcVar2;
  ushort uVar3;
  double dVar4;
  
  uVar3 = *(ushort *)((long)param_2 + 0x4a);
  if (-1 < (short)uVar3) {
    if (param_3 < 4) {
      if (((uVar3 >> 2 & 1) == 0) || (*(ushort *)(param_2 + 0x12) == param_3)) {
        if ((uVar3 >> 5 & 1) != 0) {
          png_benign_error(param_1,"duplicate sRGB information ignored");
          return 0;
        }
        if (((uVar3 >> 1 & 1) != 0) &&
           (iVar1 = FUN_00d62510(&DAT_0194a814,param_2 + 1,100), iVar1 == 0)) {
          png_chunk_report(param_1,"cHRM chunk does not match sRGB",2);
          uVar3 = *(ushort *)((long)param_2 + 0x4a);
        }
        if (((uVar3 & 1) != 0) &&
           ((((*param_2 == 0 ||
              (dVar4 = (double)(long)(((double)*param_2 * 100000.0) / 45455.0 + 0.5),
              2147483647.0 < dVar4)) || (dVar4 < -2147483648.0)) || (10000 < (int)dVar4 - 95000U))))
        {
          png_chunk_report(param_1,"gamma value does not match sRGB",2);
          uVar3 = *(ushort *)((long)param_2 + 0x4a);
        }
        *param_2 = 0xb18f;
        param_2[7] = 0x7a26;
        param_2[8] = 0x8084;
        param_2[5] = 15000;
        param_2[6] = 6000;
        param_2[3] = 30000;
        param_2[4] = 60000;
        param_2[1] = 64000;
        param_2[2] = 33000;
        param_2[0xf] = 0x4680;
        param_2[0x10] = 0x1c33;
        param_2[0xd] = 0x1175d;
        param_2[0xe] = 0x2e8f;
        *(short *)(param_2 + 0x12) = (short)param_3;
        *(ushort *)((long)param_2 + 0x4a) = uVar3 | 0xe7;
        param_2[0x11] = 0x1734d;
        param_2[0xb] = 0x78d;
        param_2[0xc] = 0x8bae;
        param_2[9] = 0xa117;
        param_2[10] = 0x5310;
        return 1;
      }
      pcVar2 = "inconsistent rendering intents";
    }
    else {
      pcVar2 = "invalid sRGB rendering intent";
    }
    FUN_00d62294(param_1,param_2,"sRGB",param_3,pcVar2);
  }
  return 0;
}

