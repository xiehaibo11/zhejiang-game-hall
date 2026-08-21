
uint FUN_0011dfe8(undefined8 param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  
  pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_001774d8);
  lVar3 = FUN_0011eab4(DAT_00176ec8,param_1);
  if (lVar3 == 0) {
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_001774d8);
  }
  else {
    if ((*(uint *)(lVar3 + 0x20) >> 0xf & 1) != 0) {
      pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_001774d8);
      return 0;
    }
    uVar1 = *(uint *)(lVar3 + 0x20) & param_2;
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_001774d8);
    if (uVar1 != 0) {
      return uVar1;
    }
  }
  iVar2 = FUN_0011e3c4(param_1,param_2);
  if (iVar2 != 0) {
    return 0;
  }
  return 1;
}

