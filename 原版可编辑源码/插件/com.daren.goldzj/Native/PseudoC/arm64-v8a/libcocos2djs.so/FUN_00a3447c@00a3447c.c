
undefined8 FUN_00a3447c(long *param_1,void *param_2,size_t param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  void *__dest;
  long *plVar5;
  long *plVar6;
  
                    /* catch() { ... } // from try @ 00a34334 with catch @ 00a34484 */
                    /* catch() { ... } // from try @ 00a34308 with catch @ 00a34488 */
  lVar3 = *param_1;
  lVar2 = (*(code *)param_1[1])(param_2,param_3,(long)(int)param_1[4]);
  plVar5 = *(long **)(lVar3 + lVar2 * 8);
  plVar6 = (long *)*plVar5;
  do {
    if (plVar6 == (long *)0x0) {
LAB_00a34508:
      puVar4 = (undefined8 *)(*(code *)PTR_malloc_01d1b740)(0x18);
                    /* try { // try from 00a3451c to 00b34533 has its CatchHandler @ 00a34564 */
      if (puVar4 != (undefined8 *)0x0) {
        __dest = (void *)(*(code *)PTR_malloc_01d1b740)(param_3);
                    /* try { // try from 00a34534 to 00b34577 has its CatchHandler @ 00a344d8 */
        if (__dest != (void *)0x0) {
          memcpy(__dest,param_2,param_3);
          *puVar4 = param_4;
          puVar4[1] = __dest;
          puVar4[2] = param_3;
          iVar1 = FUN_00a33fc4(plVar5,plVar5[1],puVar4);
          if (iVar1 != 0) {
                    /* catch() { ... } // from try @ 00a3451c with catch @ 00a34564 */
            param_1[5] = param_1[5] + 1;
            return param_4;
          }
          (*(code *)PTR_free_01d1b748)(puVar4[1]);
        }
        (*(code *)PTR_free_01d1b748)(puVar4);
      }
      return 0;
    }
                    /* try { // try from 00a344d8 to 00b3451b has its CatchHandler @ 00a344d8
                       catch() { ... } // from try @ 00a344d8 with catch @ 00a344d8
                       catch() { ... } // from try @ 00a34534 with catch @ 00a344d8 */
    lVar3 = (*(code *)param_1[2])
                      (*(undefined8 *)(*plVar6 + 8),*(undefined8 *)(*plVar6 + 0x10),param_2,param_3)
    ;
    if (lVar3 != 0) {
      FUN_00a34074(plVar5,plVar6,param_1);
      param_1[5] = param_1[5] + -1;
      goto LAB_00a34508;
    }
    plVar6 = (long *)plVar6[2];
  } while( true );
}

