
undefined4 unw_map_local_cursor_get_next(long *param_1,undefined8 *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 == (undefined8 *)0x0) {
    uVar2 = 0;
  }
  else {
    FUN_0011dfbc();
    pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_001774d8);
    if (*param_1 == DAT_00176ec8) {
      uVar4 = *puVar3;
      param_2[1] = puVar3[1];
      *param_2 = uVar4;
      uVar4 = puVar3[2];
      param_2[3] = puVar3[3];
      param_2[2] = uVar4;
      *(undefined4 *)(param_2 + 5) = *(undefined4 *)(puVar3 + 4);
      pcVar1 = (char *)0x0;
      if ((char *)puVar3[5] != (char *)0x0) {
        pcVar1 = strdup((char *)puVar3[5]);
      }
      param_2[4] = pcVar1;
      param_1[1] = puVar3[0xf];
      uVar2 = 1;
    }
    else {
      *param_1 = DAT_00176ec8;
      uVar2 = 0xfffffff8;
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_001774d8);
  }
  return uVar2;
}

