
int ENGINE_free(ENGINE *e)

{
  int local_14;
  
  if (e != (ENGINE *)0x0) {
    CRYPTO_atomic_add(e + 0x9c,0xffffffff,&local_14,global_engine_lock);
    if (local_14 < 1) {
      engine_pkey_meths_free(e);
      engine_pkey_asn1_meths_free(e);
      if (*(code **)(e + 0x58) != (code *)0x0) {
        (**(code **)(e + 0x58))(e);
      }
      CRYPTO_free_ex_data(10,e,(CRYPTO_EX_DATA *)(e + 0xa8));
      CRYPTO_free(e);
    }
  }
  return 1;
}

