
/* cocos2d::Properties::setDirectoryPath(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const*) */

void __thiscall cocos2d::Properties::setDirectoryPath(Properties *this,basic_string *param_1)

{
  ulong uVar1;
  basic_string *pbVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar3;
  
  pbVar3 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
            (this + 0xa0);
                    /* try { // try from 00fad44c to 010ad453 has its CatchHandler @ 00fad4c8 */
  if (param_1 == (basic_string *)0x0) {
    if (pbVar3 != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                  0x0) {
      if (((byte)*pbVar3 & 1) != 0) {
        operator_delete(*(void **)(pbVar3 + 0x10));
      }
      operator_delete(pbVar3);
    }
    *(undefined8 *)(this + 0xa0) = 0;
  }
  else {
                    /* try { // try from 00fad454 to 010ad517 has its CatchHandler @ 00fad238 */
    if (pbVar3 == (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                  0x0) {
      pbVar3 = operator_new(0x18,(nothrow_t *)&std::nothrow);
      if (pbVar3 != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)0x0) {
                    /* catch() { ... } // from try @ 00fad44c with catch @ 00fad4c8 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(pbVar3,param_1);
      }
      *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
       (this + 0xa0) = pbVar3;
    }
    else if (pbVar3 != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)param_1) {
      uVar1 = *(ulong *)(param_1 + 8);
      pbVar2 = *(basic_string **)(param_1 + 0x10);
      if (((byte)*param_1 & 1) == 0) {
        pbVar2 = param_1 + 1;
        uVar1 = (ulong)((byte)*param_1 >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(pbVar3,(char *)pbVar2,uVar1);
    }
  }
                    /* catch() { ... } // from try @ 00fad3c0 with catch @ 00fad4d8 */
  return;
}

