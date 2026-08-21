
stack_st_CONF_VALUE *
i2v_GENERAL_NAMES(X509V3_EXT_METHOD *method,GENERAL_NAMES *gen,stack_st_CONF_VALUE *extlist)

{
  int iVar1;
  int iVar2;
  X509V3_EXT_METHOD *method_00;
  
  iVar1 = OPENSSL_sk_num(gen);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      method_00 = (X509V3_EXT_METHOD *)OPENSSL_sk_value(gen,iVar1);
      extlist = i2v_GENERAL_NAME(method_00,(GENERAL_NAME *)method_00,extlist);
      iVar1 = iVar1 + 1;
      iVar2 = OPENSSL_sk_num(gen);
    } while (iVar1 < iVar2);
  }
  if (extlist == (stack_st_CONF_VALUE *)0x0) {
    extlist = (stack_st_CONF_VALUE *)OPENSSL_sk_new_null();
  }
  return extlist;
}

