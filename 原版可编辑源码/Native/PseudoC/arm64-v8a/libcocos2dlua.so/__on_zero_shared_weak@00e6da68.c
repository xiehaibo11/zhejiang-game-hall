
/* std::__ndk1::__shared_ptr_emplace<cocos2d::experimental::PcmData,
   std::__ndk1::allocator<cocos2d::experimental::PcmData> >::__on_zero_shared_weak() */

void __thiscall
std::__ndk1::
__shared_ptr_emplace<cocos2d::experimental::PcmData,std::__ndk1::allocator<cocos2d::experimental::PcmData>>
::__on_zero_shared_weak
          (__shared_ptr_emplace<cocos2d::experimental::PcmData,std::__ndk1::allocator<cocos2d::experimental::PcmData>>
           *this)

{
  operator_delete(this);
  return;
}

