
/* size_to_seval(unsigned long, se::Value*) */

undefined8 size_to_seval(ulong param_1,Value *param_2)

{
  se::Value::setLong(param_2,param_1);
  return 1;
}

