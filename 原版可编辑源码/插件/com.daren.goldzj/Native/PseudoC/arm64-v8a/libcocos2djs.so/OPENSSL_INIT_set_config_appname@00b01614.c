
undefined8 OPENSSL_INIT_set_config_appname(undefined8 *param_1,char *param_2)

{
  char *pcVar1;
  
  if (param_2 == (char *)0x0) {
    pcVar1 = (char *)0x0;
  }
  else {
    pcVar1 = strdup(param_2);
    if (pcVar1 == (char *)0x0) {
      return 0;
    }
  }
  free((void *)*param_1);
  *param_1 = pcVar1;
  return 1;
}

