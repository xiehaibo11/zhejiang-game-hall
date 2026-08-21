
/* cocos2d::extension::AssetsManagerEx::checkUpdate() */

void __thiscall cocos2d::extension::AssetsManagerEx::checkUpdate(AssetsManagerEx *this)

{
  long lVar1;
  ulong uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_68 [16];
  void *local_58;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
                    /* try { // try from 00e04f8c to 00f0501f has its CatchHandler @ 00e04ee8 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (this[0x118] != (AssetsManagerEx)0x0) goto switchD_00e04fec_caseD_2;
  if (this[0x240] == (AssetsManagerEx)0x0) {
                    /* catch() { ... } // from try @ 00e04f68 with catch @ 00e04ffc */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_50,"");
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_68,"");
    dispatchUpdateEvent(this,0,local_50,local_68,0,0);
    goto LAB_00e050f8;
  }
  uVar2 = Manifest::isLoaded(*(Manifest **)(this + 0x100));
  if ((uVar2 & 1) == 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_50,"");
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_68,"");
    dispatchUpdateEvent(this,0,local_50,local_68,0,0);
    goto LAB_00e050f8;
  }
  this[0x118] = (AssetsManagerEx)0x1;
  switch(*(undefined4 *)(this + 0x50)) {
  case 0:
  case 1:
                    /* catch() { ... } // from try @ 00e04f50 with catch @ 00e04ff4 */
    downloadVersion(this);
  default:
    goto switchD_00e04fec_caseD_2;
  case 7:
  case 0xb:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_50,"");
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_68,"");
                    /* try { // try from 00e050b0 to 00f050e3 has its CatchHandler @ 00e050b0
                       catch() { ... } // from try @ 00e050b0 with catch @ 00e050b0
                       catch() { ... } // from try @ 00e05120 with catch @ 00e050b0 */
    dispatchUpdateEvent(this,3,local_50,local_68,0,0);
    break;
  case 10:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_50,"");
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_68,"");
                    /* try { // try from 00e050e4 to 00f050f3 has its CatchHandler @ 00e05160 */
    dispatchUpdateEvent(this,4,local_50,local_68,0,0);
  }
LAB_00e050f8:
                    /* try { // try from 00e050fc to 00f0511f has its CatchHandler @ 00e05168 */
  if (((byte)local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
switchD_00e04fec_caseD_2:
                    /* try { // try from 00e05120 to 00f0518b has its CatchHandler @ 00e050b0 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

