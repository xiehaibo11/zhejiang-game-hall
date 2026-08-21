
undefined8 FUN_00aacb10(long param_1)

{
  if ((*(byte *)(param_1 + 0x65) >> 4 & 1) != 0) {
    OPENSSL_init_ssl(0,0);
    OPENSSL_init_crypto(0xc,0);
    OPENSSL_init_ssl(0x200002,0);
    DAT_01d54498 = CRYPTO_get_ex_new_index
                             (0,0,"lws",(undefined1 *)0x0,(undefined1 *)0x0,(undefined1 *)0x0);
    DAT_01d5449c = CRYPTO_get_ex_new_index
                             (1,0,(void *)0x0,(undefined1 *)0x0,(undefined1 *)0x0,(undefined1 *)0x0)
    ;
  }
  return 0;
}

