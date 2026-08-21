
/* double_to_seval(double, se::Value*) */

undefined8 double_to_seval(double param_1,Value *param_2)

{
  se::Value::setNumber(param_2,param_1);
  return 1;
}

