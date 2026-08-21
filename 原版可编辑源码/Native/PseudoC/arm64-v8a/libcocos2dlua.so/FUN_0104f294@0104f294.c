
undefined8 FUN_0104f294(long param_1)

{
  if ((*(byte *)(param_1 + 0x65) >> 4 & 1) != 0) {
    OPENSSL_init_ssl(0,0);
    OPENSSL_init_crypto(0xc,0);
    OPENSSL_init_ssl(0x200002,0);
    DAT_01795f7c = CRYPTO_get_ex_new_index
                             (0,0,"lws",(undefined1 *)0x0,(undefined1 *)0x0,(undefined1 *)0x0);
    DAT_01795f80 = CRYPTO_get_ex_new_index
                             (1,0,(void *)0x0,(undefined1 *)0x0,(undefined1 *)0x0,(undefined1 *)0x0)
    ;
                    /* try { // try from 0104f318 to 0114f35f has its CatchHandler @ 0104f318
                       catch() { ... } // from try @ 0104f318 with catch @ 0104f318
                       catch() { ... } // from try @ 0104f378 with catch @ 0104f318 */
  }
  return 0;
}

