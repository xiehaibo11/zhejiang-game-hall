
/* cocos2d::renderer::ParallelTask::waitAllThreads() */

void __thiscall cocos2d::renderer::ParallelTask::waitAllThreads(ParallelTask *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  mutex *local_48;
  char local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = (mutex *)(this + 0x48);
  local_40 = '\x01';
  std::__ndk1::mutex::lock(local_48);
  lVar2 = *(long *)(this + 0x38);
  if (lVar2 != 0) {
    while (0 < *(int *)(this + 0x44)) {
      lVar3 = 0;
      while (*(char *)(lVar2 + lVar3) != '\0') {
        lVar3 = lVar3 + 1;
        if (*(int *)(this + 0x44) <= lVar3) goto LAB_00927824;
      }
      std::__ndk1::condition_variable::wait
                ((condition_variable *)(this + 0x70),(unique_lock *)&local_48);
      lVar2 = *(long *)(this + 0x38);
      if (lVar2 == 0) break;
    }
  }
LAB_00927824:
  if (local_40 != '\0') {
    std::__ndk1::mutex::unlock(local_48);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

