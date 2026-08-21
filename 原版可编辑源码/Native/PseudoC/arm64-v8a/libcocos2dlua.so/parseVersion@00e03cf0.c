
/* cocos2d::extension::AssetsManagerEx::parseVersion() */

void __thiscall cocos2d::extension::AssetsManagerEx::parseVersion(AssetsManagerEx *this)

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
  if (*(int *)(this + 0x50) != 3) goto LAB_00e03e78;
  Manifest::parseVersion(*(Manifest **)(this + 0x110),(basic_string *)(this + 0xa0));
  uVar2 = Manifest::isVersionLoaded(*(Manifest **)(this + 0x110));
  if ((uVar2 & 1) == 0) {
LAB_00e03e18:
    *(undefined4 *)(this + 0x50) = 4;
    downloadManifest(this);
                    /* catch() { ... } // from try @ 00e03cd0 with catch @ 00e03e28 */
  }
  else {
    uVar2 = Manifest::versionGreater
                      (*(Manifest **)(this + 0x100),*(Manifest **)(this + 0x110),this + 0x1e0);
    if ((uVar2 & 1) == 0) {
      *(undefined4 *)(this + 0x50) = 7;
      if (this[0x118] == (AssetsManagerEx)0x2) {
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
        goto LAB_00e03e18;
      }
                    /* catch() { ... } // from try @ 00e03d54 with catch @ 00e03e2c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_50,"");
                    /* catch() { ... } // from try @ 00e03c14 with catch @ 00e03e30 */
                    /* catch() { ... } // from try @ 00e03c28 with catch @ 00e03e34
                       catch() { ... } // from try @ 00e03cec with catch @ 00e03e34 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_68,"");
                    /* try { // try from 00e03e50 to 00f03e8b has its CatchHandler @ 00e03e50
                       catch() { ... } // from try @ 00e03e50 with catch @ 00e03e50
                       catch() { ... } // from try @ 00e0400c with catch @ 00e03e50 */
      dispatchUpdateEvent(this,3,local_50,local_68,0,0);
    }
    else {
                    /* try { // try from 00e03d54 to 00f03d87 has its CatchHandler @ 00e03e2c */
      *(undefined4 *)(this + 0x50) = 10;
      (**(code **)(**(long **)(this + 0x48) + 0x168))(*(long **)(this + 0x48),this + 0x88);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_50,"");
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_68,"");
                    /* try { // try from 00e03d88 to 00f03e4f has its CatchHandler @ 00e03bdc */
      dispatchUpdateEvent(this,4,local_50,local_68,0,0);
    }
    if (((byte)local_68[0] & 1) != 0) {
      operator_delete(local_58);
    }
    if (((byte)local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
LAB_00e03e78:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00e03e8c to 00f03e97 has its CatchHandler @ 00e040c8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00e03e9c to 00f03ee7 has its CatchHandler @ 00e040cc */
  __stack_chk_fail();
}

