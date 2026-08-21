
/* cocos2d::ui::TextBMFont::TextBMFont() */

void __thiscall cocos2d::ui::TextBMFont::TextBMFont(TextBMFont *this)

{
  Widget::Widget((Widget *)this);
  *(undefined8 *)(this + 0x4f0) = 0;
  *(undefined ***)this = &PTR__TextBMFont_016df9c0;
  *(undefined ***)(this + 0x318) = &PTR__TextBMFont_016e0050;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x4f8),"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x510),"");
  this[0x528] = (TextBMFont)0x1;
  return;
}

