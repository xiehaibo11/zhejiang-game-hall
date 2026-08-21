
int EVP_PKEY_verify(EVP_PKEY_CTX *ctx,uchar *sig,size_t siglen,uchar *tbs,size_t tbslen)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (((ctx != (EVP_PKEY_CTX *)0x0) && (*(long *)ctx != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)ctx + 0x58), UNRECOVERED_JUMPTABLE != (code *)0x0)
     ) {
    if (*(int *)(ctx + 0x20) == 0x10) {
                    /* WARNING: Could not recover jumptable at 0x00b377f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*UNRECOVERED_JUMPTABLE)();
      return iVar1;
    }
    ERR_put_error(6,0x8e,0x97,"crypto/evp/pmeth_fn.c",0x5e);
    return -1;
  }
  ERR_put_error(6,0x8e,0x96,"crypto/evp/pmeth_fn.c",0x5a);
  return -2;
}

