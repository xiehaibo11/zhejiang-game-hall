
/* cocos2d::ui::Text::Text() */

void __thiscall cocos2d::ui::Text::Text(Text *this)

{
  undefined8 uVar1;
  
  Widget::Widget((Widget *)this);
  uVar1 = NEON_fmov(0x3f800000,4);
  this[0x4f8] = (Text)0x0;
  *(undefined ***)this = &PTR__Text_016deba8;
  *(undefined ***)(this + 0x318) = &PTR__Text_016df260;
  *(undefined ***)(this + 0x4f0) = &PTR__Text_016df288;
  *(undefined8 *)(this + 0x4fc) = uVar1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x508),"Thonburi");
  *(undefined8 *)(this + 0x528) = 0;
  this[0x530] = (Text)0x1;
  *(undefined8 *)(this + 0x520) = 0x3f00000041200000;
  *(undefined4 *)(this + 0x534) = 0;
  return;
}

