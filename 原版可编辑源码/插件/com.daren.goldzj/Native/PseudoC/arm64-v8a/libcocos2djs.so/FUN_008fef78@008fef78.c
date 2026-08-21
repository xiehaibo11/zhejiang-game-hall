
void FUN_008fef78(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_01c68530;
  se::Value::~Value((Value *)(param_1 + 4));
  se::Value::~Value((Value *)(param_1 + 2));
  operator_delete(param_1);
  return;
}

