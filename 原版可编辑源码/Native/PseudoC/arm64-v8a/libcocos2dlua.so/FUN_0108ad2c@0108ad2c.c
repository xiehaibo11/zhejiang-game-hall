
char * FUN_0108ad2c(long param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar2 = *(char **)(param_1 + 0x108);
  if (pcVar2 != (char *)0x0) {
                    /* try { // try from 0108ad34 to 0118adab has its CatchHandler @ 0108a4c4 */
    pcVar1 = pcVar2 + 1;
    if (*pcVar2 != '/') {
      pcVar1 = pcVar2;
    }
    return pcVar1;
  }
  return (char *)0x0;
}

