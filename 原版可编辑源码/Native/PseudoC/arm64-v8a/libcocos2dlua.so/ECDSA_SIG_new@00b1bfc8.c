
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ECDSA_SIG * ECDSA_SIG_new(void)

{
  ECDSA_SIG *pEVar1;
  
  pEVar1 = (ECDSA_SIG *)CRYPTO_zalloc(0x10,"crypto/ec/ec_asn1.c",0x496);
  if (pEVar1 == (ECDSA_SIG *)0x0) {
    ERR_put_error(0x10,0x109,0x41,"crypto/ec/ec_asn1.c",0x498);
  }
  return pEVar1;
}

