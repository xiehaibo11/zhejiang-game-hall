
/* cocos2d::ui::TextBMFont::setFntFile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::ui::TextBMFont::setFntFile(TextBMFont *this,basic_string *param_1)

{
  ulong uVar1;
  basic_string bVar2;
  basic_string *pbVar3;
  
  bVar2 = *param_1;
  uVar1 = (ulong)((byte)bVar2 >> 1);
  if (((byte)bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 != 0) {
    if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        (this + 0x4f8) !=
        (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
      pbVar3 = *(basic_string **)(param_1 + 0x10);
      if (((byte)bVar2 & 1) == 0) {
        pbVar3 = param_1 + 1;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x4f8),(char *)pbVar3,uVar1);
    }
    (**(code **)(**(long **)(this + 0x4f0) + 0x540))(0,*(long **)(this + 0x4f0),param_1,&Vec2::ZERO)
    ;
    (**(code **)(**(long **)(this + 0x4f0) + 0x168))();
                    /* try { // try from 00dc9e1c to 00ec9e2b has its CatchHandler @ 00dca3f0 */
    Widget::updateContentSizeWithTextureSize((Size *)this);
    this[0x528] = (TextBMFont)0x1;
  }
                    /* try { // try from 00dc9e30 to 00ec9e3f has its CatchHandler @ 00dca3e0 */
  return;
}

