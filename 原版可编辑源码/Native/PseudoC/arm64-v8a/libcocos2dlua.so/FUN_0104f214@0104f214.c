
void FUN_0104f214(SSL_CTX *param_1,void *param_2)

{
  if (*(long *)((long)param_2 + 0x28) != 0) {
    SSL_CTX_set_default_passwd_cb_userdata(param_1,param_2);
    SSL_CTX_set_default_passwd_cb(param_1,FUN_0104f258);
    return;
  }
  return;
}

