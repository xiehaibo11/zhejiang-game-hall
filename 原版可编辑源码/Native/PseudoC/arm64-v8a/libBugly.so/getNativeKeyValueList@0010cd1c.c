
undefined8 getNativeKeyValueList(char *param_1,int param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  int iVar4;
  char *pcVar5;
  
  if (DAT_0013edc8 == 0) {
    return 0;
  }
  if (0x1000 < param_2) {
    log2Console(5,"CrashReport-Native",
                "Buffer length exceeds max length. Buffer will only contain %d bytes.",0x1000);
  }
  iVar4 = 0;
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0013edd0);
  puVar3 = *(undefined8 **)(DAT_0013edc8 + 8);
  if (puVar3 != (undefined8 *)0x0) {
    do {
      pcVar5 = (char *)*puVar3;
      sVar1 = strlen(pcVar5);
      sVar2 = strlen((char *)puVar3[1]);
      iVar4 = iVar4 + 1 + (int)sVar1 + (int)sVar2;
      if (0xfff < iVar4) {
        log2Console(5,"CrashReport-Native",
                    "Native key value exceeds max length. The rest will be dropped.");
        break;
      }
      sVar1 = strlen(param_1);
      pcVar5 = stpcpy(param_1 + sVar1,pcVar5);
      pcVar5[0] = '=';
      pcVar5[1] = '\0';
      pcVar5 = stpcpy(param_1 + (long)(pcVar5 + (1 - (long)param_1)),(char *)puVar3[1]);
      pcVar5[0] = '\n';
      pcVar5[1] = '\0';
      puVar3 = (undefined8 *)puVar3[2];
    } while (puVar3 != (undefined8 *)0x0);
  }
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0013edd0);
  return 1;
}

