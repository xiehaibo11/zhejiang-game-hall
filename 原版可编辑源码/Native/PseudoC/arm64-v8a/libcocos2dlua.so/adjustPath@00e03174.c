
/* cocos2d::extension::AssetsManagerEx::adjustPath(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) */

AssetsManagerEx * __thiscall
cocos2d::extension::AssetsManagerEx::adjustPath(AssetsManagerEx *this,basic_string *param_1)

{
  ulong uVar1;
  basic_string bVar2;
  basic_string *pbVar3;
  
                    /* catch() { ... } // from try @ 00e02fac with catch @ 00e03174 */
                    /* catch() { ... } // from try @ 00e02f44 with catch @ 00e03178 */
                    /* catch() { ... } // from try @ 00e030a4 with catch @ 00e0317c */
  bVar2 = *param_1;
                    /* catch() { ... } // from try @ 00e03094 with catch @ 00e03180 */
  uVar1 = (ulong)((byte)bVar2 >> 1);
  if (((byte)bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 != 0) {
    pbVar3 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar3 = param_1 + 1;
    }
    if (pbVar3[uVar1 - 1] != (basic_string)0x2f) {
                    /* catch() { ... } // from try @ 00e03088 with catch @ 00e031bc */
                    /* catch() { ... } // from try @ 00e0307c with catch @ 00e031c0 */
                    /* catch() { ... } // from try @ 00e03020 with catch @ 00e031c4 */
      this = (AssetsManagerEx *)
             std::__ndk1::
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                       ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                         *)param_1,"/",1);
    }
  }
                    /* catch() { ... } // from try @ 00e02f98 with catch @ 00e031c8 */
                    /* catch() { ... } // from try @ 00e02f10 with catch @ 00e031cc */
  return this;
}

