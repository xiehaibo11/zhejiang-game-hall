
/* std::__ndk1::__shared_ptr_pointer<cocos2d::network::Downloader*,
   std::__ndk1::default_delete<cocos2d::network::Downloader>,
   std::__ndk1::allocator<cocos2d::network::Downloader> >::__get_deleter(std::type_info const&)
   const */

__shared_ptr_pointer<cocos2d::network::Downloader*,std::__ndk1::default_delete<cocos2d::network::Downloader>,std::__ndk1::allocator<cocos2d::network::Downloader>>
* __thiscall
std::__ndk1::
__shared_ptr_pointer<cocos2d::network::Downloader*,std::__ndk1::default_delete<cocos2d::network::Downloader>,std::__ndk1::allocator<cocos2d::network::Downloader>>
::__get_deleter(__shared_ptr_pointer<cocos2d::network::Downloader*,std::__ndk1::default_delete<cocos2d::network::Downloader>,std::__ndk1::allocator<cocos2d::network::Downloader>>
                *this,type_info *param_1)

{
  __shared_ptr_pointer<cocos2d::network::Downloader*,std::__ndk1::default_delete<cocos2d::network::Downloader>,std::__ndk1::allocator<cocos2d::network::Downloader>>
  *p_Var1;
  
  p_Var1 = this + 0x18;
  if (*(char **)(param_1 + 8) != "NSt6__ndk114default_deleteIN7cocos2d7network10DownloaderEEE") {
    p_Var1 = (__shared_ptr_pointer<cocos2d::network::Downloader*,std::__ndk1::default_delete<cocos2d::network::Downloader>,std::__ndk1::allocator<cocos2d::network::Downloader>>
              *)0x0;
  }
  return p_Var1;
}

