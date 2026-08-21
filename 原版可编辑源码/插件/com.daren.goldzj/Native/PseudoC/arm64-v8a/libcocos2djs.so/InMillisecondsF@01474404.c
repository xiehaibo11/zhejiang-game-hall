
/* v8::base::TimeDelta::InMillisecondsF() const */

undefined1  [16] __thiscall v8::base::TimeDelta::InMillisecondsF(TimeDelta *this)

{
  undefined1 auVar1 [16];
  
  if (*(long *)this == 0x7fffffffffffffff) {
    return ZEXT816(0x7ff0000000000000);
  }
  auVar1._0_8_ = (double)*(long *)this / 1000.0;
  auVar1._8_8_ = 0;
  return auVar1;
}

