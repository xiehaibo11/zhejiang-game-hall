
/* std::__ndk1::promise<void>::set_exception_at_thread_exit(std::exception_ptr) */

void __thiscall
std::__ndk1::promise<void>::set_exception_at_thread_exit(promise<void> *this,exception_ptr *param_2)

{
  long lVar1;
  __assoc_sub_state *p_Var2;
  exception_ptr aeStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  p_Var2 = *(__assoc_sub_state **)this;
  if (p_Var2 == (__assoc_sub_state *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01833d70(3);
  }
  exception_ptr::exception_ptr(aeStack_30,param_2);
  __assoc_sub_state::set_exception_at_thread_exit(p_Var2,aeStack_30);
  exception_ptr::~exception_ptr(aeStack_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

