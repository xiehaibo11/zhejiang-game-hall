
ulong CRYPTO_ccm128_tag(byte *param_1,void *param_2,ulong param_3)

{
  ulong __n;
  
  __n = (ulong)((*param_1 >> 2 & 0xe) + 2);
  if (param_3 < __n) {
    __n = 0;
  }
  else {
    memcpy(param_2,param_1 + 0x10,__n);
  }
  return __n;
}

