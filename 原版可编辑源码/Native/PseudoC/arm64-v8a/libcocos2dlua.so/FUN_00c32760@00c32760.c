
undefined8 FUN_00c32760(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  *(undefined8 **)(param_1 + 0x28) = puVar1 + 1;
  *puVar1 = 0xffff7fffffffffff;
  return 1;
}

