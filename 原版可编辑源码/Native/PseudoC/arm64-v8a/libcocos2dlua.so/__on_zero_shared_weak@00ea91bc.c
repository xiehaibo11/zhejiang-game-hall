
/* std::__ndk1::__shared_ptr_pointer<std::__ndk1::__empty_state<char>*,
   std::__ndk1::default_delete<std::__ndk1::__empty_state<char> >,
   std::__ndk1::allocator<std::__ndk1::__empty_state<char> > >::__on_zero_shared_weak() */

void __thiscall
std::__ndk1::
__shared_ptr_pointer<std::__ndk1::__empty_state<char>*,std::__ndk1::default_delete<std::__ndk1::__empty_state<char>>,std::__ndk1::allocator<std::__ndk1::__empty_state<char>>>
::__on_zero_shared_weak
          (__shared_ptr_pointer<std::__ndk1::__empty_state<char>*,std::__ndk1::default_delete<std::__ndk1::__empty_state<char>>,std::__ndk1::allocator<std::__ndk1::__empty_state<char>>>
           *this)

{
  operator_delete(this);
  return;
}

