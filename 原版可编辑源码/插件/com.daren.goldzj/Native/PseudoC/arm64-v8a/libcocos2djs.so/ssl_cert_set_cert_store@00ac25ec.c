
undefined8 ssl_cert_set_cert_store(long param_1,long param_2,int param_3,int param_4)

{
  long *plVar1;
  
                    /* catch() { ... } // from try @ 00ac2238 with catch @ 00ac25ec */
  plVar1 = (long *)(param_1 + 400);
                    /* catch() { ... } // from try @ 00ac2164 with catch @ 00ac2600 */
  if (param_3 != 0) {
    plVar1 = (long *)(param_1 + 0x188);
  }
                    /* catch() { ... } // from try @ 00ac2490 with catch @ 00ac2610
                       catch() { ... } // from try @ 00ac24d8 with catch @ 00ac2610 */
  X509_STORE_free((X509_STORE *)*plVar1);
  *plVar1 = param_2;
  if ((param_2 != 0) && (param_4 != 0)) {
    X509_STORE_up_ref(param_2);
  }
  return 1;
}

