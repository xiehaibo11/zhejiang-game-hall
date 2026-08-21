
/* std::__ndk1::__shared_ptr_emplace<cocos2d::AssetFd, std::__ndk1::allocator<cocos2d::AssetFd>
   >::~__shared_ptr_emplace() */

void __thiscall
std::__ndk1::__shared_ptr_emplace<cocos2d::AssetFd,std::__ndk1::allocator<cocos2d::AssetFd>>::
~__shared_ptr_emplace
          (__shared_ptr_emplace<cocos2d::AssetFd,std::__ndk1::allocator<cocos2d::AssetFd>> *this)

{
  *(undefined ***)this = &PTR____shared_ptr_emplace_01c6f0d0;
  cocos2d::AssetFd::~AssetFd((AssetFd *)(this + 0x18));
  __shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
                    /* try { // try from 00a77b10 to 00b77b53 has its CatchHandler @ 00a77c38 */
  operator_delete(this);
  return;
}

