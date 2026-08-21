
/* std::__ndk1::__shared_ptr_emplace<v8::base::Semaphore,
   std::__ndk1::allocator<v8::base::Semaphore> >::~__shared_ptr_emplace() */

void __thiscall
std::__ndk1::__shared_ptr_emplace<v8::base::Semaphore,std::__ndk1::allocator<v8::base::Semaphore>>::
~__shared_ptr_emplace
          (__shared_ptr_emplace<v8::base::Semaphore,std::__ndk1::allocator<v8::base::Semaphore>>
           *this)

{
  *(undefined ***)this = &PTR____shared_ptr_emplace_01cc99f8;
  v8::base::Semaphore::~Semaphore((Semaphore *)(this + 0x18));
  __shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  return;
}

