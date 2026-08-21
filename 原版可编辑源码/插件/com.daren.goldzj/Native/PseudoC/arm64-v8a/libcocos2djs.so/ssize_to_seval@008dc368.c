
/* ssize_to_seval(long, se::Value*) */

undefined8 ssize_to_seval(long param_1,Value *param_2)

{
  se::Value::setLong(param_2,param_1);
  return 1;
}

