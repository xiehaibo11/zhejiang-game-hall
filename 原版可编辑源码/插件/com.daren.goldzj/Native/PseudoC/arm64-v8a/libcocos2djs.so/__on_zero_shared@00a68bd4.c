
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
                    /* catch() { ... } // from try @ 00a68a40 with catch @ 00a68bf0 */
                    /* catch() { ... } // from try @ 00a68a34 with catch @ 00a68bf4 */
                    /* catch() { ... } // from try @ 00a68a14 with catch @ 00a68bf8 */
    operator_delete(this_00);
    return;
  }
                    /* catch() { ... } // from try @ 00a68a4c with catch @ 00a68c08 */
  return;
}

