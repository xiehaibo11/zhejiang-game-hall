
undefined8 ERR_load_KDF_strings(void)

{
  char *pcVar1;
  
  pcVar1 = ERR_func_error_string(DAT_01d21950);
  if (pcVar1 == (char *)0x0) {
    ERR_load_strings(0,(ERR_STRING_DATA *)&DAT_01d21950);
    ERR_load_strings(0,(ERR_STRING_DATA *)&DAT_01d21980);
  }
  return 1;
}

