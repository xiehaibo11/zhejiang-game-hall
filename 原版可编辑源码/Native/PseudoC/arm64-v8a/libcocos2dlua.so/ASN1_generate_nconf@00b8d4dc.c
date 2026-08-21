
ASN1_TYPE * ASN1_generate_nconf(char *str,CONF *nconf)

{
  int reason;
  ASN1_TYPE *pAVar1;
  X509V3_CTX local_58;
  int local_14;
  
                    /* try { // try from 00b8d4e8 to 00c8d4ef has its CatchHandler @ 00b8d528 */
                    /* try { // try from 00b8d4f0 to 00c8d543 has its CatchHandler @ 00b8d47c */
  if (nconf == (CONF *)0x0) {
    local_58.flags = 0;
    pAVar1 = (ASN1_TYPE *)FUN_00b8d5c0(str,0,0,&local_58);
    reason = local_58.flags;
  }
  else {
    X509V3_set_nconf(&local_58,nconf);
    local_14 = 0;
    pAVar1 = (ASN1_TYPE *)FUN_00b8d5c0(str,&local_58,0,&local_14);
    reason = local_14;
  }
  if (reason != 0) {
                    /* catch() { ... } // from try @ 00b8d4e8 with catch @ 00b8d528 */
    ERR_put_error(0xd,0xb2,reason,"crypto/asn1/asn1_gen.c",0x5e);
  }
  return pAVar1;
}

