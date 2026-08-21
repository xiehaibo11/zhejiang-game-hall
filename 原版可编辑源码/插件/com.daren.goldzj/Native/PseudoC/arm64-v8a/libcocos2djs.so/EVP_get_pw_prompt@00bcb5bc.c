
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * EVP_get_pw_prompt(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)0x0;
  if (DAT_01d3b3bc != '\0') {
    pcVar1 = &DAT_01d3b3bc;
  }
  return pcVar1;
}

