
/* se::Value::setUint8(unsigned char) */

void __thiscall se::Value::setUint8(Value *this,uchar param_1)

{
  reset(this,2);
  *(double *)this = (double)param_1;
  return;
}

