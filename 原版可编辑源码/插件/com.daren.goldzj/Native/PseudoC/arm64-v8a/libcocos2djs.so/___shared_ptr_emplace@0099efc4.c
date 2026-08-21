
/* std::__ndk1::__shared_ptr_emplace<std::__ndk1::atomic<bool>,
   std::__ndk1::allocator<std::__ndk1::atomic<bool> > >::~__shared_ptr_emplace() */

void __thiscall
std::__ndk1::
__shared_ptr_emplace<std::__ndk1::atomic<bool>,std::__ndk1::allocator<std::__ndk1::atomic<bool>>>::
~__shared_ptr_emplace
          (__shared_ptr_emplace<std::__ndk1::atomic<bool>,std::__ndk1::allocator<std::__ndk1::atomic<bool>>>
           *this)

{
                    /* try { // try from 0099efc4 to 00a9f017 has its CatchHandler @ 0099efc4
                       catch() { ... } // from try @ 0099efc4 with catch @ 0099efc4
                       catch() { ... } // from try @ 0099f188 with catch @ 0099efc4 */
  __shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  operator_delete(this);
  return;
}

