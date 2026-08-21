
/* std::__ndk1::__shared_ptr_pointer<unsigned char*, void (*)(void*),
   std::__ndk1::allocator<unsigned char> >::__get_deleter(std::type_info const&) const */

__shared_ptr_pointer<unsigned_char*,void(*)(void*),std::__ndk1::allocator<unsigned_char>> *
__thiscall
std::__ndk1::
__shared_ptr_pointer<unsigned_char*,void(*)(void*),std::__ndk1::allocator<unsigned_char>>::
__get_deleter(__shared_ptr_pointer<unsigned_char*,void(*)(void*),std::__ndk1::allocator<unsigned_char>>
              *this,type_info *param_1)

{
  __shared_ptr_pointer<unsigned_char*,void(*)(void*),std::__ndk1::allocator<unsigned_char>> *p_Var1;
  
  p_Var1 = this + 0x20;
  if (*(char **)(param_1 + 8) != "PFvPvE") {
    p_Var1 = (__shared_ptr_pointer<unsigned_char*,void(*)(void*),std::__ndk1::allocator<unsigned_char>>
              *)0x0;
  }
  return p_Var1;
}

