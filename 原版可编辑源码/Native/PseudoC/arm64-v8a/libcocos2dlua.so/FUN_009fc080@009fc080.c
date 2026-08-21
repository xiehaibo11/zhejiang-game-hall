
void FUN_009fc080(long *param_1)

{
  ulong uVar1;
  uint uVar2;
  void *pvVar3;
  undefined8 *__ptr;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  void *pvVar8;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  lVar7 = 0;
LAB_009fc09c:
  if (lVar7 == 0) goto LAB_009fc0ac;
  do {
    uVar5 = lVar7 - param_1[3];
    while( true ) {
      uVar6 = (ulong)*(uint *)(param_1 + 2) & 0x7fffffff;
      if ((lVar7 == 0) && ((int)*(uint *)(param_1 + 2) < 0)) {
        lVar7 = param_1[3];
        lVar4 = *(long *)(lVar7 + 0x10);
      }
      else {
        pvVar3 = (void *)param_1[3];
        do {
          uVar1 = uVar5 + uVar6;
          if (*param_1 * uVar6 <= uVar1) {
            free(pvVar3);
            uVar2 = *(uint *)(param_1 + 2);
            param_1[1] = 0;
            *param_1 = 0;
            param_1[3] = 0;
            param_1[2] = 0;
            *(uint *)(param_1 + 2) = uVar2 & 0x7fffffff;
            pvVar3 = (void *)param_1[7];
            while (pvVar3 != (void *)0x0) {
              pvVar8 = *(void **)((long)pvVar3 + 0xff8);
              free(pvVar3);
              pvVar3 = pvVar8;
            }
            lVar7 = param_1[9];
            param_1[7] = 0;
            param_1[8] = 0;
            param_1[9] = 0;
            param_1[9] = lVar7;
            pvVar3 = (void *)param_1[10];
            while (pvVar3 != (void *)0x0) {
              pvVar8 = *(void **)((long)pvVar3 + 0xff8);
              free(pvVar3);
              pvVar3 = pvVar8;
            }
            lVar7 = param_1[0xc];
            param_1[10] = 0;
            param_1[0xb] = 0;
            param_1[0xc] = 0;
            uVar5 = param_1[4];
            param_1[0xc] = lVar7;
            if (uVar5 != 0) {
              uVar6 = 0;
              do {
                __ptr = *(undefined8 **)(param_1[6] + uVar6 * 8);
                if (__ptr != (void *)0x0) {
                  do {
                    pvVar3 = (void *)*__ptr;
                    free(__ptr);
                    __ptr = pvVar3;
                  } while (pvVar3 != (void *)0x0);
                  uVar5 = param_1[4];
                }
                uVar6 = uVar6 + 1;
              } while (uVar6 < uVar5);
            }
            free((void *)param_1[6]);
            param_1[4] = 0;
            param_1[5] = 0;
            param_1[6] = 0;
            return;
          }
          lVar7 = uVar5 + uVar6;
          uVar5 = uVar1;
        } while (*(long *)((long)pvVar3 + lVar7 + 8) == 0);
        lVar7 = (long)pvVar3 + uVar1;
        lVar4 = *(long *)(lVar7 + 0x10);
      }
      if (lVar4 == 0) goto LAB_009fc09c;
      FUN_009fc570(param_1);
      if (lVar7 != 0) break;
LAB_009fc0ac:
      uVar5 = 0;
    }
  } while( true );
}

