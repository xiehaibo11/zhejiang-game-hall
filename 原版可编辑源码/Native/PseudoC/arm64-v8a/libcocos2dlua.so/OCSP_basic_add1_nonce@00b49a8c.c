
int OCSP_basic_add1_nonce(OCSP_BASICRESP *resp,uchar *val,int len)

{
  int iVar1;
  
  iVar1 = FUN_00b49990(&resp[1].signatureAlgorithm,val,len);
  return iVar1;
}

