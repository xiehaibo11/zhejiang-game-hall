
/* se::Value::setFloat(float) */

void __thiscall se::Value::setFloat(Value *this,float param_1)

{
  reset(this,2);
  *(double *)this = (double)param_1;
  return;
}

