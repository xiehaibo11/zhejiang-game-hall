
undefined8 FUN_00a1116c(long param_1,long *param_2)

{
  if (*param_2 != param_1) {
    return 0;
  }
  *(undefined1 *)(param_2 + 1) = 1;
  return 1;
}

