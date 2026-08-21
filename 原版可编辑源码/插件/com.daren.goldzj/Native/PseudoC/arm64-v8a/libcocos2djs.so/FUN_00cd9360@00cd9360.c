
void FUN_00cd9360(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_01c8e040;
  se::Value::~Value((Value *)(param_1 + 3));
  se::Value::~Value((Value *)(param_1 + 1));
  operator_delete(param_1);
  return;
}

