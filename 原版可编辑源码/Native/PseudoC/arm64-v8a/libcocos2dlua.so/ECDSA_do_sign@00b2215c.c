
ECDSA_SIG * ECDSA_do_sign(uchar *dgst,int dgst_len,EC_KEY *eckey)

{
  ECDSA_SIG *pEVar1;
  
  if (*(code **)(*(long *)eckey + 0x60) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b22178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pEVar1 = (ECDSA_SIG *)(**(code **)(*(long *)eckey + 0x60))(dgst,dgst_len,0,0,eckey);
    return pEVar1;
  }
  ERR_put_error(0x10,0xfb,0x98,"crypto/ec/ecdsa_sign.c",0x19);
  return (ECDSA_SIG *)0x0;
}

