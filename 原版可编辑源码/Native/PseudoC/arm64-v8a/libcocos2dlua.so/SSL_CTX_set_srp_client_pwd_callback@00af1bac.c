
void SSL_CTX_set_srp_client_pwd_callback(undefined8 param_1,undefined8 param_2)

{
                    /* try { // try from 00af1bb8 to 00bf1c0f has its CatchHandler @ 00af2064 */
  ssl3_ctx_callback_ctrl(param_1,0x4d,param_2);
  return;
}

