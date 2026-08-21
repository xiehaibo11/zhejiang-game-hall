
int X509V3_add_value(char *name,char *value,stack_st_CONF_VALUE **extlist)

{
  int iVar1;
  char *ptr;
  char *ptr_00;
  undefined8 *ptr_01;
  stack_st_CONF_VALUE *psVar2;
  
  if (name == (char *)0x0) {
    ptr = (char *)0x0;
  }
  else {
    ptr = CRYPTO_strdup(name,"crypto/x509v3/v3_utl.c",0x29);
    if (ptr == (char *)0x0) {
      ptr_01 = (undefined8 *)0x0;
      ptr_00 = (char *)0x0;
      goto LAB_00b75e64;
    }
  }
  ptr_00 = (char *)0x0;
  if ((value == (char *)0x0) ||
     (ptr_00 = CRYPTO_strdup(value,"crypto/x509v3/v3_utl.c",0x2b), ptr_00 != (char *)0x0)) {
    ptr_01 = CRYPTO_malloc(0x18,"crypto/x509v3/v3_utl.c",0x2d);
    if (ptr_01 != (undefined8 *)0x0) {
      if (*extlist == (stack_st_CONF_VALUE *)0x0) {
        psVar2 = (stack_st_CONF_VALUE *)OPENSSL_sk_new_null();
        *extlist = psVar2;
        if (psVar2 == (stack_st_CONF_VALUE *)0x0) goto LAB_00b75e64;
      }
      *ptr_01 = 0;
      ptr_01[1] = ptr;
      ptr_01[2] = ptr_00;
      iVar1 = OPENSSL_sk_push(*extlist,ptr_01);
      if (iVar1 != 0) {
        return 1;
      }
    }
  }
  else {
    ptr_01 = (undefined8 *)0x0;
  }
LAB_00b75e64:
  ERR_put_error(0x22,0x69,0x41,"crypto/x509v3/v3_utl.c",0x38);
  CRYPTO_free(ptr_01);
  CRYPTO_free(ptr);
  CRYPTO_free(ptr_00);
  return 0;
}

