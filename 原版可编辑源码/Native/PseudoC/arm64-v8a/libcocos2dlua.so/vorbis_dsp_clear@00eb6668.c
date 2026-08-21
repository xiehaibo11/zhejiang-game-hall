
void vorbis_dsp_clear(long *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  if (param_1 != (long *)0x0) {
    puVar1 = (undefined8 *)param_1[7];
    lVar4 = *param_1;
    if (puVar1 != (undefined8 *)0x0) {
      iVar3 = *(int *)(lVar4 + 4);
      if (0 < iVar3) {
        lVar5 = 0;
        pvVar2 = (void *)*puVar1;
        while( true ) {
          if (pvVar2 != (void *)0x0) {
            free(pvVar2);
            iVar3 = *(int *)(lVar4 + 4);
            puVar1 = (undefined8 *)param_1[7];
          }
          lVar5 = lVar5 + 1;
          if (iVar3 <= lVar5) break;
          pvVar2 = (void *)puVar1[lVar5];
        }
      }
      free(puVar1);
    }
    puVar1 = (undefined8 *)param_1[8];
    if (puVar1 != (undefined8 *)0x0) {
      iVar3 = *(int *)(lVar4 + 4);
      if (0 < iVar3) {
        lVar5 = 0;
        pvVar2 = (void *)*puVar1;
        while( true ) {
          if (pvVar2 != (void *)0x0) {
            free(pvVar2);
            iVar3 = *(int *)(lVar4 + 4);
            puVar1 = (undefined8 *)param_1[8];
          }
          lVar5 = lVar5 + 1;
          if (iVar3 <= lVar5) break;
          pvVar2 = (void *)puVar1[lVar5];
        }
      }
      free(puVar1);
      return;
    }
  }
  return;
}

