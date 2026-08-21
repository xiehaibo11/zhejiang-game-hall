
int unw_map_local_destroy(void)

{
  int iVar1;
  
  FUN_0011dfbc();
  pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_001774d8);
  if ((DAT_00176ec8 != 0) && (DAT_00176ed0 = DAT_00176ed0 + -1, DAT_00176ed0 == 0)) {
    FUN_0011e968();
    DAT_00176ec8 = 0;
  }
  iVar1 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_001774d8);
  return iVar1;
}

