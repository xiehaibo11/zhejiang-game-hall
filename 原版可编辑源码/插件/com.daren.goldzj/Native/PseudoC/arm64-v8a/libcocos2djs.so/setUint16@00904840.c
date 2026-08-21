
/* se::Value::setUint16(unsigned short) */

void __thiscall se::Value::setUint16(Value *this,ushort param_1)

{
  reset(this,2);
  *(double *)this = (double)param_1;
  return;
}

