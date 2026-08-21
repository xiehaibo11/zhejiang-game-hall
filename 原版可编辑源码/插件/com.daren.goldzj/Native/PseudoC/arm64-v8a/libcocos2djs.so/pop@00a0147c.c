
/* universe::Downloader2::JobQueue::pop() */

long __thiscall universe::Downloader2::JobQueue::pop(JobQueue *this)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  mutex *local_48;
  char local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 00a010f4 with catch @ 00a0147c */
                    /* catch() { ... } // from try @ 00a010d8 with catch @ 00a01484 */
                    /* catch() { ... } // from try @ 00a010fc with catch @ 00a01488 */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_48 = (mutex *)(this + 0x18);
                    /* catch() { ... } // from try @ 00a010cc with catch @ 00a014a0
                       catch() { ... } // from try @ 00a013e8 with catch @ 00a014a0 */
  local_40 = '\x01';
  std::__ndk1::mutex::lock(local_48);
  lVar4 = *(long *)(this + 0x10);
  if (lVar4 == 0) {
    do {
      std::__ndk1::condition_variable::wait
                ((condition_variable *)(this + 0x40),(unique_lock *)&local_48);
      lVar4 = *(long *)(this + 0x10);
    } while (lVar4 == 0);
  }
  plVar3 = *(long **)(this + 8);
                    /* catch() { ... } // from try @ 00a01080 with catch @ 00a014d8 */
                    /* catch() { ... } // from try @ 00a01074 with catch @ 00a014dc */
  lVar1 = *plVar3;
                    /* catch() { ... } // from try @ 00a01054 with catch @ 00a014e0 */
  lVar5 = plVar3[2];
  *(long *)(lVar1 + 8) = plVar3[1];
  *(long *)plVar3[1] = lVar1;
                    /* catch() { ... } // from try @ 00a0108c with catch @ 00a014f0
                       catch() { ... } // from try @ 00a011c4 with catch @ 00a014f0 */
  *(long *)(this + 0x10) = lVar4 + -1;
  operator_delete(plVar3);
  if (local_40 != '\0') {
    std::__ndk1::mutex::unlock(local_48);
    if (*(long *)(lVar2 + 0x28) == local_38) {
      return lVar5;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  std::__ndk1::__throw_system_error(1,"unique_lock::unlock: not locked");
}

