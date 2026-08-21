
undefined8 ERR_load_CT_strings(void)

{
  char *pcVar1;
  
  pcVar1 = ERR_func_error_string(DAT_01775100);
  if (pcVar1 == (char *)0x0) {
    ERR_load_strings(0,(ERR_STRING_DATA *)&DAT_01775100);
    ERR_load_strings(0,(ERR_STRING_DATA *)&DAT_01774ff0);
  }
  return 1;
}

