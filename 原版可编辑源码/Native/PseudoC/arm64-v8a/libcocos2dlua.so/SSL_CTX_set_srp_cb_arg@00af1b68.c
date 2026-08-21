
void SSL_CTX_set_srp_cb_arg(undefined8 param_1,undefined8 param_2)

{
                    /* try { // try from 00af1b68 to 00bf1baf has its CatchHandler @ 00af2094 */
  ssl3_ctx_ctrl(param_1,0x4e,0,param_2);
  return;
}

