
/* std::__ndk1::__thread_struct::notify_all_at_thread_exit(std::__ndk1::condition_variable*,
   std::__ndk1::mutex*) */

void __thiscall
std::__ndk1::__thread_struct::notify_all_at_thread_exit
          (__thread_struct *this,condition_variable *param_1,mutex *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  condition_variable *local_38;
  mutex *pmStack_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  lVar3 = *(long *)this;
  puVar1 = *(undefined8 **)(lVar3 + 0x20);
  local_38 = param_1;
  pmStack_30 = param_2;
  if (puVar1 < *(undefined8 **)(lVar3 + 0x28)) {
    puVar1[1] = param_2;
    *puVar1 = param_1;
    *(long *)(lVar3 + 0x20) = *(long *)(lVar3 + 0x20) + 0x10;
  }
  else {
    FUN_018337f0(lVar3 + 0x18,&local_38);
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

