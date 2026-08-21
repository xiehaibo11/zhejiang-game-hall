
long FUN_00a4e398(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_realloc_01769a08)();
  if ((param_2 != 0) && (lVar1 == 0)) {
    (*(code *)PTR_free_01769a00)(param_1);
  }
  return lVar1;
}

