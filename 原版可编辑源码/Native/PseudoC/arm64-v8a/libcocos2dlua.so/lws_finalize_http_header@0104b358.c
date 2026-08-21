
undefined8 lws_finalize_http_header(undefined8 param_1,undefined8 *param_2,long param_3)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_2;
  if (param_3 - (long)puVar1 < 3) {
    return 1;
  }
  *param_2 = puVar1 + 1;
  *puVar1 = 0xd;
  puVar1 = (undefined1 *)*param_2;
  *param_2 = puVar1 + 1;
  *puVar1 = 10;
  return 0;
}

