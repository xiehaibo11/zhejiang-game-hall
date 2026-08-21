
/* se::Value::setInt8(signed char) */

void __thiscall se::Value::setInt8(Value *this,char param_2)

{
  reset(this,2);
  *(double *)this = (double)(int)param_2;
  return;
}

