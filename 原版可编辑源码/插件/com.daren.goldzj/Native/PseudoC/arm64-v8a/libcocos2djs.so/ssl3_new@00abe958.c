
undefined8 ssl3_new(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = CRYPTO_zalloc(0x400,"ssl/s3_lib.c",0xaef);
  uVar2 = 0;
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x90) = lVar1;
    uVar2 = SSL_SRP_CTX_init(param_1);
    if ((int)uVar2 != 0) {
      (**(code **)(*(long *)(param_1 + 8) + 0x18))(param_1);
      uVar2 = 1;
    }
  }
  return uVar2;
}

