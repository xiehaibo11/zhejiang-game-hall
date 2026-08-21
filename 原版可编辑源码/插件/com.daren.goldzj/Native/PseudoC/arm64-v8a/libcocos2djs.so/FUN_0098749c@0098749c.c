
void FUN_0098749c(undefined8 *param_1)

{
                    /* try { // try from 0098749c to 00a874a7 has its CatchHandler @ 00987504 */
                    /* try { // try from 009874a8 to 00a87527 has its CatchHandler @ 00987430 */
  *param_1 = &PTR_FUN_01c6a168;
  se::Value::~Value((Value *)(param_1 + 3));
  se::Value::~Value((Value *)(param_1 + 1));
  operator_delete(param_1);
  return;
}

