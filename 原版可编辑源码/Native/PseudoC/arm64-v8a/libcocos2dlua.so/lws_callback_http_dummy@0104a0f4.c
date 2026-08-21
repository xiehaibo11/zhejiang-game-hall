
undefined8
lws_callback_http_dummy(undefined8 param_1,int param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  
                    /* try { // try from 0104a0f8 to 0114a0ff has its CatchHandler @ 0104a274 */
                    /* try { // try from 0104a100 to 0114a277 has its CatchHandler @ 0104a0ac */
  if (param_2 == 0x43) {
    _lws_log(4,"LWS_CALLBACK_SSL_INFO: where: 0x%x, ret: 0x%x\n",*param_4,param_4[1]);
  }
  else if (param_2 == 0xf) {
    iVar1 = lws_http_transaction_completed(param_1);
    if (iVar1 != 0) {
      return 0xffffffff;
    }
  }
  else if (param_2 == 0xc) {
    iVar1 = lws_return_http_status(param_1,0x194,0);
    if (iVar1 != 0) {
      return 0xffffffff;
    }
    iVar1 = lws_http_transaction_completed(param_1);
    if (iVar1 != 0) {
      return 0xffffffff;
    }
  }
  return 0;
}

