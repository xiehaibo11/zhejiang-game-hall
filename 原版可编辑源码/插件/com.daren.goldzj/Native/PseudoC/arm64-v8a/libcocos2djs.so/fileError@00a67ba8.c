
/* cocos2d::extension::AssetsManagerEx::fileError(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, int, int) */

void __thiscall
cocos2d::extension::AssetsManagerEx::fileError
          (AssetsManagerEx *this,basic_string *param_1,basic_string *param_2,int param_3,int param_4
          )

{
  long lVar1;
  long lVar2;
  undefined4 local_a8 [4];
  void *local_98;
  byte local_90;
  void *local_80;
  basic_string local_78 [16];
  void *local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>>>
                      *)(this + 0x100),param_1);
  if (lVar2 != 0) {
                    /* try { // try from 00a67bf8 to 00b67cdb has its CatchHandler @ 00a67a98 */
    *(int *)(this + 0x1c4) = *(int *)(this + 0x1c4) + -1;
    DownloadUnit::DownloadUnit((DownloadUnit *)local_a8,(DownloadUnit *)(lVar2 + 0x28));
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>>>
    ::
    __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&,cocos2d::extension::DownloadUnit&>
              ((basic_string *)(this + 0x128),local_78,(DownloadUnit *)local_78);
    if (((byte)local_78[0] & 1) != 0) {
      operator_delete(local_68);
    }
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
    if (((byte)local_a8[0]._0_1_ & 1) != 0) {
      operator_delete(local_98);
    }
  }
  dispatchUpdateEvent(this,7,param_1,param_2,param_3,param_4);
  local_a8[0] = 0;
                    /* catch() { ... } // from try @ 00a67b18 with catch @ 00a67c6c */
  Manifest::setAssetDownloadState(*(Manifest **)(this + 0xe8),param_1,(DownloadState *)local_a8);
                    /* catch() { ... } // from try @ 00a67b0c with catch @ 00a67c70 */
                    /* catch() { ... } // from try @ 00a67aec with catch @ 00a67c74 */
  *(uint *)(this + 0x170) =
       *(int *)(this + 0x170) - 1U & ((int)(*(int *)(this + 0x170) - 1U) >> 0x1f ^ 0xffffffffU);
                    /* catch() { ... } // from try @ 00a67b24 with catch @ 00a67c84 */
  queueDowload(this);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

