
long FUN_00a379b0(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_realloc_01d1b750)();
  if ((param_2 != 0) && (lVar1 == 0)) {
    (*(code *)PTR_free_01d1b748)(param_1);
  }
  return lVar1;
}

