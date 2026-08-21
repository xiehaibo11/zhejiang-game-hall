
/* std::__ndk1::__shared_ptr_pointer<std::__ndk1::__empty_state<char>*,
   std::__ndk1::default_delete<std::__ndk1::__empty_state<char> >,
   std::__ndk1::allocator<std::__ndk1::__empty_state<char> > >::__get_deleter(std::type_info const&)
   const */

__shared_ptr_pointer<std::__ndk1::__empty_state<char>*,std::__ndk1::default_delete<std::__ndk1::__empty_state<char>>,std::__ndk1::allocator<std::__ndk1::__empty_state<char>>>
* __thiscall
std::__ndk1::
__shared_ptr_pointer<std::__ndk1::__empty_state<char>*,std::__ndk1::default_delete<std::__ndk1::__empty_state<char>>,std::__ndk1::allocator<std::__ndk1::__empty_state<char>>>
::__get_deleter(__shared_ptr_pointer<std::__ndk1::__empty_state<char>*,std::__ndk1::default_delete<std::__ndk1::__empty_state<char>>,std::__ndk1::allocator<std::__ndk1::__empty_state<char>>>
                *this,type_info *param_1)

{
  __shared_ptr_pointer<std::__ndk1::__empty_state<char>*,std::__ndk1::default_delete<std::__ndk1::__empty_state<char>>,std::__ndk1::allocator<std::__ndk1::__empty_state<char>>>
  *p_Var1;
  
  p_Var1 = this + 0x18;
  if (*(char **)(param_1 + 8) != "NSt6__ndk114default_deleteINS_13__empty_stateIcEEEE") {
    p_Var1 = (__shared_ptr_pointer<std::__ndk1::__empty_state<char>*,std::__ndk1::default_delete<std::__ndk1::__empty_state<char>>,std::__ndk1::allocator<std::__ndk1::__empty_state<char>>>
              *)0x0;
  }
  return p_Var1;
}

