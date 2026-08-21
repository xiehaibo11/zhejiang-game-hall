
void async_start_func(void)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  
  iVar1 = OPENSSL_init_crypto(0x100,0);
  if (iVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = CRYPTO_THREAD_get_local(&DAT_01d39050);
  }
  do {
    lVar4 = *(long *)(lVar3 + 8);
    uVar2 = (**(code **)(lVar4 + 8))(*(undefined8 *)(lVar4 + 0x10));
    *(undefined4 *)(lVar4 + 0x18) = uVar2;
    *(undefined4 *)(lVar4 + 0x1c) = 3;
    ERR_put_error(0x33,0x68,0x66,"crypto/async/async.c",0xa4);
  } while( true );
}

