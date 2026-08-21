
/* std::__ndk1::__assoc_sub_state::set_value_at_thread_exit() */

void __thiscall std::__ndk1::__assoc_sub_state::set_value_at_thread_exit(__assoc_sub_state *this)

{
  long lVar1;
  pthread_key_t *ppVar2;
  __assoc_sub_state *p_Var3;
  long lVar4;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  mutex::lock((mutex *)(this + 0x18));
  if (((byte)this[0x70] & 1) == 0) {
    local_40 = 0;
    lVar4 = *(long *)(this + 0x10);
    exception_ptr::~exception_ptr((exception_ptr *)&local_40);
    if (lVar4 == 0) {
      *(uint *)(this + 0x70) = *(uint *)(this + 0x70) | 1;
      ppVar2 = (pthread_key_t *)__thread_local_data();
      p_Var3 = pthread_getspecific(*ppVar2);
      __thread_struct::__make_ready_at_thread_exit(p_Var3);
      mutex::unlock((mutex *)(this + 0x18));
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0121349c(2);
}

