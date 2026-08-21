
/* se::Value::setInt32(int) */

void __thiscall se::Value::setInt32(Value *this,int param_1)

{
  reset(this,2);
  *(double *)this = (double)param_1;
  return;
}

