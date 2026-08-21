
int EVP_PKEY_CTX_ctrl_str(EVP_PKEY_CTX *ctx,char *type,char *value)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  EVP_MD *p2;
  
  if (((ctx == (EVP_PKEY_CTX *)0x0) || (*(long *)ctx == 0)) ||
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)ctx + 200), UNRECOVERED_JUMPTABLE == (code *)0x0))
  {
    ERR_put_error(6,0x96,0x93,"crypto/evp/pmeth_lib.c",0x147);
    iVar1 = -2;
  }
  else {
    iVar1 = strcmp(type,"digest");
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00b2a77c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*UNRECOVERED_JUMPTABLE)(ctx,type,value);
      return iVar1;
    }
    if ((value != (char *)0x0) && (p2 = EVP_get_digestbyname(value), p2 != (EVP_MD *)0x0)) {
      iVar1 = EVP_PKEY_CTX_ctrl(ctx,-1,0xf8,1,0,p2);
      return iVar1;
    }
    ERR_put_error(6,0x96,0x98,"crypto/evp/pmeth_lib.c",0x14d);
    iVar1 = 0;
  }
  return iVar1;
}

