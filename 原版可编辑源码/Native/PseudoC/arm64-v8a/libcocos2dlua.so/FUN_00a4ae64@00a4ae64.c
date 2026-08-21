
undefined8 FUN_00a4ae64(long *param_1,void *param_2,size_t param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  void *__dest;
  long *plVar5;
  long *plVar6;
  
  lVar3 = *param_1;
  lVar2 = (*(code *)param_1[1])(param_2,param_3,(long)(int)param_1[4]);
  plVar5 = *(long **)(lVar3 + lVar2 * 8);
  plVar6 = (long *)*plVar5;
  do {
    if (plVar6 == (long *)0x0) {
LAB_00a4aef0:
      puVar4 = (undefined8 *)(*(code *)PTR_malloc_017699f8)(0x18);
      if (puVar4 != (undefined8 *)0x0) {
        __dest = (void *)(*(code *)PTR_malloc_017699f8)(param_3);
        if (__dest != (void *)0x0) {
                    /* try { // try from 00a4af28 to 00b4afa3 has its CatchHandler @ 00a4af28
                       catch(type#1 @ 00000000) { ... } // from try @ 00a4af28 with catch @ 00a4af28
                       catch(type#1 @ 00000000) { ... } // from try @ 00a4afc4 with catch @ 00a4af28
                       catch(type#1 @ 00000000) { ... } // from try @ 00a4b02c with catch @ 00a4af28
                        */
          memcpy(__dest,param_2,param_3);
          *puVar4 = param_4;
          puVar4[1] = __dest;
          puVar4[2] = param_3;
          iVar1 = FUN_00a4a9ac(plVar5,plVar5[1],puVar4);
          if (iVar1 != 0) {
            param_1[5] = param_1[5] + 1;
            return param_4;
          }
          (*(code *)PTR_free_01769a00)(puVar4[1]);
        }
        (*(code *)PTR_free_01769a00)(puVar4);
      }
                    /* try { // try from 00a4afa4 to 00b4afaf has its CatchHandler @ 00a4b014 */
      return 0;
    }
    lVar3 = (*(code *)param_1[2])
                      (*(undefined8 *)(*plVar6 + 8),*(undefined8 *)(*plVar6 + 0x10),param_2,param_3)
    ;
    if (lVar3 != 0) {
      FUN_00a4aa5c(plVar5,plVar6,param_1);
      param_1[5] = param_1[5] + -1;
      goto LAB_00a4aef0;
    }
    plVar6 = (long *)plVar6[2];
  } while( true );
}

