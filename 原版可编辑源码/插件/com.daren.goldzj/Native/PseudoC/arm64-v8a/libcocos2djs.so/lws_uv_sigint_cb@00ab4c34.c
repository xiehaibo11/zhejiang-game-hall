
void lws_uv_sigint_cb(undefined8 *param_1,undefined4 param_2)

{
  _lws_log(1,"internal signal handler caught signal %d\n",param_2);
                    /* try { // try from 00ab4c60 to 00bb4d4b has its CatchHandler @ 00ab4c60
                       catch() { ... } // from try @ 00ab4c60 with catch @ 00ab4c60
                       catch() { ... } // from try @ 00ab4d68 with catch @ 00ab4c60 */
  lws_libuv_stop(*param_1);
  return;
}

