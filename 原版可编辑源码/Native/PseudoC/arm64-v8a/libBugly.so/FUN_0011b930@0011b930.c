
undefined8 * FUN_0011b930(pthread_mutex_t *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  
  pthread_mutex_lock(param_1);
  uVar1 = *(uint *)((long)param_1 + 0x3c);
  if (uVar1 <= *(uint *)((long)param_1 + 0x38)) {
    FUN_0011b71c(param_1);
    uVar1 = *(uint *)((long)param_1 + 0x3c);
  }
  puVar2 = *(undefined8 **)((long)param_1 + 0x40);
  *(uint *)((long)param_1 + 0x3c) = uVar1 - 1;
  *(undefined8 *)((long)param_1 + 0x40) = *puVar2;
  pthread_mutex_unlock(param_1);
  return puVar2;
}

