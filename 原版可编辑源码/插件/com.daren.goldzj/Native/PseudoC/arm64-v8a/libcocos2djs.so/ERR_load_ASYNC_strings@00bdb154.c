
undefined8 ERR_load_ASYNC_strings(void)

{
  char *pcVar1;
  
  pcVar1 = ERR_func_error_string(DAT_01d255e0);
  if (pcVar1 == (char *)0x0) {
    ERR_load_strings(0,(ERR_STRING_DATA *)&DAT_01d255e0);
    ERR_load_strings(0,(ERR_STRING_DATA *)&DAT_01d25590);
  }
  return 1;
}

