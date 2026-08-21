
undefined8 ASYNC_WAIT_CTX_clear_fd(undefined8 *param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  if (plVar1 == (long *)0x0) {
    return 0;
  }
  while ((*(int *)((long)plVar1 + 0x24) != 0 || (*plVar1 != param_2))) {
    plVar1 = (long *)plVar1[5];
    if (plVar1 == (long *)0x0) {
      return 0;
    }
  }
  *(undefined4 *)((long)plVar1 + 0x24) = 1;
  param_1[2] = param_1[2] + 1;
  return 1;
}

