
void FUN_01792818(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x10);
  *puVar1 = &PTR_FUN_01cd9530;
  *(undefined2 *)(puVar1 + 1) = *(undefined2 *)(param_1 + 8);
  return;
}

