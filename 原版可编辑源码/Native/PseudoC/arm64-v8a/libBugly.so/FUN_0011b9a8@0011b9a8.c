
/* WARNING: Removing unreachable block (ram,0x0011ba04) */

int FUN_0011b9a8(pthread_mutex_t *param_1,undefined8 *param_2)

{
  int iVar1;
  
  pthread_mutex_lock(param_1);
  iVar1 = *(int *)((long)param_1 + 0x3c);
  *param_2 = *(undefined8 *)((long)param_1 + 0x40);
  *(int *)((long)param_1 + 0x3c) = iVar1 + 1;
  *(undefined8 **)((long)param_1 + 0x40) = param_2;
  iVar1 = pthread_mutex_unlock(param_1);
  return iVar1;
}

