
/* std::__ndk1::__assoc_sub_state::set_exception_at_thread_exit(std::exception_ptr) */

void __thiscall
std::__ndk1::__assoc_sub_state::set_exception_at_thread_exit
          (__assoc_sub_state *this,exception_ptr *param_2)

{
  long lVar1;
  pthread_key_t *ppVar2;
  __thread_struct *this_00;
  long lVar3;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  mutex::lock((mutex *)(this + 0x18));
  if (((byte)this[0x70] & 1) == 0) {
    local_50 = 0;
    lVar3 = *(long *)(this + 0x10);
    exception_ptr::~exception_ptr((exception_ptr *)&local_50);
    if (lVar3 == 0) {
      exception_ptr::operator=((exception_ptr *)(this + 0x10),param_2);
      ppVar2 = (pthread_key_t *)__thread_local_data();
      this_00 = pthread_getspecific(*ppVar2);
      __thread_struct::__make_ready_at_thread_exit(this_00,this);
      mutex::unlock((mutex *)(this + 0x18));
      if (*(long *)(lVar1 + 0x28) == local_48) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01833d70(2);
}

