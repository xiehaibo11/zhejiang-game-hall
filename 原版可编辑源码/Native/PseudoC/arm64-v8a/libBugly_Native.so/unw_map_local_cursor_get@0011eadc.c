
int unw_map_local_cursor_get(undefined8 *param_1)

{
  int iVar1;
  
  FUN_0011dfbc();
  pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_001774d8);
  *param_1 = DAT_00176ec8;
  param_1[1] = DAT_00176ec8;
  iVar1 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_001774d8);
  return iVar1;
}

