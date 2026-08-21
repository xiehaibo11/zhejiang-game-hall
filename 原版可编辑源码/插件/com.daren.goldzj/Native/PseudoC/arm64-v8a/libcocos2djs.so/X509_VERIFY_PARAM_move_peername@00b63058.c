
void X509_VERIFY_PARAM_move_peername(long param_1,long param_2)

{
  void *pvVar1;
  
  if (param_2 == 0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = *(void **)(param_2 + 0x48);
  }
  if (*(void **)(param_1 + 0x48) != pvVar1) {
    CRYPTO_free(*(void **)(param_1 + 0x48));
    *(void **)(param_1 + 0x48) = pvVar1;
  }
  if (param_2 != 0) {
    *(undefined8 *)(param_2 + 0x48) = 0;
  }
                    /* try { // try from 00b630ac to 00c630ef has its CatchHandler @ 00b630ac
                       catch() { ... } // from try @ 00b630ac with catch @ 00b630ac
                       catch() { ... } // from try @ 00b63198 with catch @ 00b630ac
                       catch() { ... } // from try @ 00b63418 with catch @ 00b630ac */
  return;
}

