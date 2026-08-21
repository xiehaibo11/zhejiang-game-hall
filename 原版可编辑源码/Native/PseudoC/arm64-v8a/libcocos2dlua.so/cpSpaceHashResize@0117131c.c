
void cpSpaceHashResize(undefined4 param_1,undefined8 *param_2,undefined4 param_3)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  if ((undefined **)*param_2 == &PTR_FUN_01781768) {
    iVar2 = *(int *)(param_2 + 4);
    if (0 < iVar2) {
      lVar6 = 0;
      do {
        lVar5 = param_2[5];
        plVar7 = *(long **)(lVar5 + lVar6 * 8);
        if (plVar7 != (long *)0x0) {
          do {
            plVar1 = (long *)plVar7[1];
            uVar3 = param_2[8];
            iVar2 = *(int *)(*plVar7 + 8) + -1;
            *(int *)(*plVar7 + 8) = iVar2;
            if (iVar2 == 0) {
              cpArrayPush(uVar3);
            }
            plVar7[1] = param_2[7];
            param_2[7] = plVar7;
            plVar7 = plVar1;
          } while (plVar1 != (long *)0x0);
          lVar5 = param_2[5];
          iVar2 = *(int *)(param_2 + 4);
        }
        *(undefined8 *)(lVar5 + lVar6 * 8) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar2);
    }
    *(undefined4 *)((long)param_2 + 0x24) = param_1;
    iVar2 = FUN_01170ff4(param_3);
    free((void *)param_2[5]);
    *(int *)(param_2 + 4) = iVar2;
    pvVar4 = calloc((long)iVar2,8);
    param_2[5] = pvVar4;
  }
  return;
}

