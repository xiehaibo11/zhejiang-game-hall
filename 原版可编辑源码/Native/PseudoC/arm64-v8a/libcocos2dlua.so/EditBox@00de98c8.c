
/* cocos2d::ui::EditBox::EditBox() */

void __thiscall cocos2d::ui::EditBox::EditBox(EditBox *this)

{
  Size *pSVar1;
  
  Widget::Widget((Widget *)this);
  IMEDelegate::IMEDelegate((IMEDelegate *)(this + 0x4f0));
                    /* try { // try from 00de98f8 to 00ee98ff has its CatchHandler @ 00de9ad8 */
  *(undefined8 *)(this + 0x4f8) = 0;
  *(undefined8 *)(this + 0x508) = 0;
                    /* try { // try from 00de9900 to 00ee9957 has its CatchHandler @ 00de9aec */
  *(undefined ***)this = &PTR__EditBox_016e5968;
  *(undefined ***)(this + 0x318) = &PTR__EditBox_016e6018;
  *(undefined ***)(this + 0x4f0) = &PTR__EditBox_016e6040;
  *(undefined8 *)(this + 0x500) = 0;
  Rect::Rect((Rect *)(this + 0x510),(Rect *)Rect::ZERO);
  Rect::Rect((Rect *)(this + 0x520),(Rect *)Rect::ZERO);
  Rect::Rect((Rect *)(this + 0x530),(Rect *)Rect::ZERO);
  pSVar1 = (Size *)(this + 0x80);
  Size::Size((Size *)(this + 0x540),pSVar1);
                    /* try { // try from 00de9958 to 00ee9b17 has its CatchHandler @ 00de94ac */
  Size::Size((Size *)(this + 0x548),pSVar1);
  Size::Size((Size *)(this + 0x550),pSVar1);
  *(undefined4 *)(this + 0x558) = 0x1000000;
  *(undefined2 *)(this + 0x55c) = 0x101;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x560),"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x578),"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x590),"");
  *(undefined4 *)(this + 0x5b0) = 0;
  *(undefined8 *)(this + 0x5b8) = 0;
  *(undefined8 *)(this + 0x5c8) = 0;
  *(undefined8 *)(this + 0x5a8) = 0;
  *(undefined8 *)(this + 0x5c0) = 0;
  return;
}

