
void lws_set_log_level(undefined4 param_1,undefined *param_2)

{
  DAT_01d1b790 = param_1;
  if (param_2 != (undefined *)0x0) {
    PTR_lwsl_emit_stderr_01d1b798 = param_2;
  }
  return;
}

