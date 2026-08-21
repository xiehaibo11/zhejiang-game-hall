
/* v8::base::Time::ToJsTime() const */

undefined1  [16] __thiscall v8::base::Time::ToJsTime(Time *this)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = *(long *)this;
  if (lVar1 == 0) {
    return ZEXT816(0);
  }
  if (lVar1 == 0x7fffffffffffffff) {
    return ZEXT816(0x7fefffffffffffff);
  }
  auVar2._0_8_ = (double)lVar1 / 1000.0;
  auVar2._8_8_ = 0;
  return auVar2;
}

