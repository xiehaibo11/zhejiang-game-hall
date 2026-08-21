
/* int32_to_seval(int, se::Value*) */

undefined8 int32_to_seval(int param_1,Value *param_2)

{
  se::Value::setInt32(param_2,param_1);
  return 1;
}

