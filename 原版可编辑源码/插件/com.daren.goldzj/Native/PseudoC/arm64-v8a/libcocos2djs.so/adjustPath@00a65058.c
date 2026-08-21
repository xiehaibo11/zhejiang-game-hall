
/* cocos2d::extension::AssetsManagerEx::adjustPath(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) */

AssetsManagerEx * __thiscall
cocos2d::extension::AssetsManagerEx::adjustPath(AssetsManagerEx *this,basic_string *param_1)

{
  ulong uVar1;
  basic_string bVar2;
  basic_string *pbVar3;
  
  bVar2 = *param_1;
                    /* try { // try from 00a65060 to 00b65067 has its CatchHandler @ 00a65068 */
  uVar1 = (ulong)((byte)bVar2 >> 1);
                    /* catch() { ... } // from try @ 00a65060 with catch @ 00a65068
                       try { // try from 00a65068 to 00b651db has its CatchHandler @ 00a64b7c */
  if (((byte)bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
                    /* catch() { ... } // from try @ 00a64cb0 with catch @ 00a6506c */
  if (uVar1 != 0) {
    pbVar3 = *(basic_string **)(param_1 + 0x10);
                    /* catch() { ... } // from try @ 00a64ca8 with catch @ 00a65074 */
    if (((byte)bVar2 & 1) == 0) {
      pbVar3 = param_1 + 1;
    }
                    /* catch() { ... } // from try @ 00a64ca0 with catch @ 00a6507c */
                    /* catch() { ... } // from try @ 00a64c98 with catch @ 00a65084 */
    if (pbVar3[uVar1 - 1] != (basic_string)0x2f) {
                    /* catch() { ... } // from try @ 00a64c90 with catch @ 00a6508c */
                    /* catch() { ... } // from try @ 00a64c74 with catch @ 00a65090 */
                    /* catch() { ... } // from try @ 00a64c64 with catch @ 00a65094 */
                    /* catch() { ... } // from try @ 00a64e94 with catch @ 00a65098 */
      this = (AssetsManagerEx *)
             std::__ndk1::
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                       ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                         *)param_1,"/",1);
    }
  }
                    /* catch() { ... } // from try @ 00a64ef4 with catch @ 00a650b0 */
  return this;
}

