
void png_set_sPLT(long param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  char *pcVar2;
  size_t sVar3;
  void *pvVar4;
  undefined8 *puVar5;
  int *piVar6;
  
  if ((((param_3 != 0) && (param_1 != 0)) && (param_2 != 0)) && (0 < param_4)) {
    lVar1 = png_realloc_array(param_1,*(undefined8 *)(param_2 + 0x130),
                              *(undefined4 *)(param_2 + 0x138),param_4,0x20);
    if (lVar1 == 0) {
      pcVar2 = "too many sPLT chunks";
LAB_00d78660:
      png_chunk_report(param_1,pcVar2,1);
      return;
    }
    png_free(param_1,*(undefined8 *)(param_2 + 0x130));
    piVar6 = (int *)(param_3 + 0x18);
    puVar5 = (undefined8 *)(lVar1 + (long)*(int *)(param_2 + 0x138) * 0x20);
    *(long *)(param_2 + 0x130) = lVar1;
    *(uint *)(param_2 + 0x11c) = *(uint *)(param_2 + 0x11c) | 0x20;
    do {
      pcVar2 = *(char **)(piVar6 + -6);
      if ((pcVar2 != (char *)0x0) && (*(long *)(piVar6 + -2) != 0)) {
        *(char *)(puVar5 + 1) = (char)piVar6[-4];
        sVar3 = strlen(pcVar2);
        pvVar4 = (void *)png_malloc_base(param_1,sVar3 + 1);
        *puVar5 = pvVar4;
        if (pvVar4 != (void *)0x0) {
          memcpy(pvVar4,*(void **)(piVar6 + -6),sVar3 + 1);
          pvVar4 = (void *)png_malloc_array(param_1,*piVar6,10);
          puVar5[2] = pvVar4;
          if (pvVar4 != (void *)0x0) {
            *(int *)(puVar5 + 3) = *piVar6;
            memcpy(pvVar4,*(void **)(piVar6 + -2),(long)*piVar6 * 10);
            puVar5 = puVar5 + 4;
            *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x2000;
            *(int *)(param_2 + 0x138) = *(int *)(param_2 + 0x138) + 1;
            goto LAB_00d78624;
          }
          png_free(param_1,*puVar5);
          *puVar5 = 0;
        }
        if (param_4 < 1) {
          return;
        }
        pcVar2 = "sPLT out of memory";
        goto LAB_00d78660;
      }
      png_app_error(param_1,"png_set_sPLT: invalid sPLT");
LAB_00d78624:
      param_4 = param_4 + -1;
      piVar6 = piVar6 + 8;
    } while (param_4 != 0);
  }
  return;
}

