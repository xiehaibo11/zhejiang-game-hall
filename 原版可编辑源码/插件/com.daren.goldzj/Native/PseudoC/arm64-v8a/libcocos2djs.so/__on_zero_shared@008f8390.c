
/* std::__ndk1::__shared_ptr_pointer<cocos2d::ThreadPool*,
   std::__ndk1::default_delete<cocos2d::ThreadPool>, std::__ndk1::allocator<cocos2d::ThreadPool>
   >::__on_zero_shared() */

void __thiscall
std::__ndk1::
__shared_ptr_pointer<cocos2d::ThreadPool*,std::__ndk1::default_delete<cocos2d::ThreadPool>,std::__ndk1::allocator<cocos2d::ThreadPool>>
::__on_zero_shared(__shared_ptr_pointer<cocos2d::ThreadPool*,std::__ndk1::default_delete<cocos2d::ThreadPool>,std::__ndk1::allocator<cocos2d::ThreadPool>>
                   *this)

{
  ThreadPool *this_00;
  
  this_00 = *(ThreadPool **)(this + 0x18);
  if (this_00 != (ThreadPool *)0x0) {
    cocos2d::ThreadPool::~ThreadPool(this_00);
    operator_delete(this_00);
    return;
  }
  return;
}

