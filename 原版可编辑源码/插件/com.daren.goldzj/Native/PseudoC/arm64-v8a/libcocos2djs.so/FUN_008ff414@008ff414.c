
void FUN_008ff414(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_01c686b0;
  se::Value::~Value((Value *)(param_1 + 2));
  operator_delete(param_1);
  return;
}

