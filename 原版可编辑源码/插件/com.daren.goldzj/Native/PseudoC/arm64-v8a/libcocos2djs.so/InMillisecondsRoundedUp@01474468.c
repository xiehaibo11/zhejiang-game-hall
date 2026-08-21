
/* v8::base::TimeDelta::InMillisecondsRoundedUp() const */

long __thiscall v8::base::TimeDelta::InMillisecondsRoundedUp(TimeDelta *this)

{
  long lVar1;
  
  lVar1 = 0x7fffffffffffffff;
  if (*(long *)this != 0x7fffffffffffffff) {
    lVar1 = (*(long *)this + 999) / 1000;
  }
  return lVar1;
}

