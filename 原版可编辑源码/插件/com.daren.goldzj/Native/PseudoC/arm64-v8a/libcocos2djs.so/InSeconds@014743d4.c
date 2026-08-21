
/* v8::base::TimeDelta::InSeconds() const */

long __thiscall v8::base::TimeDelta::InSeconds(TimeDelta *this)

{
  long lVar1;
  
  lVar1 = *(long *)this;
  if (lVar1 != 0x7fffffffffffffff) {
    lVar1 = lVar1 / 1000000;
  }
  return lVar1;
}

