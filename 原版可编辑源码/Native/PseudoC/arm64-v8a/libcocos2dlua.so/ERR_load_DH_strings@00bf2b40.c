
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ERR_load_DH_strings(void)

{
  char *pcVar1;
  
  pcVar1 = ERR_func_error_string(DAT_017753a0);
  if (pcVar1 == (char *)0x0) {
    ERR_load_strings(0,(ERR_STRING_DATA *)&DAT_017753a0);
    ERR_load_strings(0,(ERR_STRING_DATA *)&DAT_017752c0);
  }
  return;
}

