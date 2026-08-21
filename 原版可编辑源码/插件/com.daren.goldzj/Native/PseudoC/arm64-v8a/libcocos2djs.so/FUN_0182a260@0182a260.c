
undefined8 * FUN_0182a260(undefined8 *param_1)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 1) != '\0') {
    uVar1 = pthread_mutex_unlock((pthread_mutex_t *)*param_1);
    param_1 = (undefined8 *)(ulong)uVar1;
  }
  return param_1;
}

