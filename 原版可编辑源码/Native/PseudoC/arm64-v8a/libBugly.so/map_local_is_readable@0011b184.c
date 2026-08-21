
bool map_local_is_readable(undefined8 param_1)

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
    uVar1 = *(uint *)(lVar3 + 0x20);
    if ((uVar1 >> 0xf & 1) != 0) {
      pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00176428);
      return false;
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00176428);
    if ((uVar1 & 1) != 0) {
      return true;
    }
  }
  iVar2 = FUN_0011aff0(param_1,1);
  return iVar2 == 0;
}

