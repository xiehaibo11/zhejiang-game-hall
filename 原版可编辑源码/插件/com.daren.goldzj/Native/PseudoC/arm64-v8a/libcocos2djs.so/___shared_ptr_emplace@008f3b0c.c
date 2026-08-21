
/* std::__ndk1::__shared_ptr_emplace<cocos2d::network::Downloader,
   std::__ndk1::allocator<cocos2d::network::Downloader> >::~__shared_ptr_emplace() */

void __thiscall
std::__ndk1::
__shared_ptr_emplace<cocos2d::network::Downloader,std::__ndk1::allocator<cocos2d::network::Downloader>>
::~__shared_ptr_emplace
          (__shared_ptr_emplace<cocos2d::network::Downloader,std::__ndk1::allocator<cocos2d::network::Downloader>>
           *this)

{
  *(undefined ***)this = &PTR____shared_ptr_emplace_01c67b38;
  cocos2d::network::Downloader::~Downloader((Downloader *)(this + 0x20));
  __shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  return;
}

