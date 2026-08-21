
/* cocos2d::ui::TextBMFont::create(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

TextBMFont * cocos2d::ui::TextBMFont::create(basic_string *param_1,basic_string *param_2)

{
  basic_string bVar1;
  TextBMFont *this;
  ulong uVar2;
  basic_string *pbVar3;
  
                    /* try { // try from 00dc9c94 to 00ec9c9b has its CatchHandler @ 00dc9cc8 */
                    /* try { // try from 00dc9c9c to 00ec9ce3 has its CatchHandler @ 00dc9c60 */
  this = operator_new(0x530,(nothrow_t *)&std::nothrow);
  if (this != (TextBMFont *)0x0) {
    TextBMFont(this);
    uVar2 = (**(code **)(*(long *)this + 0x500))(this);
    if ((uVar2 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (TextBMFont *)0x0;
    }
    else {
                    /* catch() { ... } // from try @ 00dc9c94 with catch @ 00dc9cc8 */
      bVar1 = *param_2;
      uVar2 = (ulong)((byte)bVar1 >> 1);
      if (((byte)bVar1 & 1) != 0) {
        uVar2 = *(ulong *)(param_2 + 8);
      }
      if (uVar2 != 0) {
        if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x4f8) !=
            (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            param_2) {
          pbVar3 = *(basic_string **)(param_2 + 0x10);
          if (((byte)bVar1 & 1) == 0) {
            pbVar3 = param_2 + 1;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(this + 0x4f8),(char *)pbVar3,uVar2);
        }
        (**(code **)(**(long **)(this + 0x4f0) + 0x540))
                  (0,*(long **)(this + 0x4f0),param_2,&Vec2::ZERO);
        (**(code **)(**(long **)(this + 0x4f0) + 0x168))();
        Widget::updateContentSizeWithTextureSize((Size *)this);
        this[0x528] = (TextBMFont)0x1;
      }
      setString(this,param_1);
      Ref::autorelease((Ref *)this);
                    /* try { // try from 00dc9d54 to 00ec9e1b has its CatchHandler @ 00dc9d54
                       catch() { ... } // from try @ 00dc9d54 with catch @ 00dc9d54
                       catch() { ... } // from try @ 00dca33c with catch @ 00dc9d54 */
    }
  }
  return this;
}

