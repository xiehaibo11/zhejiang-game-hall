
/* cocos2d::extension::Manifest::parseJSONString(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void __thiscall
cocos2d::extension::Manifest::parseJSONString
          (Manifest *this,basic_string *param_1,basic_string *param_2)

{
  ulong uVar1;
  basic_string *pbVar2;
  
  loadJsonFromString(this,param_1);
  if ((*(int *)(this + 0x180) == 0) && (*(short *)(this + 0x13e) == 3)) {
    if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        (this + 0x18) !=
        (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_2) {
      uVar1 = *(ulong *)(param_2 + 8);
      pbVar2 = *(basic_string **)(param_2 + 0x10);
                    /* catch() { ... } // from try @ 00a54fd4 with catch @ 00a550d0 */
      if (((byte)*param_2 & 1) == 0) {
        pbVar2 = param_2 + 1;
        uVar1 = (ulong)((byte)*param_2 >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x18),(char *)pbVar2,uVar1);
    }
                    /* try { // try from 00a550ec to 00b5513b has its CatchHandler @ 00a550ec
                       catch() { ... } // from try @ 00a550ec with catch @ 00a550ec
                       catch() { ... } // from try @ 00a551f4 with catch @ 00a550ec */
    loadManifest(this,(GenericDocument *)(this + 0x128));
    return;
  }
  return;
}

