
char * FUN_00bfc96c(ulong *param_1,uint param_2,long *param_3)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  
  if ((int)((long)*param_1 >> 0x2f) == -9) {
    uVar2 = *param_1 & 0x7fffffffffff;
    if (*(char *)(uVar2 + 10) == '\0') {
      if (param_2 < *(byte *)(*(long *)(uVar2 + 0x20) + -0x2c)) {
        pcVar3 = *(char **)(*(long *)(uVar2 + 0x20) + -0x10);
        *param_3 = *(long *)(*(long *)(uVar2 + (ulong)param_2 * 8 + 0x28) + 0x20);
        if (pcVar3 == (char *)0x0) {
          return "";
        }
        for (; pcVar4 = pcVar3, param_2 != 0; param_2 = param_2 - 1) {
          do {
            pcVar3 = pcVar4 + 1;
            cVar1 = *pcVar4;
            pcVar4 = pcVar3;
          } while (cVar1 != '\0');
        }
        return pcVar3;
      }
    }
    else if (param_2 < *(byte *)(uVar2 + 0xb)) {
      *param_3 = uVar2 + ((ulong)param_2 + 6) * 8;
      return "";
    }
  }
  return (char *)0x0;
}

