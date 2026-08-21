
undefined8 FUN_00a4361c(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + 0x218);
  (*(code *)PTR_free_01d1b748)(param_1[0xc5]);
  param_1[0xc5] = 0;
  (*(code *)PTR_free_01d1b748)(param_1[200]);
  param_1[200] = 0;
  if (lVar1 != 0) {
    (*(code *)PTR_free_01d1b748)(*(undefined8 *)(lVar1 + 8));
    *(undefined8 *)(lVar1 + 8) = 0;
  }
  return 0;
}

