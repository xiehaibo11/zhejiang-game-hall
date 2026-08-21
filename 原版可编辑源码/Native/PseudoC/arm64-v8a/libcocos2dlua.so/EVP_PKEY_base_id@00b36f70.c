
int EVP_PKEY_base_id(EVP_PKEY *pkey)

{
  EVP_PKEY_ASN1_METHOD *pEVar1;
  int iVar2;
  ENGINE *local_18;
  
  pEVar1 = EVP_PKEY_asn1_find(&local_18,pkey->type);
  if (pEVar1 == (EVP_PKEY_ASN1_METHOD *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)pEVar1;
  }
  ENGINE_finish(local_18);
  return iVar2;
}

