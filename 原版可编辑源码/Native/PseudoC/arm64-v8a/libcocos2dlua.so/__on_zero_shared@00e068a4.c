
/* std::__ndk1::__shared_ptr_pointer<cocos2d::network::Downloader*,
   std::__ndk1::default_delete<cocos2d::network::Downloader>,
   std::__ndk1::allocator<cocos2d::network::Downloader> >::__on_zero_shared() */

void __thiscall
std::__ndk1::
__shared_ptr_pointer<cocos2d::network::Downloader*,std::__ndk1::default_delete<cocos2d::network::Downloader>,std::__ndk1::allocator<cocos2d::network::Downloader>>
::__on_zero_shared(__shared_ptr_pointer<cocos2d::network::Downloader*,std::__ndk1::default_delete<cocos2d::network::Downloader>,std::__ndk1::allocator<cocos2d::network::Downloader>>
                   *this)

{
  Downloader *this_00;
  
  this_00 = *(Downloader **)(this + 0x18);
  if (this_00 != (Downloader *)0x0) {
    cocos2d::network::Downloader::~Downloader(this_00);
    operator_delete(this_00);
    return;
  }
  return;
}

