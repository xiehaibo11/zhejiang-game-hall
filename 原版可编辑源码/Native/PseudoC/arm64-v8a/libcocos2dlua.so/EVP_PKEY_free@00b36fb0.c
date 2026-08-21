
void EVP_PKEY_free(EVP_PKEY *pkey)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  int local_14;
  
  if ((pkey != (EVP_PKEY *)0x0) &&
     (uVar2._0_4_ = pkey[1].type, uVar2._4_4_ = pkey[1].save_type,
     CRYPTO_atomic_add(&pkey->references,0xffffffff,&local_14,uVar2), local_14 < 1)) {
    if ((pkey->ameth != (EVP_PKEY_ASN1_METHOD *)0x0) &&
       (pcVar3 = *(code **)(pkey->ameth + 0xa8), pcVar3 != (code *)0x0)) {
      (*pcVar3)(pkey);
      (pkey->pkey).ptr = (char *)0x0;
    }
    ENGINE_finish(pkey->engine);
    uVar1._0_4_ = pkey[1].type;
    uVar1._4_4_ = pkey[1].save_type;
    pkey->engine = (ENGINE *)0x0;
    CRYPTO_THREAD_lock_free(uVar1);
    OPENSSL_sk_pop_free(pkey->attributes,X509_ATTRIBUTE_free);
    CRYPTO_free(pkey);
  }
  return;
}

