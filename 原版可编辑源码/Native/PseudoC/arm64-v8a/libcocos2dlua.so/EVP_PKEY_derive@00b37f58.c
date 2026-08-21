
int EVP_PKEY_derive(EVP_PKEY_CTX *ctx,uchar *key,size_t *keylen)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  
  if (((ctx == (EVP_PKEY_CTX *)0x0) || (lVar2 = *(long *)ctx, lVar2 == 0)) ||
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 0xb8), UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    ERR_put_error(6,0x99,0x96,"crypto/evp/pmeth_fn.c",0x11e);
    iVar1 = -2;
  }
  else if (*(int *)(ctx + 0x20) == 0x400) {
    if ((*(byte *)(lVar2 + 4) >> 1 & 1) == 0) {
LAB_00b38044:
                    /* WARNING: Could not recover jumptable at 0x00b3805c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*UNRECOVERED_JUMPTABLE)(ctx,key,keylen);
      return iVar1;
    }
    iVar1 = EVP_PKEY_size(*(EVP_PKEY **)(ctx + 0x10));
    if (key == (uchar *)0x0) {
      *keylen = (long)iVar1;
      iVar1 = 1;
    }
    else {
      if ((ulong)(long)iVar1 <= *keylen) {
        UNRECOVERED_JUMPTABLE = *(code **)(*(long *)ctx + 0xb8);
        goto LAB_00b38044;
      }
      ERR_put_error(6,0x99,0x9b,"crypto/evp/pmeth_fn.c",0x125);
      iVar1 = 0;
    }
  }
  else {
    ERR_put_error(6,0x99,0x97,"crypto/evp/pmeth_fn.c",0x122);
    iVar1 = -1;
  }
  return iVar1;
}

