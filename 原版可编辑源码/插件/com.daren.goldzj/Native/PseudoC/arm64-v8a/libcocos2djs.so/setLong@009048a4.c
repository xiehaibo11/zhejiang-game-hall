
/* se::Value::setLong(long) */

void __thiscall se::Value::setLong(Value *this,long param_1)

{
  reset(this,2);
  *(double *)this = (double)param_1;
  return;
}

