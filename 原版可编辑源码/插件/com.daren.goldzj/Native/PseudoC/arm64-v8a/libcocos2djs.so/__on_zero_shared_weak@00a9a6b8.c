
/* std::__ndk1::__shared_ptr_emplace<std::__ndk1::vector<char, std::__ndk1::allocator<char> >,
   std::__ndk1::allocator<std::__ndk1::vector<char, std::__ndk1::allocator<char> > >
   >::__on_zero_shared_weak() */

void __thiscall
std::__ndk1::
__shared_ptr_emplace<std::__ndk1::vector<char,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::vector<char,std::__ndk1::allocator<char>>>>
::__on_zero_shared_weak
          (__shared_ptr_emplace<std::__ndk1::vector<char,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::vector<char,std::__ndk1::allocator<char>>>>
           *this)

{
  operator_delete(this);
  return;
}

