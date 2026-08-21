
/* btClock::reset() */

int __thiscall btClock::reset(btClock *this)

{
  int iVar1;
  
  iVar1 = gettimeofday(*(timeval **)this,(__timezone_ptr_t)0x0);
  return iVar1;
}

