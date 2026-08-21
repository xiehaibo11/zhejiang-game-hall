
undefined8 ogg_stream_clear(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  
  if (param_1 != (undefined8 *)0x0) {
    plVar7 = (long *)param_1[1];
    while (plVar4 = plVar7, plVar4 != (long *)0x0) {
      lVar2 = *plVar4;
      plVar7 = (long *)plVar4[3];
      plVar3 = *(long **)(lVar2 + 0x18);
      iVar1 = *(int *)(lVar2 + 0x10) + -1;
      *(int *)(lVar2 + 0x10) = iVar1;
      if (iVar1 == 0) {
        *(int *)(plVar3 + 2) = (int)plVar3[2] + -1;
        *(long *)(lVar2 + 0x18) = *plVar3;
        *plVar3 = lVar2;
      }
      *(int *)(plVar3 + 2) = (int)plVar3[2] + -1;
      plVar4[3] = plVar3[1];
      plVar3[1] = (long)plVar4;
      if (*(int *)((long)plVar3 + 0x14) != 0) {
        puVar5 = (undefined8 *)*plVar3;
        if ((undefined8 *)*plVar3 != (undefined8 *)0x0) {
          do {
            puVar8 = (undefined8 *)puVar5[3];
            if ((void *)*puVar5 != (void *)0x0) {
              free((void *)*puVar5);
            }
            free(puVar5);
            puVar5 = puVar8;
          } while (puVar8 != (undefined8 *)0x0);
          *plVar3 = 0;
          goto joined_r0x00eb896c;
        }
        *plVar3 = 0;
        do {
          plVar6 = (long *)plVar4[3];
          free(plVar4);
          plVar4 = plVar6;
joined_r0x00eb896c:
        } while (plVar4 != (long *)0x0);
        plVar3[1] = 0;
        if ((int)plVar3[2] == 0) {
          free(plVar3);
        }
      }
    }
    plVar7 = (long *)param_1[3];
    while (plVar4 = plVar7, plVar4 != (long *)0x0) {
      lVar2 = *plVar4;
      plVar7 = (long *)plVar4[3];
      plVar3 = *(long **)(lVar2 + 0x18);
      iVar1 = *(int *)(lVar2 + 0x10) + -1;
      *(int *)(lVar2 + 0x10) = iVar1;
      if (iVar1 == 0) {
        *(int *)(plVar3 + 2) = (int)plVar3[2] + -1;
        *(long *)(lVar2 + 0x18) = *plVar3;
        *plVar3 = lVar2;
      }
      *(int *)(plVar3 + 2) = (int)plVar3[2] + -1;
      plVar4[3] = plVar3[1];
      plVar3[1] = (long)plVar4;
      if (*(int *)((long)plVar3 + 0x14) != 0) {
        puVar5 = (undefined8 *)*plVar3;
        if ((undefined8 *)*plVar3 != (undefined8 *)0x0) {
          do {
            puVar8 = (undefined8 *)puVar5[3];
            if ((void *)*puVar5 != (void *)0x0) {
              free((void *)*puVar5);
            }
            free(puVar5);
            puVar5 = puVar8;
          } while (puVar8 != (undefined8 *)0x0);
          *plVar3 = 0;
          goto joined_r0x00eb8a30;
        }
        *plVar3 = 0;
        do {
          plVar6 = (long *)plVar4[3];
          free(plVar4);
          plVar4 = plVar6;
joined_r0x00eb8a30:
        } while (plVar4 != (long *)0x0);
        plVar3[1] = 0;
        if ((int)plVar3[2] == 0) {
          free(plVar3);
        }
      }
    }
    param_1[0xc] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  return 0;
}

