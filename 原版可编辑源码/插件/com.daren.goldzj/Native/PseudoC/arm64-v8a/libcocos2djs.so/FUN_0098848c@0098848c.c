
void FUN_0098848c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_01c6a308;
  se::Value::~Value((Value *)(param_1 + 3));
                    /* try { // try from 009884b0 to 00a884bf has its CatchHandler @ 00988558 */
  se::Value::~Value((Value *)(param_1 + 1));
  operator_delete(param_1);
  return;
}

