
int EVP_PKEY_decrypt(EVP_PKEY_CTX *ctx,uchar *out,size_t *outlen,uchar *in,size_t inlen)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  
  if (((ctx == (EVP_PKEY_CTX *)0x0) || (lVar2 = *(long *)ctx, lVar2 == 0)) ||
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 0xa8), UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    ERR_put_error(6,0x68,0x96,"crypto/evp/pmeth_fn.c",0xbf);
    iVar1 = -2;
  }
  else if (*(int *)(ctx + 0x20) == 0x200) {
    if ((*(byte *)(lVar2 + 4) >> 1 & 1) == 0) {
LAB_00b2988c:
                    /* WARNING: Could not recover jumptable at 0x00b298b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*UNRECOVERED_JUMPTABLE)(ctx,out,outlen,in,inlen);
      return iVar1;
    }
    iVar1 = EVP_PKEY_size(*(EVP_PKEY **)(ctx + 0x10));
    if (out == (uchar *)0x0) {
      *outlen = (long)iVar1;
      iVar1 = 1;
    }
    else {
      if ((ulong)(long)iVar1 <= *outlen) {
        UNRECOVERED_JUMPTABLE = *(code **)(*(long *)ctx + 0xa8);
        goto LAB_00b2988c;
      }
      ERR_put_error(6,0x68,0x9b,"crypto/evp/pmeth_fn.c",0xc6);
      iVar1 = 0;
    }
  }
  else {
    ERR_put_error(6,0x68,0x97,"crypto/evp/pmeth_fn.c",0xc3);
    iVar1 = -1;
  }
  return iVar1;
}

