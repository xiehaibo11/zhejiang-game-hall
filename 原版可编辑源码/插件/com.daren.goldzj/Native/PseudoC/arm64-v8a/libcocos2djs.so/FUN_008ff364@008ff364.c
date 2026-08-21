
void FUN_008ff364(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_01c68630;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  se::Value::Value((Value *)(param_2 + 2),(Value *)(param_1 + 0x10));
  return;
}

