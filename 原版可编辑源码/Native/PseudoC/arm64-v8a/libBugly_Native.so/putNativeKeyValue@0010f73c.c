
char * putNativeKeyValue(char *param_1,char *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined8 *puVar3;
  char *pcVar4;
  
  if ((param_1 != (char *)0x0) && (param_2 != (char *)0x0)) {
    if (DAT_0013fe20 == (int *)0x0) {
      log2Console(4,"eup","Initiate native key-value list.");
      pthread_mutex_lock((pthread_mutex_t *)&DAT_0013fe28);
      if (DAT_0013fe20 == (int *)0x0) {
        DAT_0013fe20 = calloc(1,0x10);
      }
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0013fe28);
      log2Console(4,"eup","Initialization of native key-value list have been completed.");
    }
    removeNativeKeyValue(param_1,0,0);
    puVar3 = malloc(0x18);
    pcVar4 = strdup(param_1);
    *puVar3 = pcVar4;
    pcVar4 = strdup(param_2);
    puVar3[1] = pcVar4;
    pthread_mutex_lock((pthread_mutex_t *)&DAT_0013fe28);
    piVar1 = DAT_0013fe20;
    puVar3[2] = *(undefined8 *)(DAT_0013fe20 + 2);
    *(undefined8 **)(piVar1 + 2) = puVar3;
    *piVar1 = *piVar1 + 1;
    uVar2 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_0013fe28);
    return (char *)(ulong)uVar2;
  }
  return param_1;
}

