
undefined8 FUN_00d1e11c(long *param_1,long *param_2,long *param_3)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  char *pcVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  void *__s1;
  char *__s2;
  
  do {
    if (param_1 == param_2) {
      return 1;
    }
    bVar2 = *(byte *)(param_1 + 4);
    bVar3 = *(byte *)(param_3 + 4);
    __n = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      __n = param_1[5];
    }
    sVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      sVar1 = param_3[5];
    }
    if (__n != sVar1) {
      return 0;
    }
    __s1 = (void *)param_1[6];
    __s2 = (char *)param_3[6];
    if ((bVar2 & 1) == 0) {
      __s1 = (void *)((long)param_1 + 0x21);
    }
    if ((bVar3 & 1) == 0) {
      __s2 = (char *)((long)param_3 + 0x21);
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pcVar6 = (char *)((long)param_1 + 0x21);
        lVar9 = -(ulong)(bVar2 >> 1);
        do {
          if (*pcVar6 != *__s2) {
            return 0;
          }
          pcVar6 = pcVar6 + 1;
          lVar9 = lVar9 + 1;
          __s2 = __s2 + 1;
        } while (lVar9 != 0);
      }
    }
    else if ((__n != 0) && (iVar5 = memcmp(__s1,__s2,__n), iVar5 != 0)) {
      return 0;
    }
    if (param_1[7] != param_3[7]) {
      return 0;
    }
    plVar8 = (long *)param_1[1];
    if ((long *)param_1[1] == (long *)0x0) {
      plVar8 = param_1 + 2;
      if (*(long **)*plVar8 != param_1) {
        do {
          lVar9 = *plVar8;
          plVar8 = (long *)(lVar9 + 0x10);
          param_1 = (long *)*plVar8;
        } while (*param_1 != lVar9);
        goto LAB_00d1e224;
      }
      plVar7 = (long *)param_3[1];
      param_1 = (long *)*plVar8;
    }
    else {
      do {
        param_1 = plVar8;
        plVar8 = (long *)*param_1;
      } while ((long *)*param_1 != (long *)0x0);
LAB_00d1e224:
      plVar7 = (long *)param_3[1];
    }
    if (plVar7 == (long *)0x0) {
      plVar8 = param_3 + 2;
      bVar4 = *(long **)*plVar8 != param_3;
      param_3 = (long *)*plVar8;
      if (bVar4) {
        do {
          lVar9 = *plVar8;
          plVar8 = (long *)(lVar9 + 0x10);
          param_3 = (long *)*plVar8;
        } while (*(long *)*plVar8 != lVar9);
      }
    }
    else {
      do {
        param_3 = plVar7;
        plVar7 = (long *)*param_3;
      } while (plVar7 != (long *)0x0);
    }
  } while( true );
}

