
/* std::__ndk1::__shared_ptr_pointer<cocos2d::network::DownloadTask*,
   std::__ndk1::default_delete<cocos2d::network::DownloadTask>,
   std::__ndk1::allocator<cocos2d::network::DownloadTask> >::~__shared_ptr_pointer() */

void __thiscall
std::__ndk1::
__shared_ptr_pointer<cocos2d::network::DownloadTask*,std::__ndk1::default_delete<cocos2d::network::DownloadTask>,std::__ndk1::allocator<cocos2d::network::DownloadTask>>
::~__shared_ptr_pointer
          (__shared_ptr_pointer<cocos2d::network::DownloadTask*,std::__ndk1::default_delete<cocos2d::network::DownloadTask>,std::__ndk1::allocator<cocos2d::network::DownloadTask>>
           *this)

{
  __shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
                    /* catch() { ... } // from try @ 009a65a8 with catch @ 009a675c */
                    /* catch() { ... } // from try @ 009a659c with catch @ 009a6760 */
                    /* catch() { ... } // from try @ 009a657c with catch @ 009a6764 */
  operator_delete(this);
  return;
}

