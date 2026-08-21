
void FUN_008ff0cc(void *param_1)

{
  se::Value::~Value((Value *)((long)param_1 + 0x20));
  se::Value::~Value((Value *)((long)param_1 + 0x10));
  operator_delete(param_1);
  return;
}

