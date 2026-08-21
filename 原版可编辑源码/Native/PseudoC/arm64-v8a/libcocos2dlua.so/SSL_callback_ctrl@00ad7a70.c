
long SSL_callback_ctrl(SSL *param_1,int param_2,_func_3375 *param_3)

{
  uint uVar1;
  
  if (param_2 == 0xf) {
    param_1->msg_callback_arg = param_3;
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00ad7a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*param_1->method->ssl_version)(param_1);
  return (ulong)uVar1;
}

