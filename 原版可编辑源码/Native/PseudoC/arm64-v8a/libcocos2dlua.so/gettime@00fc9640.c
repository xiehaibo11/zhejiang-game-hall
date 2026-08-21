
/* cocos2d::utils::gettime() */

int cocos2d::utils::gettime(void)

{
  int iVar1;
  timeval local_20;
  
  iVar1 = gettimeofday(&local_20,(__timezone_ptr_t)0x0);
  return iVar1;
}

