
/* std::__ndk1::__shared_ptr_pointer<cocos2d::ThreadPool*,
   std::__ndk1::default_delete<cocos2d::ThreadPool>, std::__ndk1::allocator<cocos2d::ThreadPool>
   >::~__shared_ptr_pointer() */

void __thiscall
std::__ndk1::
__shared_ptr_pointer<cocos2d::ThreadPool*,std::__ndk1::default_delete<cocos2d::ThreadPool>,std::__ndk1::allocator<cocos2d::ThreadPool>>
::~__shared_ptr_pointer
          (__shared_ptr_pointer<cocos2d::ThreadPool*,std::__ndk1::default_delete<cocos2d::ThreadPool>,std::__ndk1::allocator<cocos2d::ThreadPool>>
           *this)

{
  __shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  operator_delete(this);
  return;
}

