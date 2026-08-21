
/* std::__ndk1::__shared_ptr_pointer<cocos2d::ThreadPool*,
   std::__ndk1::default_delete<cocos2d::ThreadPool>, std::__ndk1::allocator<cocos2d::ThreadPool>
   >::__on_zero_shared_weak() */

void __thiscall
std::__ndk1::
__shared_ptr_pointer<cocos2d::ThreadPool*,std::__ndk1::default_delete<cocos2d::ThreadPool>,std::__ndk1::allocator<cocos2d::ThreadPool>>
::__on_zero_shared_weak
          (__shared_ptr_pointer<cocos2d::ThreadPool*,std::__ndk1::default_delete<cocos2d::ThreadPool>,std::__ndk1::allocator<cocos2d::ThreadPool>>
           *this)

{
  operator_delete(this);
  return;
}

