
undefined8 FUN_00a2c0b4(int param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  
                    /* catch() { ... } // from try @ 00a2bfe0 with catch @ 00a2c0e0 */
  plVar1 = (long *)(*(code *)PTR_malloc_017699f8)(0x40);
  if (plVar1 != (long *)0x0) {
    lVar2 = (*(code *)PTR_strdup_01769a10)(param_3);
    if (lVar2 != 0) {
      if (param_1 == 10) {
        lVar5 = *param_2;
        uVar4 = 0x10;
        plVar1[5] = param_2[1];
        plVar1[4] = lVar5;
LAB_00a2c154:
        *plVar1 = lVar2;
        plVar1[1] = 0;
        *(int *)(plVar1 + 2) = (int)(short)param_1;
        *(undefined4 *)((long)plVar1 + 0x14) = uVar4;
        plVar1[6] = (long)(plVar1 + 4);
        plVar1[3] = (long)(plVar1 + 6);
        plVar1[7] = 0;
        uVar3 = FUN_00a2bf0c(plVar1,param_4);
        (*(code *)PTR_free_01769a00)(lVar2);
        (*(code *)PTR_free_01769a00)(plVar1);
        return uVar3;
      }
      if (param_1 == 2) {
        *(int *)(plVar1 + 4) = (int)*param_2;
        uVar4 = 4;
        goto LAB_00a2c154;
      }
      (*(code *)PTR_free_01769a00)(lVar2);
    }
    (*(code *)PTR_free_01769a00)(plVar1);
  }
  return 0;
}

