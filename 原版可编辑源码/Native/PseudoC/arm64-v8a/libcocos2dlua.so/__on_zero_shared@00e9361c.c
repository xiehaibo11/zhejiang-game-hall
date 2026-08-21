
/* std::__ndk1::__shared_ptr_emplace<std::__ndk1::vector<char, std::__ndk1::allocator<char> >,
   std::__ndk1::allocator<std::__ndk1::vector<char, std::__ndk1::allocator<char> > >
   >::__on_zero_shared() */

void __thiscall
std::__ndk1::
__shared_ptr_emplace<std::__ndk1::vector<char,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::vector<char,std::__ndk1::allocator<char>>>>
::__on_zero_shared(__shared_ptr_emplace<std::__ndk1::vector<char,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::vector<char,std::__ndk1::allocator<char>>>>
                   *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x18);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x20) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}

