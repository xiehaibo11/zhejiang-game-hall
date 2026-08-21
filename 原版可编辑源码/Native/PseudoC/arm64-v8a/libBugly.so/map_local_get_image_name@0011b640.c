
char * map_local_get_image_name(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  
  pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_00176428);
  lVar2 = FUN_0011bbe4(DAT_00175e60,param_1);
  if (lVar2 == 0) {
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00176428);
    iVar1 = FUN_0011aff0(param_1,0);
    if (iVar1 < 0) {
      return (char *)0x0;
    }
    pcVar3 = (char *)0x0;
    pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_00176428);
    lVar2 = FUN_0011bbe4(DAT_00175e60,param_1);
    if (lVar2 == 0) goto LAB_0011b688;
  }
  pcVar3 = strdup(*(char **)(lVar2 + 0x28));
LAB_0011b688:
  pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00176428);
  return pcVar3;
}

