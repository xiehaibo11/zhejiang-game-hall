
/* cocos2d::ui::TextBMFont::copySpecialProperties(cocos2d::ui::Widget*) */

void __thiscall cocos2d::ui::TextBMFont::copySpecialProperties(TextBMFont *this,Widget *param_1)

{
  ulong uVar1;
  char *pcVar2;
  byte bVar3;
  long lVar4;
  
  if ((param_1 != (Widget *)0x0) &&
     (lVar4 = __dynamic_cast(param_1,&Widget::typeinfo,&typeinfo,0), lVar4 != 0)) {
    bVar3 = *(byte *)(lVar4 + 0x4f8);
    uVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar1 = *(ulong *)(lVar4 + 0x500);
    }
    if (uVar1 != 0) {
      if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          (this + 0x4f8) !=
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          (lVar4 + 0x4f8)) {
        pcVar2 = (char *)(lVar4 + 0x4f9);
        if ((bVar3 & 1) != 0) {
          pcVar2 = *(char **)(lVar4 + 0x508);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (this + 0x4f8),pcVar2,uVar1);
      }
      (**(code **)(**(long **)(this + 0x4f0) + 0x540))
                (0,*(long **)(this + 0x4f0),
                 (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (lVar4 + 0x4f8),&Vec2::ZERO);
                    /* try { // try from 00dca288 to 00eca28f has its CatchHandler @ 00dca398 */
      (**(code **)(**(long **)(this + 0x4f0) + 0x168))();
      Widget::updateContentSizeWithTextureSize((Size *)this);
      this[0x528] = (TextBMFont)0x1;
    }
                    /* try { // try from 00dca2b0 to 00eca2f7 has its CatchHandler @ 00dca3bc */
    setString(this,(basic_string *)(lVar4 + 0x510));
    return;
  }
  return;
}

