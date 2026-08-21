
void FUN_008feed8(void *param_1)

{
  se::Value::~Value((Value *)((long)param_1 + 0x10));
  operator_delete(param_1);
  return;
}

