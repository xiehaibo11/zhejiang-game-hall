
int ECDSA_verify(int type,uchar *dgst,int dgstlen,uchar *sig,int siglen,EC_KEY *eckey)

{
  int iVar1;
  
  if (*(code **)(*(long *)eckey + 0x68) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b12e88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(*(long *)eckey + 0x68))(type,dgst,dgstlen,sig,siglen);
    return iVar1;
  }
  ERR_put_error(0x10,0xfd,0x98,"crypto/ec/ecdsa_vrf.c",0x29);
  return 0;
}

