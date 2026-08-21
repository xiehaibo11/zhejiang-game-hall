
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ERR_load_SSL_strings(void)

{
  char *pcVar1;
  
  pcVar1 = ERR_func_error_string(DAT_0176c5a0);
  if (pcVar1 == (char *)0x0) {
    ERR_load_strings(0,(ERR_STRING_DATA *)&DAT_0176c5a0);
    ERR_load_strings(0,(ERR_STRING_DATA *)&DAT_0176d300);
  }
  return;
}

