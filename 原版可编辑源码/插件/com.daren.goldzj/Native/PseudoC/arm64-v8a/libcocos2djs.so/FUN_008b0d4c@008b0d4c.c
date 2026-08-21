
void FUN_008b0d4c(void *param_1)

{
  se::Value::~Value((Value *)((long)param_1 + 0x18));
  se::Value::~Value((Value *)((long)param_1 + 8));
  operator_delete(param_1);
  return;
}

