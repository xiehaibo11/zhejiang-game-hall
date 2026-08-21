
/* std::__ndk1::__shared_ptr_pointer<std::__ndk1::__empty_state<char>*,
   std::__ndk1::default_delete<std::__ndk1::__empty_state<char> >,
   std::__ndk1::allocator<std::__ndk1::__empty_state<char> > >::__on_zero_shared() */

void __thiscall
std::__ndk1::
__shared_ptr_pointer<std::__ndk1::__empty_state<char>*,std::__ndk1::default_delete<std::__ndk1::__empty_state<char>>,std::__ndk1::allocator<std::__ndk1::__empty_state<char>>>
::__on_zero_shared(__shared_ptr_pointer<std::__ndk1::__empty_state<char>*,std::__ndk1::default_delete<std::__ndk1::__empty_state<char>>,std::__ndk1::allocator<std::__ndk1::__empty_state<char>>>
                   *this)

{
  if (*(long **)(this + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00863188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x18) + 8))();
    return;
  }
  return;
}

