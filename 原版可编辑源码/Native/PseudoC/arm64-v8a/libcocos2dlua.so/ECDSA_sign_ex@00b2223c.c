
int ECDSA_sign_ex(int type,uchar *dgst,int dgstlen,uchar *sig,uint *siglen,BIGNUM *kinv,BIGNUM *rp,
                 EC_KEY *eckey)

{
  int iVar1;
  
  if (*(code **)(*(long *)eckey + 0x50) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b22248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(*(long *)eckey + 0x50))(type,dgst,dgstlen);
    return iVar1;
  }
  ERR_put_error(0x10,0xfe,0x98,"crypto/ec/ecdsa_sign.c",0x29);
  return 0;
}

