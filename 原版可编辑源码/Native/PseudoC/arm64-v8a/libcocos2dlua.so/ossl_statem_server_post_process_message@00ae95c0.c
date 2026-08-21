
undefined8 ossl_statem_server_post_process_message(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x5c);
  if (iVar1 == 0x1d) {
    return 2;
  }
  if (iVar1 != 0x1c) {
                    /* try { // try from 00ae95d8 to 00be96bb has its CatchHandler @ 00ae95d8
                       catch() { ... } // from try @ 00ae95d8 with catch @ 00ae95d8
                       catch() { ... } // from try @ 00ae96c8 with catch @ 00ae95d8
                       catch() { ... } // from try @ 00ae971c with catch @ 00ae95d8 */
    if (iVar1 == 0x14) {
      uVar2 = tls_post_process_client_hello();
      return uVar2;
    }
    return 0;
  }
  uVar2 = tls_post_process_client_key_exchange();
  return uVar2;
}

