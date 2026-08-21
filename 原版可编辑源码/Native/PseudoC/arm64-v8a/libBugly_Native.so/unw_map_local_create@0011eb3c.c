
undefined4 unw_map_local_create(void)

{
  __pid_t _Var1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_0011dfbc();
  pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_001774d8);
  if (DAT_00176ed0 == 0) {
    _Var1 = getpid();
    iVar3 = 1;
    DAT_00176ec8 = FUN_00122428(1,_Var1);
    if (DAT_00176ec8 == 0) {
      uVar2 = 0xffffffff;
      goto LAB_0011eb98;
    }
  }
  else {
    iVar3 = DAT_00176ed0 + 1;
  }
  uVar2 = 0;
  DAT_00176ed0 = iVar3;
LAB_0011eb98:
  pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_001774d8);
  return uVar2;
}

