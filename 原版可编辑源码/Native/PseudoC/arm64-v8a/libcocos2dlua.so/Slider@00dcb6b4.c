
/* cocos2d::ui::Slider::Slider() */

void __thiscall cocos2d::ui::Slider::Slider(Slider *this)

{
                    /* try { // try from 00dcb6b8 to 00ecb6c3 has its CatchHandler @ 00dcca00 */
  Widget::Widget((Widget *)this);
                    /* try { // try from 00dcb6d8 to 00ecb6f3 has its CatchHandler @ 00dccc00 */
  *(undefined8 *)(this + 0x4f8) = 0;
  *(undefined8 *)(this + 0x4f0) = 0;
  *(undefined ***)this = &PTR__Slider_016e0760;
  *(undefined ***)(this + 0x318) = &PTR__Slider_016e0df0;
                    /* try { // try from 00dcb6f8 to 00ecb707 has its CatchHandler @ 00dccbfc */
  Size::Size((Size *)(this + 0x500),(Size *)&Size::ZERO);
  Rect::Rect((Rect *)(this + 0x508),(Rect *)Rect::ZERO);
  Size::Size((Size *)(this + 0x518),(Size *)&Size::ZERO);
  Rect::Rect((Rect *)(this + 0x520),(Rect *)Rect::ZERO);
  *(undefined4 *)(this + 0x558) = 100;
  *(undefined2 *)(this + 0x55c) = 0x100;
  *(undefined8 *)(this + 0x548) = 0;
  *(undefined8 *)(this + 0x540) = 0;
  *(undefined8 *)(this + 0x538) = 0;
  *(undefined8 *)(this + 0x530) = 0;
  *(undefined8 *)(this + 0x550) = 0;
  *(undefined2 *)(this + 0x56c) = 0;
  *(undefined4 *)(this + 0x568) = 0x3f800000;
  *(undefined8 *)(this + 0x560) = 0x3f8000003dcccccd;
  Rect::Rect((Rect *)(this + 0x570),(Rect *)Rect::ZERO);
  Rect::Rect((Rect *)(this + 0x580),(Rect *)Rect::ZERO);
  *(undefined8 *)(this + 0x5d0) = 0;
  *(undefined8 *)(this + 0x590) = 0;
  *(undefined8 *)(this + 0x5a0) = 0;
  *(undefined8 *)(this + 0x598) = 0;
  *(undefined8 *)(this + 0x5e8) = 0;
  *(undefined8 *)(this + 0x5e0) = 0;
  *(undefined4 *)(this + 0x5f0) = 0;
  *(undefined2 *)(this + 0x5f4) = 0x101;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x5f8),"");
                    /* try { // try from 00dcb7c0 to 00ecb84b has its CatchHandler @ 00dccba4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x610),"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x628),"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x640),"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x658),"");
  (**(code **)(*(long *)this + 0x588))(this,1);
  return;
}

