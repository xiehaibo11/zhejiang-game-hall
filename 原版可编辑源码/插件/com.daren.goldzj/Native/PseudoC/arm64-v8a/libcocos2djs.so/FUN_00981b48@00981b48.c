
void FUN_00981b48(void *param_1)

{
                    /* try { // try from 00981b5c to 00a81b63 has its CatchHandler @ 009821a4 */
  se::Value::~Value((Value *)((long)param_1 + 0x18));
  se::Value::~Value((Value *)((long)param_1 + 8));
  operator_delete(param_1);
  return;
}

