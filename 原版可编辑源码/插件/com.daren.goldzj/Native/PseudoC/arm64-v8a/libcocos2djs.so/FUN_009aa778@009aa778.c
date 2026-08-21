
void FUN_009aa778(condition_variable *param_1,mutex *param_2)

{
  __shared_weak_count *p_Var1;
  __shared_weak_count *this;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  mutex *local_48;
  char local_40;
  long local_38;
  
                    /* try { // try from 009aa780 to 00aaa8ab has its CatchHandler @ 009aa938 */
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  local_48 = *(mutex **)(param_1 + 0x30);
  this = *(__shared_weak_count **)(param_1 + 0x38);
  if (this != (__shared_weak_count *)0x0) {
    p_Var1 = this + 8;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = *(long *)p_Var1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_40 = '\x01';
  std::__ndk1::mutex::lock(local_48);
  std::__ndk1::mutex::unlock(param_2);
  std::__ndk1::condition_variable::wait(param_1,(unique_lock *)&local_48);
  if (local_40 == '\0') {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__throw_system_error(1,"unique_lock::unlock: not locked");
  }
  std::__ndk1::mutex::unlock(local_48);
  local_40 = '\0';
  std::__ndk1::mutex::lock(param_2);
  if (local_40 != '\0') {
    std::__ndk1::mutex::unlock(local_48);
  }
  if (this != (__shared_weak_count *)0x0) {
    p_Var1 = this + 8;
    do {
      lVar5 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*(long *)this + 0x10))(this);
      std::__ndk1::__shared_weak_count::__release_weak(this);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

