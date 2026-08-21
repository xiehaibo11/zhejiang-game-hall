
void FUN_016be130(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x10);
  *puVar1 = &PTR_FUN_01cccf10;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  return;
}

