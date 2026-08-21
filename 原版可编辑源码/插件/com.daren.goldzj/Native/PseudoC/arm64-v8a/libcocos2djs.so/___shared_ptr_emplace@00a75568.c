
/* std::__ndk1::__shared_ptr_emplace<cocos2d::PcmData, std::__ndk1::allocator<cocos2d::PcmData>
   >::~__shared_ptr_emplace() */

void __thiscall
std::__ndk1::__shared_ptr_emplace<cocos2d::PcmData,std::__ndk1::allocator<cocos2d::PcmData>>::
~__shared_ptr_emplace
          (__shared_ptr_emplace<cocos2d::PcmData,std::__ndk1::allocator<cocos2d::PcmData>> *this)

{
                    /* try { // try from 00a75570 to 00b7557b has its CatchHandler @ 00a75830 */
                    /* try { // try from 00a75584 to 00b7558f has its CatchHandler @ 00a757fc */
  *(undefined ***)this = &PTR____shared_ptr_emplace_01c6ee30;
  cocos2d::PcmData::~PcmData((PcmData *)(this + 0x18));
  __shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  return;
}

