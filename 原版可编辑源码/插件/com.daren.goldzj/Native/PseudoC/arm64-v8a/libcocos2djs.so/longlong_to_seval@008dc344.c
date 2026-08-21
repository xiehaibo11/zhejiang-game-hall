
/* longlong_to_seval(long long, se::Value*) */

undefined8 longlong_to_seval(longlong param_1,Value *param_2)

{
  se::Value::setLong(param_2,param_1);
  return 1;
}

