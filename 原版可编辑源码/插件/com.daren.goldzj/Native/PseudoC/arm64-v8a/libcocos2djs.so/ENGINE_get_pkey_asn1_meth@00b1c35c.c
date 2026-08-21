
EVP_PKEY_ASN1_METHOD * ENGINE_get_pkey_asn1_meth(ENGINE *e,int nid)

{
  int iVar1;
  EVP_PKEY_ASN1_METHOD *local_18;
  
  if ((*(code **)(e + 0x50) == (code *)0x0) ||
     (iVar1 = (**(code **)(e + 0x50))(e,&local_18,0,nid), iVar1 == 0)) {
    ERR_put_error(0x26,0xc1,0x65,"crypto/engine/tb_asnmth.c",0x58);
    local_18 = (EVP_PKEY_ASN1_METHOD *)0x0;
  }
  return local_18;
}

