
/* std::__ndk1::__shared_ptr_emplace<cocos2d::experimental::PcmData,
   std::__ndk1::allocator<cocos2d::experimental::PcmData> >::~__shared_ptr_emplace() */

void __thiscall
std::__ndk1::
__shared_ptr_emplace<cocos2d::experimental::PcmData,std::__ndk1::allocator<cocos2d::experimental::PcmData>>
::~__shared_ptr_emplace
          (__shared_ptr_emplace<cocos2d::experimental::PcmData,std::__ndk1::allocator<cocos2d::experimental::PcmData>>
           *this)

{
  *(undefined ***)this = &PTR____shared_ptr_emplace_016f3ab8;
  cocos2d::experimental::PcmData::~PcmData((PcmData *)(this + 0x18));
  __shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  operator_delete(this);
  return;
}

