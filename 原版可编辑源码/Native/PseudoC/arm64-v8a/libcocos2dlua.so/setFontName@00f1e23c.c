
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cocos2d::MenuItemFont::setFontName(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void cocos2d::MenuItemFont::setFontName(basic_string *param_1)

{
  ulong uVar1;
  basic_string *pbVar2;
  
                    /* try { // try from 00f1e254 to 0101e267 has its CatchHandler @ 00f1e29c */
  if (DAT_0178f860 == '\x01') {
    if ((_DAT_0178f848 & 1) == 0) {
      _DAT_0178f848 = 0;
                    /* try { // try from 00f1e268 to 0101e2af has its CatchHandler @ 00f1e1fc */
    }
    else {
      *DAT_0178f858 = 0;
      DAT_0178f850 = 0;
    }
  }
  if (param_1 != (basic_string *)&DAT_0178f848) {
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string **)(param_1 + 0x10);
                    /* catch() { ... } // from try @ 00f1e254 with catch @ 00f1e29c */
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &DAT_0178f848,(char *)pbVar2,uVar1);
  }
  DAT_0178f860 = 1;
  return;
}

