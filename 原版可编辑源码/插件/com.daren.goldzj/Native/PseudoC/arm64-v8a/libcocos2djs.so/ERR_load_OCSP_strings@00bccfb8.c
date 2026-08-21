
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ERR_load_OCSP_strings(void)

{
  char *pcVar1;
  
  pcVar1 = ERR_func_error_string(DAT_01d21a70);
  if (pcVar1 == (char *)0x0) {
    ERR_load_strings(0,(ERR_STRING_DATA *)&DAT_01d21a70);
    ERR_load_strings(0,(ERR_STRING_DATA *)&DAT_01d21b70);
  }
  return;
}

