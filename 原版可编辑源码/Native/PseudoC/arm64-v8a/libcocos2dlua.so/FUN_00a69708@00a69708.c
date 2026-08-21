
long * FUN_00a69708(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(*(code *)PTR_malloc_017699f8)(0x10);
  if (plVar1 != (long *)0x0) {
    lVar2 = (*(code *)PTR_malloc_017699f8)(*(undefined4 *)(param_1 + 3));
    plVar1[1] = lVar2;
    if (lVar2 == 0) {
      (*(code *)PTR_free_01769a00)(plVar1);
      plVar1 = (long *)0x0;
    }
    else {
      *plVar1 = (long)param_1;
      (*(code *)*param_1)();
    }
  }
  return plVar1;
}

