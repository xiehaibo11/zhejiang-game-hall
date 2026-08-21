
/* WARNING: Removing unreachable block (ram,0x0012dee4) */

int FUN_0012de5c(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  param_2[4] = 0;
  param_2[3] = param_1;
  *(undefined1 *)(param_2 + 4) = 2;
  param_2[1] = param_3;
  *param_2 = 0xffffffffffffffff;
  param_2[2] = param_4;
  *(ushort *)(param_2 + 4) = *(ushort *)(param_2 + 4) | 0x7f8;
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0013a508);
  param_2[5] = DAT_0013a530;
  DAT_0013a530 = param_2;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_0013a508);
  return iVar1;
}

