
/* std::__ndk1::promise<void>::set_value_at_thread_exit() */

void __thiscall std::__ndk1::promise<void>::set_value_at_thread_exit(promise<void> *this)

{
  if (*(__assoc_sub_state **)this != (__assoc_sub_state *)0x0) {
    __assoc_sub_state::set_value_at_thread_exit(*(__assoc_sub_state **)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0121349c(3);
}

