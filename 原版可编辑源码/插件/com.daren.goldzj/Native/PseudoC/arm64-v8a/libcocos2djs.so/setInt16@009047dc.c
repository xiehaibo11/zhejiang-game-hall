
/* se::Value::setInt16(short) */

void __thiscall se::Value::setInt16(Value *this,short param_1)

{
  reset(this,2);
  *(double *)this = (double)(int)param_1;
  return;
}

