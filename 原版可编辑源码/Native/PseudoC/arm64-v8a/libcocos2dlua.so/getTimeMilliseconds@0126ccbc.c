
/* btClock::getTimeMilliseconds() */

long __thiscall btClock::getTimeMilliseconds(btClock *this)

{
  timeval local_30;
  
  gettimeofday(&local_30,(__timezone_ptr_t)0x0);
  return (local_30.tv_usec - (*(long **)this)[1]) / 1000 +
         (local_30.tv_sec - **(long **)this) * 1000;
}

