
undefined8 ERR_load_ASYNC_strings(void)

{
  char *pcVar1;
  
  pcVar1 = ERR_func_error_string(DAT_01773830);
  if (pcVar1 == (char *)0x0) {
    ERR_load_strings(0,(ERR_STRING_DATA *)&DAT_01773830);
    ERR_load_strings(0,(ERR_STRING_DATA *)&DAT_017737e0);
  }
  return 1;
}

