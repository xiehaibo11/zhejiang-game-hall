
undefined8 FUN_00a30424(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + 0x218);
  if (lVar1 != 0) {
    FUN_00a16c3c(*(undefined8 *)(lVar1 + 0x1cb0));
    *(undefined8 *)(lVar1 + 0x1cb0) = 0;
    (*(code *)PTR_free_01d1b748)(*(undefined8 *)(*param_1 + 0x218));
    *(undefined8 *)(*param_1 + 0x218) = 0;
  }
  return 0;
}

