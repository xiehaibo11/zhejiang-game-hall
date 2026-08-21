
undefined8 FUN_00a166cc(int param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  
  plVar1 = (long *)(*(code *)PTR_malloc_01d1b740)(0x40);
  if (plVar1 != (long *)0x0) {
                    /* try { // try from 00a16718 to 00b1671f has its CatchHandler @ 00a16780 */
    lVar2 = (*(code *)PTR_strdup_01d1b758)(param_3);
                    /* try { // try from 00a16720 to 00b167bb has its CatchHandler @ 00a16648 */
    if (lVar2 != 0) {
      if (param_1 == 10) {
        lVar5 = *param_2;
        uVar4 = 0x10;
        plVar1[5] = param_2[1];
        plVar1[4] = lVar5;
LAB_00a1676c:
        *plVar1 = lVar2;
        plVar1[1] = 0;
        *(int *)(plVar1 + 2) = (int)(short)param_1;
        *(undefined4 *)((long)plVar1 + 0x14) = uVar4;
        plVar1[6] = (long)(plVar1 + 4);
                    /* catch() { ... } // from try @ 00a16718 with catch @ 00a16780 */
        plVar1[3] = (long)(plVar1 + 6);
        plVar1[7] = 0;
        uVar3 = FUN_00a16524(plVar1,param_4);
        (*(code *)PTR_free_01d1b748)(lVar2);
        (*(code *)PTR_free_01d1b748)(plVar1);
        return uVar3;
                    /* catch() { ... } // from try @ 00a168a0 with catch @ 00a167bc */
      }
      if (param_1 == 2) {
        *(int *)(plVar1 + 4) = (int)*param_2;
        uVar4 = 4;
        goto LAB_00a1676c;
      }
      (*(code *)PTR_free_01d1b748)(lVar2);
    }
    (*(code *)PTR_free_01d1b748)(plVar1);
  }
  return 0;
}

