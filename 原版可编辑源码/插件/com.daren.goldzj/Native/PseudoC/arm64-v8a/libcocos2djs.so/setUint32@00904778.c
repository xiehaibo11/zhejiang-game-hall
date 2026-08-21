
/* se::Value::setUint32(unsigned int) */

void __thiscall se::Value::setUint32(Value *this,uint param_1)

{
  reset(this,2);
  *(double *)this = (double)param_1;
  return;
}

