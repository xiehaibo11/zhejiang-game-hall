
char * putNativeKeyValue(char *param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  
  if ((param_1 != (char *)0x0) && (param_2 != (char *)0x0)) {
    if (DAT_0013edc8 == (int *)0x0) {
      log2Console(4,"CrashReport-Native","Initiate native key-value list.");
      pthread_mutex_lock((pthread_mutex_t *)&DAT_0013edd0);
      if (DAT_0013edc8 == (int *)0x0) {
        DAT_0013edc8 = calloc(1,0x10);
      }
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0013edd0);
      log2Console(4,"CrashReport-Native",
                  "Initialization of native key-value list have been completed.");
    }
    removeNativeKeyValue(param_1,0,0);
    puVar4 = malloc(0x18);
    pcVar5 = strdup(param_1);
    *puVar4 = pcVar5;
    pcVar5 = strdup(param_2);
    puVar4[1] = pcVar5;
    pthread_mutex_lock((pthread_mutex_t *)&DAT_0013edd0);
    piVar2 = DAT_0013edc8;
    iVar1 = *DAT_0013edc8;
    puVar4[2] = *(undefined8 *)(DAT_0013edc8 + 2);
    *(undefined8 **)(piVar2 + 2) = puVar4;
    *piVar2 = iVar1 + 1;
    uVar3 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_0013edd0);
    return (char *)(ulong)uVar3;
  }
  return param_1;
}

