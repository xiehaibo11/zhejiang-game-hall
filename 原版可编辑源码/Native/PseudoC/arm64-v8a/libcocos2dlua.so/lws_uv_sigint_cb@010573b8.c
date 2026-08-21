
void lws_uv_sigint_cb(undefined8 *param_1,undefined4 param_2)

{
  _lws_log(1,"internal signal handler caught signal %d\n",param_2);
  lws_libuv_stop(*param_1);
  return;
}

