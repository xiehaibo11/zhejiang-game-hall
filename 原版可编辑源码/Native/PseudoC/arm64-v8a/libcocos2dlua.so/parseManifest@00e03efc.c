
/* cocos2d::extension::AssetsManagerEx::parseManifest() */

void __thiscall cocos2d::extension::AssetsManagerEx::parseManifest(AssetsManagerEx *this)

{
  long lVar1;
  ulong uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_68 [16];
  void *local_58;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)(this + 0x50) == 6) {
    Manifest::parse(*(Manifest **)(this + 0x110),(basic_string *)(this + 0xd0));
    uVar2 = Manifest::isLoaded(*(Manifest **)(this + 0x110));
    if ((uVar2 & 1) == 0) {
                    /* try { // try from 00e03fd8 to 00f0400b has its CatchHandler @ 00e040c0 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_50,"");
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_68,"");
                    /* try { // try from 00e0400c to 00f040e7 has its CatchHandler @ 00e03e50 */
      dispatchUpdateEvent(this,2,local_50,local_68,0,0);
      if (((byte)local_68[0] & 1) != 0) {
        operator_delete(local_58);
      }
      if (((byte)local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
      *(undefined4 *)(this + 0x50) = 0;
    }
    else {
      uVar2 = Manifest::versionGreater
                        (*(Manifest **)(this + 0x100),*(Manifest **)(this + 0x110),this + 0x1e0);
      if ((uVar2 & 1) == 0) {
        *(undefined4 *)(this + 0x50) = 7;
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(local_50,"");
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(local_68,"");
        dispatchUpdateEvent(this,3,local_50,local_68,0,0);
        if (((byte)local_68[0] & 1) != 0) {
          operator_delete(local_58);
        }
        if (((byte)local_50[0] & 1) != 0) {
          operator_delete(local_40);
        }
                    /* catch() { ... } // from try @ 00e03f5c with catch @ 00e040bc */
                    /* catch() { ... } // from try @ 00e03fd8 with catch @ 00e040c0 */
                    /* catch() { ... } // from try @ 00e03ef4 with catch @ 00e040c4
                       catch() { ... } // from try @ 00e03fa0 with catch @ 00e040c4 */
        if (this[0x118] == (AssetsManagerEx)0x2) {
                    /* catch() { ... } // from try @ 00e03e8c with catch @ 00e040c8 */
                    /* catch() { ... } // from try @ 00e03e9c with catch @ 00e040cc
                       catch() { ... } // from try @ 00e03f70 with catch @ 00e040cc */
          startUpdate();
        }
      }
      else {
                    /* try { // try from 00e03f5c to 00f03f63 has its CatchHandler @ 00e040bc */
        *(undefined4 *)(this + 0x50) = 10;
                    /* try { // try from 00e03f70 to 00f03f93 has its CatchHandler @ 00e040cc */
        (**(code **)(**(long **)(this + 0x48) + 0x168))(*(long **)(this + 0x48),this + 0x88);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(local_50,"");
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(local_68,"");
                    /* try { // try from 00e03fa0 to 00f03fa7 has its CatchHandler @ 00e040c4 */
        dispatchUpdateEvent(this,4,local_50,local_68,0,0);
        if (((byte)local_68[0] & 1) != 0) {
          operator_delete(local_58);
        }
        if (((byte)local_50[0] & 1) != 0) {
          operator_delete(local_40);
        }
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

