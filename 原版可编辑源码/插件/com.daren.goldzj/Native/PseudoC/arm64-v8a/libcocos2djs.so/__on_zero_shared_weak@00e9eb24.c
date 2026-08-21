
/* std::__ndk1::__shared_ptr_emplace<v8::platform::DefaultForegroundTaskRunner,
   std::__ndk1::allocator<v8::platform::DefaultForegroundTaskRunner> >::__on_zero_shared_weak() */

void __thiscall
std::__ndk1::
__shared_ptr_emplace<v8::platform::DefaultForegroundTaskRunner,std::__ndk1::allocator<v8::platform::DefaultForegroundTaskRunner>>
::__on_zero_shared_weak
          (__shared_ptr_emplace<v8::platform::DefaultForegroundTaskRunner,std::__ndk1::allocator<v8::platform::DefaultForegroundTaskRunner>>
           *this)

{
  operator_delete(this);
  return;
}

