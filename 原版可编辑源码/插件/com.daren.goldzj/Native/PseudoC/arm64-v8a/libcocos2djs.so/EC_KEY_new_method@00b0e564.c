
EC_KEY * EC_KEY_new_method(ENGINE *param_1)

{
  int iVar1;
  EC_KEY *key;
  long lVar2;
  int line;
  
  key = (EC_KEY *)CRYPTO_zalloc(0x50,"crypto/ec/ec_kmeth.c",0x4b);
  if (key == (EC_KEY *)0x0) {
    ERR_put_error(0x10,0xf5,0x41,"crypto/ec/ec_kmeth.c",0x4e);
    return (EC_KEY *)0x0;
  }
  *(undefined4 *)(key + 0x38) = 1;
  lVar2 = CRYPTO_THREAD_lock_new();
  *(long *)(key + 0x48) = lVar2;
  if (lVar2 == 0) {
    ERR_put_error(0x10,0xf5,0x41,"crypto/ec/ec_kmeth.c",0x55);
    CRYPTO_free(key);
    return (EC_KEY *)0x0;
  }
  *(undefined **)key = PTR_PTR_01d20228;
  if (param_1 == (ENGINE *)0x0) {
    param_1 = (ENGINE *)ENGINE_get_default_EC();
    *(ENGINE **)(key + 8) = param_1;
    if (param_1 != (ENGINE *)0x0) goto LAB_00b0e62c;
LAB_00b0e63c:
    *(undefined4 *)(key + 0x10) = 1;
    *(undefined4 *)(key + 0x34) = 4;
    iVar1 = CRYPTO_new_ex_data(8,key,(CRYPTO_EX_DATA *)(key + 0x40));
    if (iVar1 == 0) goto LAB_00b0e6cc;
    if (*(code **)(*(long *)key + 0x10) == (code *)0x0) {
      return key;
    }
    iVar1 = (**(code **)(*(long *)key + 0x10))(key);
    if (iVar1 != 0) {
      return key;
    }
    iVar1 = 0x46;
    line = 0x75;
  }
  else {
    iVar1 = ENGINE_init(param_1);
    if (iVar1 == 0) {
      iVar1 = 0x26;
      line = 0x5e;
    }
    else {
      *(ENGINE **)(key + 8) = param_1;
LAB_00b0e62c:
      lVar2 = ENGINE_get_EC(param_1);
      *(long *)key = lVar2;
      if (lVar2 != 0) goto LAB_00b0e63c;
      iVar1 = 0x26;
      line = 0x67;
    }
  }
  ERR_put_error(0x10,0xf5,iVar1,"crypto/ec/ec_kmeth.c",line);
LAB_00b0e6cc:
  EC_KEY_free(key);
  return (EC_KEY *)0x0;
}

