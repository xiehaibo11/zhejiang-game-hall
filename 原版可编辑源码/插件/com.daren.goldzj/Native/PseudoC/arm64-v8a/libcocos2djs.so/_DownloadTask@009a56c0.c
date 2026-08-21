
/* cocos2d::network::DownloadTask::~DownloadTask() */

void __thiscall cocos2d::network::DownloadTask::~DownloadTask(DownloadTask *this)

{
  DownloadTask DVar1;
  long *plVar2;
  
                    /* catch() { ... } // from try @ 009a540c with catch @ 009a56c0 */
                    /* catch() { ... } // from try @ 009a5444 with catch @ 009a56d0
                       catch() { ... } // from try @ 009a5590 with catch @ 009a56d0
                       catch() { ... } // from try @ 009a5698 with catch @ 009a56d0 */
  plVar2 = *(long **)(this + 0x68);
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined ***)this = &PTR__DownloadTask_01c6a740;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
             *)(this + 0x50),*(__tree_node **)(this + 0x58));
  if (((byte)this[0x38] & 1) == 0) {
    DVar1 = this[0x20];
  }
  else {
                    /* try { // try from 009a5728 to 00aa577f has its CatchHandler @ 009a5728
                       catch() { ... } // from try @ 009a5728 with catch @ 009a5728
                       catch() { ... } // from try @ 009a58e8 with catch @ 009a5728 */
    operator_delete(*(void **)(this + 0x48));
    DVar1 = this[0x20];
  }
  if (((byte)DVar1 & 1) == 0) {
    DVar1 = this[8];
  }
  else {
    operator_delete(*(void **)(this + 0x30));
    DVar1 = this[8];
  }
  if (((byte)DVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x18));
  return;
}

