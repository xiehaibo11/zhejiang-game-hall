
/* std::__ndk1::__shared_ptr_emplace<std::__ndk1::vector<char, std::__ndk1::allocator<char> >,
   std::__ndk1::allocator<std::__ndk1::vector<char, std::__ndk1::allocator<char> > >
   >::~__shared_ptr_emplace() */

void __thiscall
std::__ndk1::
__shared_ptr_emplace<std::__ndk1::vector<char,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::vector<char,std::__ndk1::allocator<char>>>>
::~__shared_ptr_emplace
          (__shared_ptr_emplace<std::__ndk1::vector<char,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::vector<char,std::__ndk1::allocator<char>>>>
           *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x18);
  *(undefined ***)this = &PTR____shared_ptr_emplace_016f42d0;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x20) = pvVar1;
    operator_delete(pvVar1);
  }
  __shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  return;
}

