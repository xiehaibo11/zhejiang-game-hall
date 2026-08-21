
/* ulong_to_seval(unsigned long, se::Value*) */

undefined8 ulong_to_seval(ulong param_1,Value *param_2)

{
  se::Value::setUlong(param_2,param_1);
  return 1;
}

