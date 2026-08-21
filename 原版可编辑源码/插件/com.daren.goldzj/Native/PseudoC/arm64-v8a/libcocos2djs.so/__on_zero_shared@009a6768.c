
/* std::__ndk1::__shared_ptr_pointer<cocos2d::network::DownloadTask*,
   std::__ndk1::default_delete<cocos2d::network::DownloadTask>,
   std::__ndk1::allocator<cocos2d::network::DownloadTask> >::__on_zero_shared() */

void __thiscall
std::__ndk1::
__shared_ptr_pointer<cocos2d::network::DownloadTask*,std::__ndk1::default_delete<cocos2d::network::DownloadTask>,std::__ndk1::allocator<cocos2d::network::DownloadTask>>
::__on_zero_shared(__shared_ptr_pointer<cocos2d::network::DownloadTask*,std::__ndk1::default_delete<cocos2d::network::DownloadTask>,std::__ndk1::allocator<cocos2d::network::DownloadTask>>
                   *this)

{
  if (*(long **)(this + 0x18) != (long *)0x0) {
                    /* catch() { ... } // from try @ 009a65b4 with catch @ 009a6774 */
                    /* WARNING: Could not recover jumptable at 0x009a6778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x18) + 8))();
    return;
  }
  return;
}

