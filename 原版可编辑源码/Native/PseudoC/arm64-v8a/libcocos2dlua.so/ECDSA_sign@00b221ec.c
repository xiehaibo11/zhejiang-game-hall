
int ECDSA_sign(int type,uchar *dgst,int dgstlen,uchar *sig,uint *siglen,EC_KEY *eckey)

{
  int iVar1;
  
  if (*(code **)(*(long *)eckey + 0x50) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b22208. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(*(long *)eckey + 0x50))(type,dgst,dgstlen,sig,siglen,0,0,eckey);
    return iVar1;
  }
  ERR_put_error(0x10,0xfe,0x98,"crypto/ec/ecdsa_sign.c",0x29);
  return 0;
}

