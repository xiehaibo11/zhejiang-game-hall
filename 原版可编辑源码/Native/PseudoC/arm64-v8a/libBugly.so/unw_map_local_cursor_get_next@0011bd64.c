
undefined8 unw_map_local_cursor_get_next(long *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  puVar5 = (undefined8 *)param_1[1];
  if (puVar5 != (undefined8 *)0x0) {
    FUN_0011b170();
    pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_00176428);
    if (*param_1 == DAT_00175e60) {
      uVar4 = puVar5[1];
      uVar3 = puVar5[2];
      uVar6 = puVar5[3];
      uVar1 = *(undefined4 *)(puVar5 + 4);
      pcVar2 = (char *)puVar5[5];
      *param_2 = *puVar5;
      param_2[1] = uVar4;
      param_2[2] = uVar3;
      param_2[3] = uVar6;
      *(undefined4 *)(param_2 + 5) = uVar1;
      if (pcVar2 == (char *)0x0) {
        param_2[4] = 0;
      }
      else {
        pcVar2 = strdup(pcVar2);
        param_2[4] = pcVar2;
      }
      uVar6 = 1;
      param_1[1] = puVar5[0xf];
    }
    else {
      *param_1 = DAT_00175e60;
      uVar6 = 0xfffffff8;
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00176428);
    return uVar6;
  }
  return 0;
}

