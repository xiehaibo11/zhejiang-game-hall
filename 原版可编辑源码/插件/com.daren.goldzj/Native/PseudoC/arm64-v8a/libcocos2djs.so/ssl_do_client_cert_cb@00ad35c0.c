
ulong ssl_do_client_cert_cb(SSL *param_1,X509 **param_2,EVP_PKEY **param_3)

{
  uint uVar1;
  stack_st_X509_NAME *ca_dn;
  ulong uVar2;
  ENGINE *e;
  
  uVar2 = param_1->mode;
  e = *(ENGINE **)(uVar2 + 0x1b8);
  if (e != (ENGINE *)0x0) {
    ca_dn = SSL_get_client_CA_list(param_1);
    uVar1 = ENGINE_load_ssl_client_cert
                      (e,param_1,ca_dn,param_2,param_3,(stack_st_X509 **)0x0,(UI_METHOD *)0x0,
                       (void *)0x0);
    if (uVar1 != 0) {
      return (ulong)uVar1;
    }
    uVar2 = param_1->mode;
  }
  if (*(code **)(uVar2 + 0xb8) == (code *)0x0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00ad363c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(uVar2 + 0xb8))(param_1,param_2,param_3);
  return uVar2;
}

