
char * gzerror(long param_1,undefined4 *param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)0x0;
  if (param_1 != 0) {
    if ((*(int *)(param_1 + 0x18) != 0x79b1) && (*(int *)(param_1 + 0x18) != 0x1c4f)) {
      return (char *)0x0;
    }
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)(param_1 + 0x6c);
    }
    if (*(int *)(param_1 + 0x6c) == -4) {
      return "out of memory";
    }
    pcVar1 = "";
    if (*(char **)(param_1 + 0x70) != (char *)0x0) {
      pcVar1 = *(char **)(param_1 + 0x70);
    }
  }
  return pcVar1;
}

