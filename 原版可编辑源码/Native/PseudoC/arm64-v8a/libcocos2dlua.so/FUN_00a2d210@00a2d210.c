
undefined8 FUN_00a2d210(long param_1,long param_2)

{
  long *plVar1;
  
  if (*(char *)(param_2 + 0x3d5) != '\0') {
    return 1;
  }
  if (*(char *)(param_2 + 0x471) != '\0') {
    return 0;
  }
  if (*(long **)(param_2 + 0x478) == (long *)0x0) {
    return 0;
  }
  plVar1 = (long *)**(long **)(param_2 + 0x478);
  if (plVar1 != (long *)0x0) {
    if (*plVar1 != param_1) {
      return 0;
    }
    *(undefined1 *)(param_2 + 0x471) = 1;
    return 1;
  }
  return 0;
}

