
char * FUN_00e45194(long param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar2 = *(char **)(param_1 + 0x108);
  if (pcVar2 != (char *)0x0) {
    pcVar1 = pcVar2 + 1;
    if (*pcVar2 != '/') {
      pcVar1 = pcVar2;
    }
    return pcVar1;
  }
  return (char *)0x0;
}

