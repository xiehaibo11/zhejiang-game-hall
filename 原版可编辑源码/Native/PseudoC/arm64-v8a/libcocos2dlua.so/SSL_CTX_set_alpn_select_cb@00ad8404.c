
void SSL_CTX_set_alpn_select_cb(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x2e8) = param_2;
  *(undefined8 *)(param_1 + 0x2f0) = param_3;
  return;
}

