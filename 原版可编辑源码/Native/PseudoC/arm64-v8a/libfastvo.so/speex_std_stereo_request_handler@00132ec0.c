
undefined8 speex_std_stereo_request_handler(undefined8 param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  int iVar6;
  
  if (param_3[4] != -0x21524111) {
    param_3[4] = -0x21524111;
    param_3[5] = 0;
    param_3[2] = 0x4000;
    param_3[3] = 0x4000;
    param_3[0] = 0x10000;
    param_3[1] = 0x4000;
  }
  iVar6 = speex_bits_unpack_unsigned(param_1,1);
  sVar2 = -1;
  if (iVar6 == 0) {
    sVar2 = 1;
  }
  sVar5 = speex_bits_unpack_unsigned(param_1,5);
  iVar6 = (int)(short)(sVar5 * 0x200 * sVar2);
  if (iVar6 < 0x532b) {
    if (-0x532b < iVar6) {
      uVar3 = iVar6 * 0x5c55 + 0x2000;
      iVar6 = (int)(uVar3 * 4) >> 0x10;
      if (0x77ff < iVar6) goto LAB_00132f60;
      if (-0x7801 < iVar6) {
        uVar3 = uVar3 >> 0xe;
        uVar4 = uVar3 & 0x7ff;
        iVar6 = uVar4 * 8;
        uVar3 = -((int)(uVar3 << 0x10) >> 0x1b) - 2;
        iVar1 = (int)((((((uVar4 * 0x28a8 >> 0xe) + 0xe8e) * iVar6 * 4 & 0x1fff0000) + 0x2c5c0000 >>
                       0x10) * iVar6 * 4 & 0x7fff0000) + 0x40000000) >> 0x10;
        iVar6 = iVar1 >> (uVar3 & 0x1f);
        if ((int)uVar3 < 1) {
          iVar6 = iVar1 << (ulong)(-uVar3 & 0x1f);
        }
        goto LAB_00132f78;
      }
    }
    iVar6 = 0;
  }
  else {
LAB_00132f60:
    iVar6 = 0x7fffffff;
  }
LAB_00132f78:
  *param_3 = iVar6;
  iVar6 = speex_bits_unpack_unsigned(param_1,2);
  param_3[1] = (int)*(short *)(&DAT_00137334 + (long)iVar6 * 2);
  return 0;
}

