
undefined8 getNativeKeyValueList(char *param_1,int param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  
  if (DAT_0013fe20 == 0) {
    uVar3 = 0;
  }
  else {
    if (0x1000 < param_2) {
      log2Console(5,"eup","Buffer length exceeds max length. Buffer will only contain %d bytes.",
                  0x1000);
    }
    pthread_mutex_lock((pthread_mutex_t *)&DAT_0013fe28);
    puVar5 = *(undefined8 **)(DAT_0013fe20 + 8);
    if (puVar5 != (undefined8 *)0x0) {
      lVar6 = 0;
      do {
        pcVar4 = (char *)*puVar5;
        sVar1 = strlen(pcVar4);
        sVar2 = strlen((char *)puVar5[1]);
        lVar6 = sVar1 + (long)(int)lVar6 + sVar2 + 1;
        if (0xfff < (int)lVar6) {
          log2Console(5,"eup","Native key value exceeds max length. The rest will be dropped.");
          break;
        }
        pcVar4 = strcat(param_1,pcVar4);
        sVar1 = strlen(pcVar4);
        (param_1 + sVar1)[0] = '=';
        (param_1 + sVar1)[1] = '\0';
        pcVar4 = strcat(param_1,(char *)puVar5[1]);
        sVar1 = strlen(pcVar4);
        (param_1 + sVar1)[0] = '\n';
        (param_1 + sVar1)[1] = '\0';
        puVar5 = (undefined8 *)puVar5[2];
      } while (puVar5 != (undefined8 *)0x0);
    }
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0013fe28);
    uVar3 = 1;
  }
  return uVar3;
}

