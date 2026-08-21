
undefined8 removeNativeKeyValue(char *param_1,char *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 *__ptr;
  undefined8 *puVar4;
  
  uVar3 = 0;
  if ((param_1 != (char *)0x0) && (DAT_0013fe20 != (int *)0x0)) {
    pthread_mutex_lock((pthread_mutex_t *)&DAT_0013fe28);
    __ptr = *(undefined8 **)(DAT_0013fe20 + 2);
    uVar3 = 0;
    if (__ptr != (undefined8 *)0x0) {
      iVar1 = strcmp((char *)*__ptr,param_1);
      if (iVar1 == 0) {
        puVar4 = (undefined8 *)0x0;
      }
      else {
        do {
          puVar4 = __ptr;
          __ptr = (undefined8 *)puVar4[2];
          uVar3 = 0;
          if (__ptr == (undefined8 *)0x0) goto LAB_0010f940;
          iVar1 = strcmp((char *)*__ptr,param_1);
        } while (iVar1 != 0);
      }
      if ((param_2 != (char *)0x0) && (0 < param_3)) {
        snprintf(param_2,(long)param_3,"%s",__ptr[1]);
      }
      piVar2 = DAT_0013fe20;
      if (puVar4 == (undefined8 *)0x0) {
        *(undefined8 *)(DAT_0013fe20 + 2) = __ptr[2];
      }
      else {
        puVar4[2] = __ptr[2];
        piVar2 = DAT_0013fe20;
      }
      *piVar2 = *piVar2 + -1;
      free((void *)*__ptr);
      free((void *)__ptr[1]);
      free(__ptr);
      uVar3 = 1;
    }
LAB_0010f940:
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0013fe28);
  }
  return uVar3;
}

