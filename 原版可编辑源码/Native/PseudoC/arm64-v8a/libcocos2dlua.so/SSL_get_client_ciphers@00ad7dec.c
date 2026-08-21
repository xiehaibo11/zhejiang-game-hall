
undefined8 SSL_get_client_ciphers(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x178) == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x38) == 0) {
      return 0;
    }
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x178) + 0xe8);
  }
                    /* try { // try from 00ad7e04 to 00bd7e6b has its CatchHandler @ 00ad7e04
                       catch() { ... } // from try @ 00ad7e04 with catch @ 00ad7e04
                       catch() { ... } // from try @ 00ad7e74 with catch @ 00ad7e04 */
  return uVar1;
}

