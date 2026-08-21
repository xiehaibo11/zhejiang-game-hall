
/* btClock::btClock() */

int __thiscall btClock::btClock(btClock *this)

{
  int iVar1;
  timeval *__tv;
  
  __tv = operator_new(0x10);
  *(timeval **)this = __tv;
  iVar1 = gettimeofday(__tv,(__timezone_ptr_t)0x0);
  return iVar1;
}

