
/* std::__ndk1::promise<void>::set_value() */

void __thiscall std::__ndk1::promise<void>::set_value(promise<void> *this)

{
  if (*(__assoc_sub_state **)this != (__assoc_sub_state *)0x0) {
    __assoc_sub_state::set_value(*(__assoc_sub_state **)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01833d70(3);
}

