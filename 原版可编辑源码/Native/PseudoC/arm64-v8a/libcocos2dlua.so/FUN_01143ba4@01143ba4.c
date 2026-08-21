
char * FUN_01143ba4(long param_1)

{
  char *pcVar1;
  
  if (param_1 != 0) {
    pcVar1 = "OK";
    if (*(char **)(param_1 + 8) != (char *)0x0) {
      pcVar1 = *(char **)(param_1 + 8);
    }
    return pcVar1;
  }
  return "no object";
}

