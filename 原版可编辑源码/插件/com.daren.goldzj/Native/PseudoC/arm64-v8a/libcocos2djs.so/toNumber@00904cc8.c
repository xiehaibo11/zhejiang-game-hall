
/* se::Value::toNumber() const */

undefined1  [16] __thiscall se::Value::toNumber(Value *this)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (this[8] == (Value)0x3) {
    uVar1 = 0;
    if (*this != (Value)0x0) {
      uVar1 = 0x3ff0000000000000;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar1;
    return auVar2;
  }
  auVar3._0_8_ = *(ulong *)this;
  auVar3._8_8_ = 0;
  return auVar3;
}

