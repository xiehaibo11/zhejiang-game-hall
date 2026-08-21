
void EC_KEY_free(EC_KEY *key)

{
  code *pcVar1;
  int local_14;
  
  if ((key != (EC_KEY *)0x0) &&
     (CRYPTO_atomic_add(key + 0x38,0xffffffff,&local_14,*(undefined8 *)(key + 0x48)), local_14 < 1))
  {
    if (*(code **)(*(long *)key + 0x18) != (code *)0x0) {
      (**(code **)(*(long *)key + 0x18))(key);
    }
    ENGINE_finish(*(ENGINE **)(key + 8));
    if ((*(long **)(key + 0x18) != (long *)0x0) &&
       (pcVar1 = *(code **)(**(long **)(key + 0x18) + 0x170), pcVar1 != (code *)0x0)) {
      (*pcVar1)(key);
    }
    CRYPTO_free_ex_data(8,key,(CRYPTO_EX_DATA *)(key + 0x40));
    CRYPTO_THREAD_lock_free(*(undefined8 *)(key + 0x48));
    EC_GROUP_free(*(EC_GROUP **)(key + 0x18));
    EC_POINT_free(*(EC_POINT **)(key + 0x20));
    BN_clear_free(*(BIGNUM **)(key + 0x28));
    CRYPTO_clear_free(key,0x50,"crypto/ec/ec_key.c",0x4a);
  }
  return;
}

