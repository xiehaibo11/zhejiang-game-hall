
/* cocos2d::utils::getTimeInMilliseconds() */

long cocos2d::utils::getTimeInMilliseconds(void)

{
  timeval local_20;
  
  gettimeofday(&local_20,(__timezone_ptr_t)0x0);
  return local_20.tv_usec / 1000 + local_20.tv_sec * 1000;
}

