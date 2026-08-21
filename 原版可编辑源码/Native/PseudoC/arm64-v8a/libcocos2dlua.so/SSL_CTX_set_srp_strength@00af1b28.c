
void SSL_CTX_set_srp_strength(undefined8 param_1,int param_2)

{
  ssl3_ctx_ctrl(param_1,0x50,(long)param_2,0);
  return;
}

