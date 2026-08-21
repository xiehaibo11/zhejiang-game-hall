
void SSL_CTX_set_srp_password(undefined8 param_1,undefined8 param_2)

{
  ssl3_ctx_ctrl(param_1,0x51,0,param_2);
  return;
}

