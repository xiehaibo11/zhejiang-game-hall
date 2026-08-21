
undefined8 lws_uv_sigint_cfg(long param_1,undefined4 param_2,code *param_3)

{
  code *pcVar1;
  
  *(undefined4 *)(param_1 + 0xc5c) = param_2;
  pcVar1 = lws_uv_sigint_cb;
  if (param_3 != (code *)0x0) {
    pcVar1 = param_3;
  }
                    /* try { // try from 00ab4d68 to 00bb4e17 has its CatchHandler @ 00ab4c60 */
  *(code **)(param_1 + 0x880) = pcVar1;
  return 0;
}

