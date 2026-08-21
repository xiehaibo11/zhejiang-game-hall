
/* cocos2d::ui::Widget::Widget() */

void __thiscall cocos2d::ui::Widget::Widget(Widget *this)

{
  ProtectedNode::ProtectedNode((ProtectedNode *)this);
  *(undefined8 *)(this + 0x380) = 0x1010000;
  this[0x388] = (Widget)0x1;
  *(undefined ***)this = &PTR__Widget_016d8710;
  *(undefined8 *)(this + 0x340) = 0;
  *(undefined8 *)(this + 0x370) = 0;
  *(undefined ***)(this + 0x318) = &PTR__Widget_016d8da0;
  *(undefined8 *)(this + 0x394) = 0;
  *(undefined8 *)(this + 0x38c) = 0xffffffff;
  Size::Size((Size *)(this + 0x39c),(Size *)&Size::ZERO);
  *(undefined8 *)(this + 0x3f0) = 0;
  *(undefined8 *)(this + 1000) = 0;
  *(undefined8 *)(this + 0x400) = 0;
  *(undefined8 *)(this + 0x3f8) = 0;
  *(undefined8 *)(this + 0x3ac) = 0;
  *(undefined8 *)(this + 0x3a4) = 0;
                    /* catch() { ... } // from try @ 00da9400 with catch @ 00da93cc */
  this[0x3b4] = (Widget)0x0;
  *(undefined8 *)(this + 0x3c0) = 0;
  *(undefined8 *)(this + 0x3b8) = 0;
  *(undefined8 *)(this + 0x3d0) = 0;
  *(undefined8 *)(this + 0x3c8) = 0;
  *(undefined8 *)(this + 0x3da) = 0;
  *(undefined8 *)(this + 0x3d2) = 0;
  *(undefined4 *)(this + 0x408) = 0x3f800000;
  *(undefined4 *)(this + 0x410) = 0;
  *(undefined2 *)(this + 0x414) = 0x100;
  *(undefined8 *)(this + 0x450) = 0;
  *(undefined8 *)(this + 0x480) = 0;
                    /* try { // try from 00da93f8 to 00ea93ff has its CatchHandler @ 00da9484 */
  *(undefined8 *)(this + 0x4b0) = 0;
  *(undefined8 *)(this + 0x418) = 0;
                    /* try { // try from 00da9400 to 00ea949f has its CatchHandler @ 00da93cc */
  *(undefined8 *)(this + 0x428) = 0;
  *(undefined8 *)(this + 0x420) = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x4c0),"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x4d8),"");
  return;
}

