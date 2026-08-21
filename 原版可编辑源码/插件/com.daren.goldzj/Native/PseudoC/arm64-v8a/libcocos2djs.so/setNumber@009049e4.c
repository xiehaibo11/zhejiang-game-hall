
/* se::Value::setNumber(double) */

void __thiscall se::Value::setNumber(Value *this,double param_1)

{
  reset(this,2);
  *(double *)this = param_1;
  return;
}

