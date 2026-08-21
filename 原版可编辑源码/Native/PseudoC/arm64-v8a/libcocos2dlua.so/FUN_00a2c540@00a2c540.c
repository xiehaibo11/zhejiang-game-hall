
long * FUN_00a2c540(undefined8 *param_1)

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
      lVar1 = (*(code *)PTR_strdup_01769a10)(*param_1);
      if (lVar1 == 0) {
joined_r0x00a2c5dc:
        while (plVar5 != (long *)0x0) {
          plVar2 = (long *)plVar5[1];
          (*(code *)PTR_free_01769a00)(*plVar5);
          *plVar5 = 0;
          (*(code *)PTR_free_01769a00)(plVar5);
          plVar5 = plVar2;
        }
        return (long *)0x0;
      }
                    /* try { // try from 00a2c58c to 00b2c5bf has its CatchHandler @ 00a2c68c */
      plVar2 = (long *)(*(code *)PTR_malloc_017699f8)(0x10);
      if (plVar2 == (long *)0x0) {
LAB_00a2c5c8:
                    /* try { // try from 00a2c5d8 to 00b2c60b has its CatchHandler @ 00a2c65c */
        (*(code *)PTR_free_01769a00)(lVar1);
        goto joined_r0x00a2c5dc;
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
      if (plVar2 == (long *)0x0) goto LAB_00a2c5c8;
      param_1 = (undefined8 *)param_1[1];
                    /* try { // try from 00a2c5c0 to 00b2c5d3 has its CatchHandler @ 00a2c658 */
      plVar5 = plVar2;
    } while (param_1 != (undefined8 *)0x0);
  }
  return plVar2;
}

