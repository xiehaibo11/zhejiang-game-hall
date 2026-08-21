
undefined8 ERR_load_CT_strings(void)

{
  char *pcVar1;
  
  pcVar1 = ERR_func_error_string(DAT_01d26eb0);
  if (pcVar1 == (char *)0x0) {
    ERR_load_strings(0,(ERR_STRING_DATA *)&DAT_01d26eb0);
    ERR_load_strings(0,(ERR_STRING_DATA *)&DAT_01d26da0);
  }
  return 1;
}

