
undefined4 FUN_00a58f00(long *param_1,undefined4 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + 0x218);
  (*(code *)PTR_free_01769a00)(*(undefined8 *)(lVar1 + 8));
  *(undefined8 *)(lVar1 + 8) = 0;
  (*(code *)PTR_free_01769a00)(*(undefined8 *)(*param_1 + 0x218));
  *(undefined8 *)(*param_1 + 0x218) = 0;
  return param_2;
}

