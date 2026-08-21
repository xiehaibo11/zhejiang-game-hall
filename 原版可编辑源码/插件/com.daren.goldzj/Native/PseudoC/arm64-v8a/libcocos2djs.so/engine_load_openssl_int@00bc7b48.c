
ulong engine_load_openssl_int(void)

{
  int iVar1;
  uint uVar2;
  ENGINE *e;
  RSA_METHOD *rsa_meth;
  DSA_METHOD *dsa_meth;
  undefined8 uVar3;
  DH_METHOD *dh_meth;
  RAND_METHOD *rand_meth;
  ulong extraout_x0;
  
  e = ENGINE_new();
  if (e == (ENGINE *)0x0) {
    return 0;
  }
  iVar1 = ENGINE_set_id(e,"openssl");
  if (((iVar1 != 0) && (iVar1 = ENGINE_set_name(e,"Software engine support"), iVar1 != 0)) &&
     (iVar1 = ENGINE_set_destroy_function(e,(ENGINE_GEN_INT_FUNC_PTR)&LAB_00bc7c74), iVar1 != 0)) {
    rsa_meth = RSA_get_default_method();
    iVar1 = ENGINE_set_RSA(e,rsa_meth);
    if (iVar1 != 0) {
      dsa_meth = DSA_get_default_method();
      iVar1 = ENGINE_set_DSA(e,dsa_meth);
      if (iVar1 != 0) {
        uVar3 = EC_KEY_OpenSSL();
        iVar1 = ENGINE_set_EC(e,uVar3);
        if (iVar1 != 0) {
          dh_meth = DH_get_default_method();
          iVar1 = ENGINE_set_DH(e,dh_meth);
          if (iVar1 != 0) {
            rand_meth = (RAND_METHOD *)RAND_OpenSSL();
            iVar1 = ENGINE_set_RAND(e,rand_meth);
            if (((iVar1 != 0) && (iVar1 = ENGINE_set_ciphers(e,FUN_00bc7cbc), iVar1 != 0)) &&
               ((iVar1 = ENGINE_set_digests(e,FUN_00bc7db8), iVar1 != 0 &&
                (iVar1 = ENGINE_set_load_privkey_function(e,FUN_00bc7e84), iVar1 != 0)))) {
              ENGINE_add(e);
              ENGINE_free(e);
              ERR_clear_error();
              return extraout_x0;
            }
          }
        }
      }
    }
  }
  uVar2 = ENGINE_free(e);
  return (ulong)uVar2;
}

