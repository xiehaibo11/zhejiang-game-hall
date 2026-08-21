
int unw_map_local_cursor_get(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  FUN_0011b170();
  pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_00176428);
  uVar1 = DAT_00175e60;
  *param_1 = DAT_00175e60;
  param_1[1] = uVar1;
  iVar2 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00176428);
  return iVar2;
}

