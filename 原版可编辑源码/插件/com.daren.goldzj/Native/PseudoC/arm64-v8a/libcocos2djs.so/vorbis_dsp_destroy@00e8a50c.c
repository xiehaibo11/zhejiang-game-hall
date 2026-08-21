
void vorbis_dsp_destroy(long *param_1)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  if (param_1 != (long *)0x0) {
    pvVar1 = (void *)param_1[7];
    lVar4 = *param_1;
    if (pvVar1 != (void *)0x0) {
      iVar3 = *(int *)(lVar4 + 4);
      if (0 < iVar3) {
        lVar5 = 0;
        do {
          pvVar2 = *(void **)((long)pvVar1 + lVar5 * 8);
          if (pvVar2 != (void *)0x0) {
            free(pvVar2);
            iVar3 = *(int *)(lVar4 + 4);
            pvVar1 = (void *)param_1[7];
          }
          lVar5 = lVar5 + 1;
        } while (lVar5 < iVar3);
      }
      free(pvVar1);
    }
    pvVar1 = (void *)param_1[8];
    if (pvVar1 != (void *)0x0) {
      iVar3 = *(int *)(lVar4 + 4);
      if (0 < iVar3) {
        lVar5 = 0;
        do {
          pvVar2 = *(void **)((long)pvVar1 + lVar5 * 8);
          if (pvVar2 != (void *)0x0) {
            free(pvVar2);
            iVar3 = *(int *)(lVar4 + 4);
            pvVar1 = (void *)param_1[8];
          }
          lVar5 = lVar5 + 1;
        } while (lVar5 < iVar3);
      }
      free(pvVar1);
    }
    free(param_1);
    return;
  }
  return;
}

