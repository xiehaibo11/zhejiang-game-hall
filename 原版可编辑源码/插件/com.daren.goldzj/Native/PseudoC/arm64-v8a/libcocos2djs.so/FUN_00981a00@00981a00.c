
void FUN_00981a00(undefined8 *param_1)

{
                    /* try { // try from 00981a08 to 00a81ab3 has its CatchHandler @ 009811b0 */
  *param_1 = &PTR_FUN_01c6a0e8;
  se::Value::~Value((Value *)(param_1 + 3));
  se::Value::~Value((Value *)(param_1 + 1));
  operator_delete(param_1);
  return;
}

