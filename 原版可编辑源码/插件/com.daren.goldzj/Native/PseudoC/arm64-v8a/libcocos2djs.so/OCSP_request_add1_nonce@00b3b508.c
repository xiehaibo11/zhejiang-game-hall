
int OCSP_request_add1_nonce(OCSP_REQUEST *req,uchar *val,int len)

{
  int iVar1;
  
  iVar1 = FUN_00b3b510(&req[1].optionalSignature,val,len);
  return iVar1;
}

