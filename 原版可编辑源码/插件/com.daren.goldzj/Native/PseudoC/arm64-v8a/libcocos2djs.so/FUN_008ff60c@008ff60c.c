
void FUN_008ff60c(void *param_1)

{
  se::Value::~Value((Value *)((long)param_1 + 0x10));
  operator_delete(param_1);
  return;
}

