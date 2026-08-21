
/* v8::Number::Value() const */

undefined1  [16] __thiscall v8::Number::Value(Number *this)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  uVar1 = *(ulong *)this;
  if ((uVar1 & 1) == 0) {
    auVar2._0_8_ = (double)((int)uVar1 >> 1);
    auVar2._8_8_ = 0;
    return auVar2;
  }
  auVar3._0_8_ = *(ulong *)(uVar1 + 3);
  auVar3._8_8_ = 0;
  return auVar3;
}

