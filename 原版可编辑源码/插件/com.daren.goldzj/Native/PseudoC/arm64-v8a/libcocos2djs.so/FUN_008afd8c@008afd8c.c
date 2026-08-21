
void FUN_008afd8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_01c672e8;
  se::Value::~Value((Value *)(param_1 + 3));
  se::Value::~Value((Value *)(param_1 + 1));
  operator_delete(param_1);
  return;
}

