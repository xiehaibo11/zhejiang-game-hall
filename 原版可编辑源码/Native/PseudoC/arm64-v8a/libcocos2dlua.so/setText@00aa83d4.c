
/* fairygui::FUIRichText::setText(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall fairygui::FUIRichText::setText(FUIRichText *this,basic_string *param_1)

{
  ulong uVar1;
  basic_string *pbVar2;
  
  *(undefined2 *)(this + 0x340) = 0x101;
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x3b8) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
                    /* try { // try from 00aa83f8 to 00ba842b has its CatchHandler @ 00aa84f8 */
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x3b8),(char *)pbVar2,uVar1);
  }
  return;
}

