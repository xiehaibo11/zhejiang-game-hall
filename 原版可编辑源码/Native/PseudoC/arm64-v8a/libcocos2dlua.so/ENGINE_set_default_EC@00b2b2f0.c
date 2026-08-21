
undefined8 ENGINE_set_default_EC(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar1 = engine_table_register(&DAT_01782ed0,&LAB_00b2b26c,param_1,&DAT_013e0cd4,1,1);
    return uVar1;
  }
  return 1;
}

