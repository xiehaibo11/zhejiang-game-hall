
ASN1_TYPE * ASN1_generate_v3(char *str,X509V3_CTX *cnf)

{
  ASN1_TYPE *pAVar1;
  int local_14;
  
  local_14 = 0;
  pAVar1 = (ASN1_TYPE *)FUN_00b8d5c0(str,cnf,0,&local_14);
  if (local_14 != 0) {
    ERR_put_error(0xd,0xb2,local_14,"crypto/asn1/asn1_gen.c",0x5e);
  }
  return pAVar1;
}

