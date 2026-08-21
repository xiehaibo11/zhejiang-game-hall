
void lws_set_log_level(undefined4 param_1,undefined *param_2)

{
  DAT_0177ece8 = param_1;
  if (param_2 != (undefined *)0x0) {
                    /* catch() { ... } // from try @ 01043660 with catch @ 0104371c */
    PTR_lwsl_emit_stderr_0177ecf0 = param_2;
  }
  return;
}

