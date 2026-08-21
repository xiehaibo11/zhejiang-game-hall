
long SSL_SESSION_get0_id_context(long param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
                    /* try { // try from 00adc4c8 to 00bdc4ff has its CatchHandler @ 00adc514 */
    *param_2 = *(undefined4 *)(param_1 + 0x5c);
  }
  return param_1 + 0x60;
}

