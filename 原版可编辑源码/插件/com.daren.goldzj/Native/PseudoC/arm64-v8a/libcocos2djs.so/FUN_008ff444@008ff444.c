
undefined8 * FUN_008ff444(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x20);
  *puVar1 = &PTR_FUN_01c686b0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  se::Value::Value((Value *)(puVar1 + 2),(Value *)(param_1 + 0x10));
  return puVar1;
}

