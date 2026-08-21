
/* std::__ndk1::__thread_struct::__make_ready_at_thread_exit(std::__ndk1::__assoc_sub_state*) */

void __thiscall
std::__ndk1::__thread_struct::__make_ready_at_thread_exit
          (__thread_struct *this,__assoc_sub_state *param_1)

{
  long lVar1;
  long lVar2;
  __assoc_sub_state *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)this;
  local_30 = param_1;
  if (*(undefined8 **)(lVar2 + 8) == *(undefined8 **)(lVar2 + 0x10)) {
    FUN_018338d0(lVar2,&local_30);
  }
  else {
    **(undefined8 **)(lVar2 + 8) = param_1;
    *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 8;
  }
  __shared_count::__add_shared((__shared_count *)local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

