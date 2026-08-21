
bool SSL_SESSION_up_ref(long param_1)

{
  int iVar1;
  int local_14;
  
  iVar1 = CRYPTO_atomic_add(param_1 + 0xb8,1,&local_14,*(undefined8 *)(param_1 + 0x158));
                    /* try { // try from 00adc078 to 00bdc0a7 has its CatchHandler @ 00adc0e4 */
  return 0 < iVar1 && 1 < local_14;
}

