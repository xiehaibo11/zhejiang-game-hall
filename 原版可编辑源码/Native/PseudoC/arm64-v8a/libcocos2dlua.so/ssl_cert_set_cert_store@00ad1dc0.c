
undefined8 ssl_cert_set_cert_store(long param_1,long param_2,int param_3,int param_4)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 400);
  if (param_3 != 0) {
    plVar1 = (long *)(param_1 + 0x188);
  }
  X509_STORE_free((X509_STORE *)*plVar1);
  *plVar1 = param_2;
  if ((param_2 != 0) && (param_4 != 0)) {
    X509_STORE_up_ref(param_2);
  }
  return 1;
}

