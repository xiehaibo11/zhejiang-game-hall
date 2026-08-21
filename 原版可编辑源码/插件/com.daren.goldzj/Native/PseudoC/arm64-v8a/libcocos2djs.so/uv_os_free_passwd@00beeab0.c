
void uv_os_free_passwd(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    uv__free(*param_1);
    *param_1 = 0;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  return;
}

