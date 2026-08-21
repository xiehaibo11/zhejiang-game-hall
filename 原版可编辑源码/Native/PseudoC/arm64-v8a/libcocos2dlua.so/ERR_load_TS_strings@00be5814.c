
undefined8 ERR_load_TS_strings(void)

{
  char *pcVar1;
  
  pcVar1 = ERR_func_error_string(DAT_017715d0);
  if (pcVar1 == (char *)0x0) {
    ERR_load_strings(0,(ERR_STRING_DATA *)&DAT_017715d0);
    ERR_load_strings(0,(ERR_STRING_DATA *)&DAT_01771360);
  }
  return 1;
}

