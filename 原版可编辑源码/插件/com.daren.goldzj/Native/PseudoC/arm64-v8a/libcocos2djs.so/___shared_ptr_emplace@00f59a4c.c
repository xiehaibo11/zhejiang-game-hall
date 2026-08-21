
/* std::__ndk1::__shared_ptr_emplace<v8::internal::Counters,
   std::__ndk1::allocator<v8::internal::Counters> >::~__shared_ptr_emplace() */

void __thiscall
std::__ndk1::
__shared_ptr_emplace<v8::internal::Counters,std::__ndk1::allocator<v8::internal::Counters>>::
~__shared_ptr_emplace
          (__shared_ptr_emplace<v8::internal::Counters,std::__ndk1::allocator<v8::internal::Counters>>
           *this)

{
  *(undefined ***)this = &PTR____shared_ptr_emplace_01ca5f18;
  v8::internal::WorkerThreadRuntimeCallStats::~WorkerThreadRuntimeCallStats
            ((WorkerThreadRuntimeCallStats *)(this + 0xc940));
  v8::base::Mutex::~Mutex((Mutex *)(this + 0x2150));
  v8::base::Mutex::~Mutex((Mutex *)(this + 0x2110));
  v8::base::Mutex::~Mutex((Mutex *)(this + 0x20d0));
  v8::base::Mutex::~Mutex((Mutex *)(this + 0x2090));
  v8::base::Mutex::~Mutex((Mutex *)(this + 0x2050));
  if (*(__shared_weak_count **)(this + 0x20) != (__shared_weak_count *)0x0) {
    __shared_weak_count::__release_weak(*(__shared_weak_count **)(this + 0x20));
  }
  __shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  return;
}

