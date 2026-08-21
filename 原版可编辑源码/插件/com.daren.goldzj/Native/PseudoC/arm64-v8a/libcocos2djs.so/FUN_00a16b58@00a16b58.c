
long * FUN_00a16b58(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar2 = (long *)0x0;
  if (param_1 != (undefined8 *)0x0) {
    plVar5 = (long *)0x0;
    do {
      lVar1 = (*(code *)PTR_strdup_01d1b758)(*param_1);
      if (lVar1 == 0) {
joined_r0x00a16bf4:
        while (plVar5 != (long *)0x0) {
          plVar2 = (long *)plVar5[1];
          (*(code *)PTR_free_01d1b748)(*plVar5);
          *plVar5 = 0;
          (*(code *)PTR_free_01d1b748)(plVar5);
          plVar5 = plVar2;
        }
        return (long *)0x0;
      }
      plVar2 = (long *)(*(code *)PTR_malloc_01d1b740)(0x10);
      if (plVar2 == (long *)0x0) {
LAB_00a16be0:
        (*(code *)PTR_free_01d1b748)(lVar1);
        goto joined_r0x00a16bf4;
      }
      *plVar2 = lVar1;
      plVar2[1] = 0;
      plVar4 = plVar5;
      if (plVar5 != (long *)0x0) {
        do {
          plVar3 = plVar4;
          plVar4 = (long *)plVar3[1];
        } while (plVar4 != (long *)0x0);
        plVar3[1] = (long)plVar2;
        plVar2 = plVar5;
      }
      if (plVar2 == (long *)0x0) goto LAB_00a16be0;
      param_1 = (undefined8 *)param_1[1];
      plVar5 = plVar2;
    } while (param_1 != (undefined8 *)0x0);
  }
  return plVar2;
}

