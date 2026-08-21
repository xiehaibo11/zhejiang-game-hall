
undefined8 FUN_00a697a8(long *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_1[1]);
  (*(code *)PTR_free_01769a00)(param_1[1]);
  (*(code *)PTR_free_01769a00)(param_1);
  return 0;
}

