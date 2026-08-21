
int FUN_0011e848(pthread_mutex_t *param_1,undefined8 *param_2)

{
  int iVar1;
  
  pthread_mutex_lock(param_1);
  *param_2 = *(undefined8 *)((long)param_1 + 0x40);
  *(undefined8 **)((long)param_1 + 0x40) = param_2;
  *(int *)((long)param_1 + 0x3c) = *(int *)((long)param_1 + 0x3c) + 1;
  iVar1 = pthread_mutex_unlock(param_1);
  return iVar1;
}

