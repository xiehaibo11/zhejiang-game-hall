
int FUN_00b94824(uchar *param_1,undefined8 *param_2)

{
  int iVar1;
  size_t sVar2;
  uchar *t;
  int line;
  
  sVar2 = strlen((char *)param_1);
  if (sVar2 == 0) {
    *param_2 = 0;
    iVar1 = 0;
  }
  else {
    t = CRYPTO_malloc((int)(sVar2 >> 2) * 3,"crypto/ct/ct_b64.c",0x24);
    if (t == (uchar *)0x0) {
      iVar1 = 0x41;
      line = 0x26;
    }
    else {
      iVar1 = EVP_DecodeBlock(t,param_1,(int)sVar2);
      if (-1 < iVar1) {
        *param_2 = t;
        return iVar1;
      }
      iVar1 = 0x6c;
      line = 0x2c;
    }
    ERR_put_error(0x32,0x7c,iVar1,"crypto/ct/ct_b64.c",line);
    CRYPTO_free(t);
    iVar1 = -1;
  }
  return iVar1;
}

