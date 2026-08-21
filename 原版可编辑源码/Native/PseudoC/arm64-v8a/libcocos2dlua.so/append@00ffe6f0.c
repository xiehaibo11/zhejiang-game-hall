
/* cocos2d::__String::append(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::__String::append(__String *this,basic_string *param_1)

{
  ulong uVar1;
  basic_string *pbVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  pbVar2 = *(basic_string **)(param_1 + 0x10);
                    /* try { // try from 00ffe6fc to 010fe833 has its CatchHandler @ 00ffe6fc
                       catch() { ... } // from try @ 00ffe6fc with catch @ 00ffe6fc
                       catch() { ... } // from try @ 00ffe83c with catch @ 00ffe6fc */
  if (((byte)*param_1 & 1) == 0) {
    pbVar2 = param_1 + 1;
    uVar1 = (ulong)((byte)*param_1 >> 1);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x30),(char *)pbVar2,uVar1);
  return;
}

