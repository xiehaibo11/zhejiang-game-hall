
undefined8 uv__async_fork(long param_1)

{
  undefined8 uVar1;
  
  if ((*(int *)(param_1 + 0x1f8) != -1) && (uv__async_stop(), *(int *)(param_1 + 0x1f8) == -1)) {
    uVar1 = FUN_00bfb6d8(param_1);
    return uVar1;
  }
  return 0;
}

