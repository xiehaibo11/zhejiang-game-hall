
/* se::Value::toFloat() const */

float __thiscall se::Value::toFloat(Value *this)

{
  float fVar1;
  
  if (this[8] == (Value)0x3) {
    fVar1 = 0.0;
    if (*this != (Value)0x0) {
      fVar1 = 1.0;
    }
    return fVar1;
  }
  return (float)*(double *)this;
}

