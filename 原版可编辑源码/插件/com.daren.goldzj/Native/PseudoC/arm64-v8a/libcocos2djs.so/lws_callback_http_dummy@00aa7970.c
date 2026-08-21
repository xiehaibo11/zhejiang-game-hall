
undefined8
lws_callback_http_dummy(undefined8 param_1,int param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  
  if (param_2 == 0x43) {
    _lws_log(4,"LWS_CALLBACK_SSL_INFO: where: 0x%x, ret: 0x%x\n",*param_4,param_4[1]);
  }
  else if (param_2 == 0xf) {
    iVar1 = lws_http_transaction_completed(param_1);
                    /* try { // try from 00aa79dc to 00ba7bb3 has its CatchHandler @ 00aa79dc
                       catch() { ... } // from try @ 00aa79dc with catch @ 00aa79dc
                       catch() { ... } // from try @ 00aa7bc8 with catch @ 00aa79dc
                       catch() { ... } // from try @ 00aa7c28 with catch @ 00aa79dc */
    if (iVar1 != 0) {
      return 0xffffffff;
    }
  }
  else if (param_2 == 0xc) {
                    /* try { // try from 00aa799c to 00ba799f has its CatchHandler @ 00aa79a0 */
                    /* catch() { ... } // from try @ 00aa7938 with catch @ 00aa79a0
                       catch() { ... } // from try @ 00aa799c with catch @ 00aa79a0
                       try { // try from 00aa79a0 to 00ba79db has its CatchHandler @ 00aa786c */
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

