
long * FUN_00a16ac0(long *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  lVar1 = (*(code *)PTR_strdup_01d1b758)(param_2);
  if (lVar1 != 0) {
    plVar2 = (long *)(*(code *)PTR_malloc_01d1b740)(0x10);
    if (plVar2 != (long *)0x0) {
      *plVar2 = lVar1;
      plVar2[1] = 0;
      plVar4 = param_1;
      if (param_1 != (long *)0x0) {
        do {
          plVar3 = plVar4;
          plVar4 = (long *)plVar3[1];
        } while (plVar4 != (long *)0x0);
        plVar3[1] = (long)plVar2;
        plVar2 = param_1;
      }
      if (plVar2 != (long *)0x0) {
        return plVar2;
      }
    }
    (*(code *)PTR_free_01d1b748)(lVar1);
  }
  return (long *)0x0;
}

