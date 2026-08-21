
/* v8::base::Time::ToTimeval() const */

undefined1  [16] __thiscall v8::base::Time::ToTimeval(Time *this)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  lVar1 = *(long *)this;
  if (lVar1 == 0) {
    return ZEXT816(0) << 0x40;
  }
  if (lVar1 == 0x7fffffffffffffff) {
    auVar2._8_8_ = 999999;
    auVar2._0_8_ = 0x7fffffffffffffff;
    return auVar2;
  }
  auVar3._8_8_ = lVar1 % 1000000;
  auVar3._0_8_ = lVar1 / 1000000;
  return auVar3;
}

