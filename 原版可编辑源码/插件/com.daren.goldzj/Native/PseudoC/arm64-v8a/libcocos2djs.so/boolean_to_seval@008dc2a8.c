
/* boolean_to_seval(bool, se::Value*) */

undefined8 boolean_to_seval(bool param_1,Value *param_2)

{
  se::Value::setBoolean(param_2,param_1);
  return 1;
}

