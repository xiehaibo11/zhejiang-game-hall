
int unw_map_local_destroy(void)

{
  int iVar1;
  
  FUN_0011b170();
  pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_00176428);
  if (DAT_00175e60 != 0) {
    DAT_00175e68 = DAT_00175e68 + -1;
    if (DAT_00175e68 == 0) {
      FUN_0011bb68();
      DAT_00175e60 = 0;
    }
  }
  iVar1 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00176428);
  return iVar1;
}

