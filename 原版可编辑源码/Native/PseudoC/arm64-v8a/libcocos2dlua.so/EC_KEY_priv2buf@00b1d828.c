
long EC_KEY_priv2buf(long param_1,undefined8 *param_2)

{
  void *ptr;
  long lVar1;
  code *pcVar2;
  long lVar3;
  
  if ((*(long **)(param_1 + 0x18) != (long *)0x0) &&
     (lVar1 = **(long **)(param_1 + 0x18), lVar1 != 0)) {
    pcVar2 = *(code **)(lVar1 + 0x138);
    if (pcVar2 == (code *)0x0) {
      ERR_put_error(0x10,0x100,0x42,"crypto/ec/ec_key.c",0x22b);
    }
    else {
      lVar1 = (*pcVar2)(param_1,0,0);
      if (lVar1 == 0) {
        return 0;
      }
      ptr = CRYPTO_malloc((int)lVar1,"crypto/ec/ec_key.c",0x26b);
      if (ptr == (void *)0x0) {
        return 0;
      }
      if ((*(long **)(param_1 + 0x18) != (long *)0x0) &&
         (lVar3 = **(long **)(param_1 + 0x18), lVar3 != 0)) {
        pcVar2 = *(code **)(lVar3 + 0x138);
        if (pcVar2 == (code *)0x0) {
          ERR_put_error(0x10,0x100,0x42,"crypto/ec/ec_key.c",0x22b);
        }
        else {
          lVar1 = (*pcVar2)(param_1,ptr,lVar1);
          if (lVar1 != 0) {
            *param_2 = ptr;
            return lVar1;
          }
        }
      }
      CRYPTO_free(ptr);
    }
  }
  return 0;
}

