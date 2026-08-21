
/* se::Value::setUlong(unsigned long) */

void __thiscall se::Value::setUlong(Value *this,ulong param_1)

{
  reset(this,2);
  *(double *)this = (double)param_1;
  return;
}

