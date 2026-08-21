
/* v8::base::Time::FromTimeval(timeval) */

long __thiscall v8::base::Time::FromTimeval(Time *this,timeval param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1.tv_sec;
  lVar2 = 0;
  if ((lVar1 != 0 || this != (Time *)0x0) &&
     ((lVar1 != 999999 || (lVar2 = 0x7fffffffffffffff, this != (Time *)0x7fffffffffffffff)))) {
    return lVar1 + (long)this * 1000000;
  }
  return lVar2;
}

