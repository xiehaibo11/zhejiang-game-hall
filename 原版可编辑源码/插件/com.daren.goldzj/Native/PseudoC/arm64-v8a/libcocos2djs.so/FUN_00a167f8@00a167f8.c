
undefined8 FUN_00a167f8(char *param_1,undefined4 param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long local_48;
  long lStack_40;
  undefined4 local_38 [2];
  
  iVar1 = inet_pton(2,param_1,local_38);
  if (iVar1 < 1) {
    iVar1 = inet_pton(10,param_1,&local_48);
                    /* try { // try from 00a1689c to 00b1689f has its CatchHandler @ 00a168f8 */
                    /* try { // try from 00a168a0 to 00b16933 has its CatchHandler @ 00a167bc */
    if (iVar1 < 1) {
      return 0;
    }
    plVar2 = (long *)(*(code *)PTR_malloc_01d1b740)(0x40);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    lVar3 = (*(code *)PTR_strdup_01d1b758)(param_1);
    if (lVar3 != 0) {
      *plVar2 = lVar3;
      plVar2[1] = 0;
      plVar2[2] = 0x100000000a;
      plVar2[3] = (long)(plVar2 + 6);
                    /* catch() { ... } // from try @ 00a1689c with catch @ 00a168f8 */
      plVar2[5] = lStack_40;
      plVar2[4] = local_48;
      plVar2[6] = (long)(plVar2 + 4);
      goto LAB_00a16900;
    }
  }
  else {
    plVar2 = (long *)(*(code *)PTR_malloc_01d1b740)(0x40);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    lVar3 = (*(code *)PTR_strdup_01d1b758)(param_1);
    if (lVar3 != 0) {
      *(undefined4 *)(plVar2 + 4) = local_38[0];
      *plVar2 = lVar3;
      plVar2[1] = 0;
      plVar2[2] = 0x400000002;
      plVar2[3] = (long)(plVar2 + 6);
      plVar2[6] = (long)(plVar2 + 4);
LAB_00a16900:
      plVar2[7] = 0;
      uVar4 = FUN_00a16524(plVar2,param_2);
      (*(code *)PTR_free_01d1b748)(lVar3);
      (*(code *)PTR_free_01d1b748)(plVar2);
      return uVar4;
    }
  }
  (*(code *)PTR_free_01d1b748)(plVar2);
  return 0;
}

