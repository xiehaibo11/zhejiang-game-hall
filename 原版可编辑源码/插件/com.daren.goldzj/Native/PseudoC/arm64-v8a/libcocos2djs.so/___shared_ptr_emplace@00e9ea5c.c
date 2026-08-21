
/* std::__ndk1::__shared_ptr_emplace<v8::platform::DefaultWorkerThreadsTaskRunner,
   std::__ndk1::allocator<v8::platform::DefaultWorkerThreadsTaskRunner> >::~__shared_ptr_emplace()
    */

void __thiscall
std::__ndk1::
__shared_ptr_emplace<v8::platform::DefaultWorkerThreadsTaskRunner,std::__ndk1::allocator<v8::platform::DefaultWorkerThreadsTaskRunner>>
::~__shared_ptr_emplace
          (__shared_ptr_emplace<v8::platform::DefaultWorkerThreadsTaskRunner,std::__ndk1::allocator<v8::platform::DefaultWorkerThreadsTaskRunner>>
           *this)

{
  *(undefined ***)this = &PTR____shared_ptr_emplace_01c98110;
  v8::platform::DefaultWorkerThreadsTaskRunner::~DefaultWorkerThreadsTaskRunner
            ((DefaultWorkerThreadsTaskRunner *)(this + 0x18));
  __shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  operator_delete(this);
  return;
}

