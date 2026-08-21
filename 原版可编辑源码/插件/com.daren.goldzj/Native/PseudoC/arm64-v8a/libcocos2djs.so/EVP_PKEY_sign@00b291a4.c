
int EVP_PKEY_sign(EVP_PKEY_CTX *ctx,uchar *sig,size_t *siglen,uchar *tbs,size_t tbslen)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  
  if (((ctx == (EVP_PKEY_CTX *)0x0) || (lVar2 = *(long *)ctx, lVar2 == 0)) ||
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 0x48), UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    ERR_put_error(6,0x8c,0x96,"crypto/evp/pmeth_fn.c",0x38);
    iVar1 = -2;
  }
  else if (*(int *)(ctx + 0x20) == 8) {
    if ((*(byte *)(lVar2 + 4) >> 1 & 1) == 0) {
LAB_00b292a0:
                    /* WARNING: Could not recover jumptable at 0x00b292c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*UNRECOVERED_JUMPTABLE)(ctx,sig,siglen,tbs,tbslen);
      return iVar1;
    }
    iVar1 = EVP_PKEY_size(*(EVP_PKEY **)(ctx + 0x10));
    if (sig == (uchar *)0x0) {
      *siglen = (long)iVar1;
      iVar1 = 1;
    }
    else {
      if ((ulong)(long)iVar1 <= *siglen) {
        UNRECOVERED_JUMPTABLE = *(code **)(*(long *)ctx + 0x48);
        goto LAB_00b292a0;
      }
      ERR_put_error(6,0x8c,0x9b,"crypto/evp/pmeth_fn.c",0x3f);
      iVar1 = 0;
    }
  }
  else {
    ERR_put_error(6,0x8c,0x97,"crypto/evp/pmeth_fn.c",0x3c);
    iVar1 = -1;
  }
  return iVar1;
}

