
undefined8 * FUN_00cd85fc(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x28);
  *puVar1 = &PTR_FUN_01c8dfc0;
  se::Value::Value((Value *)(puVar1 + 1),(Value *)(param_1 + 8));
  se::Value::Value((Value *)(puVar1 + 3),(Value *)(param_1 + 0x18));
  return puVar1;
}

