
/* std::__ndk1::__shared_ptr_emplace<cocos2d::AssetFd, std::__ndk1::allocator<cocos2d::AssetFd>
   >::__on_zero_shared_weak() */

void __thiscall
std::__ndk1::__shared_ptr_emplace<cocos2d::AssetFd,std::__ndk1::allocator<cocos2d::AssetFd>>::
__on_zero_shared_weak
          (__shared_ptr_emplace<cocos2d::AssetFd,std::__ndk1::allocator<cocos2d::AssetFd>> *this)

{
  operator_delete(this);
  return;
}

