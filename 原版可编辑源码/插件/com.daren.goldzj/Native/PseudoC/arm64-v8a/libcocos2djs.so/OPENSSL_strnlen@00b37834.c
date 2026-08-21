
long OPENSSL_strnlen(char *param_1,long param_2)

{
  char *pcVar1;
  
  for (pcVar1 = param_1; (param_2 != 0 && (*pcVar1 != '\0')); pcVar1 = pcVar1 + 1) {
    param_2 = param_2 + -1;
  }
  return (long)pcVar1 - (long)param_1;
}

