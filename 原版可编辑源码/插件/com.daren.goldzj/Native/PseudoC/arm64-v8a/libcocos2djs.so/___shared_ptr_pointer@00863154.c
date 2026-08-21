
/* std::__ndk1::__shared_ptr_pointer<std::__ndk1::__empty_state<char>*,
   std::__ndk1::default_delete<std::__ndk1::__empty_state<char> >,
   std::__ndk1::allocator<std::__ndk1::__empty_state<char> > >::~__shared_ptr_pointer() */

void __thiscall
std::__ndk1::
__shared_ptr_pointer<std::__ndk1::__empty_state<char>*,std::__ndk1::default_delete<std::__ndk1::__empty_state<char>>,std::__ndk1::allocator<std::__ndk1::__empty_state<char>>>
::~__shared_ptr_pointer
          (__shared_ptr_pointer<std::__ndk1::__empty_state<char>*,std::__ndk1::default_delete<std::__ndk1::__empty_state<char>>,std::__ndk1::allocator<std::__ndk1::__empty_state<char>>>
           *this)

{
  __shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  operator_delete(this);
  return;
}

