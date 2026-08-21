
long SSL_SESSION_get0_id_context(long param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x5c);
  }
  return param_1 + 0x60;
}

