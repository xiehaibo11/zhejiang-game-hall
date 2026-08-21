
/* se::Value::toInt16() const */

int __thiscall se::Value::toInt16(Value *this)

{
  double dVar1;
  
  if (this[8] == (Value)0x3) {
    dVar1 = 0.0;
    if (*this != (Value)0x0) {
      dVar1 = 1.0;
    }
    return (int)dVar1;
  }
  return (int)*(double *)this;
}

