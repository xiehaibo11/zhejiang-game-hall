
/* int8_to_seval(signed char, se::Value*) */

undefined8 int8_to_seval(undefined4 param_1,Value *param_2)

{
  se::Value::setInt8(param_2,param_1);
  return 1;
}

