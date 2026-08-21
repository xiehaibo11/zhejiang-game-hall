
undefined8 CRYPTO_ccm128_setiv(byte *param_1,void *param_2,ulong param_3,undefined8 param_4)

{
  byte bVar1;
  size_t __n;
  
  bVar1 = *param_1;
  __n = 0xe - ((ulong)bVar1 & 7);
  if (param_3 < __n) {
    return 0xffffffff;
  }
  if ((bVar1 & 7) < 3) {
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  else {
    param_1[8] = (byte)((ulong)param_4 >> 0x38);
    param_1[9] = (byte)((ulong)param_4 >> 0x30);
    param_1[10] = (byte)((ulong)param_4 >> 0x28);
    param_1[0xb] = (byte)((ulong)param_4 >> 0x20);
  }
  param_1[0xc] = (byte)((ulong)param_4 >> 0x18);
  param_1[0xf] = (byte)param_4;
  param_1[0xd] = (byte)((ulong)param_4 >> 0x10);
  param_1[0xe] = (byte)((ulong)param_4 >> 8);
  *param_1 = bVar1 & 0xbf;
  memcpy(param_1 + 1,param_2,__n);
  return 0;
}

