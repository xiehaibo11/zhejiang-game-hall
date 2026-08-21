
/* std::__ndk1::__shared_ptr_emplace<v8::platform::DefaultForegroundTaskRunner,
   std::__ndk1::allocator<v8::platform::DefaultForegroundTaskRunner> >::~__shared_ptr_emplace() */

void __thiscall
std::__ndk1::
__shared_ptr_emplace<v8::platform::DefaultForegroundTaskRunner,std::__ndk1::allocator<v8::platform::DefaultForegroundTaskRunner>>
::~__shared_ptr_emplace
          (__shared_ptr_emplace<v8::platform::DefaultForegroundTaskRunner,std::__ndk1::allocator<v8::platform::DefaultForegroundTaskRunner>>
           *this)

{
  *(undefined ***)this = &PTR____shared_ptr_emplace_01c98148;
  v8::platform::DefaultForegroundTaskRunner::~DefaultForegroundTaskRunner
            ((DefaultForegroundTaskRunner *)(this + 0x18));
  __shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  return;
}

