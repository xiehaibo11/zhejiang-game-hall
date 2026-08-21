
undefined8 removeNativeKeyValue(char *param_1,char *param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *__ptr;
  char *__s1;
  undefined8 uVar3;
  undefined8 *puVar4;
  int *piVar5;
  
  if ((param_1 == (char *)0x0) || (DAT_0013edc8 == (int *)0x0)) {
    return 0;
  }
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0013edd0);
  piVar5 = DAT_0013edc8;
  if (*(undefined8 **)(DAT_0013edc8 + 2) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(DAT_0013edc8 + 2);
    puVar4 = (undefined8 *)0x0;
    do {
      __ptr = puVar1;
      __s1 = (char *)*__ptr;
      iVar2 = strcmp(__s1,param_1);
      if (iVar2 == 0) {
        if ((param_2 != (char *)0x0) && (0 < param_3)) {
          snprintf(param_2,(long)param_3,"%s",__ptr[1]);
          __s1 = (char *)*__ptr;
          piVar5 = DAT_0013edc8;
        }
        if (puVar4 == (undefined8 *)0x0) {
          *(undefined8 *)(piVar5 + 2) = __ptr[2];
        }
        else {
          puVar4[2] = __ptr[2];
        }
        uVar3 = 1;
        *piVar5 = *piVar5 + -1;
        free(__s1);
        free((void *)__ptr[1]);
        free(__ptr);
        goto LAB_0010cf30;
      }
      puVar1 = (undefined8 *)__ptr[2];
      puVar4 = __ptr;
    } while ((undefined8 *)__ptr[2] != (undefined8 *)0x0);
  }
  uVar3 = 0;
LAB_0010cf30:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0013edd0);
  return uVar3;
}

