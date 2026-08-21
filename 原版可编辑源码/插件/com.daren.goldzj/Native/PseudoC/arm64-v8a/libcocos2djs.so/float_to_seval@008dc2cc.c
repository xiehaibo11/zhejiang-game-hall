
/* float_to_seval(float, se::Value*) */

undefined8 float_to_seval(float param_1,Value *param_2)

{
  se::Value::setFloat(param_2,param_1);
  return 1;
}

