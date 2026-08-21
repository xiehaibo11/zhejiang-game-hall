
/* cocos2d::utils::gettime() */

undefined1  [16] cocos2d::utils::gettime(void)

{
  long lVar1;
  int iVar2;
  undefined1 auVar3 [16];
  timeval local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = gettimeofday(&local_38,(__timezone_ptr_t)0x0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    auVar3._0_8_ = (double)local_38.tv_usec / 1000000.0 + (double)local_38.tv_sec;
    auVar3._8_8_ = 0;
    return auVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}

