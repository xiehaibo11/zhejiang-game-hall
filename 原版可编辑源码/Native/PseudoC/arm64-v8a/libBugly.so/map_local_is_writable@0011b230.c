
uint map_local_is_writable(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  
  pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_00176428);
  lVar3 = FUN_0011bbe4(DAT_00175e60,param_1);
  if (lVar3 == 0) {
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00176428);
  }
  else {
    if ((*(uint *)(lVar3 + 0x20) >> 0xf & 1) != 0) {
      pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00176428);
      return 0;
    }
    uVar1 = *(uint *)(lVar3 + 0x20) & 2;
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00176428);
    if (uVar1 != 0) {
      return uVar1;
    }
  }
  iVar2 = FUN_0011aff0(param_1,2);
  return (uint)(iVar2 == 0);
}

