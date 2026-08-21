
undefined8 unw_map_local_create(void)

{
  __pid_t _Var1;
  undefined8 uVar2;
  
  FUN_0011b170();
  pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_00176428);
  if (DAT_00175e68 == 0) {
    _Var1 = getpid();
    DAT_00175e60 = FUN_0011f970(1,_Var1);
    if (DAT_00175e60 != 0) {
      DAT_00175e68 = 1;
      pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00176428);
      return 0;
    }
    uVar2 = 0xffffffff;
    DAT_00175e60 = 0;
  }
  else {
    DAT_00175e68 = DAT_00175e68 + 1;
    uVar2 = 0;
  }
  pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00176428);
  return uVar2;
}

