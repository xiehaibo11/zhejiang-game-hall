
/* cocos2d::ui::Button::Button() */

void __thiscall cocos2d::ui::Button::Button(Button *this)

{
  Size *pSVar1;
  
  Widget::Widget((Widget *)this);
  this[0x516] = (Button)0x0;
  *(undefined8 *)(this + 0x4f8) = 0;
  *(undefined8 *)(this + 0x4f0) = 0;
  *(undefined8 *)(this + 0x508) = 0;
  *(undefined8 *)(this + 0x500) = 0;
  *(undefined4 *)(this + 0x510) = 0x3dcccccd;
  *(undefined2 *)(this + 0x514) = 1;
  *(undefined ***)this = &PTR__Button_016dc118;
  *(undefined ***)(this + 0x318) = &PTR__Button_016dc7d8;
                    /* try { // try from 00dc0064 to 00ec008b has its CatchHandler @ 00dbfd58 */
  Rect::Rect((Rect *)(this + 0x518),(Rect *)Rect::ZERO);
                    /* catch() { ... } // from try @ 00dbfd98 with catch @ 00dc0070 */
  Rect::Rect((Rect *)(this + 0x528),(Rect *)Rect::ZERO);
                    /* try { // try from 00dc008c to 00ec010f has its CatchHandler @ 00dc008c
                       catch() { ... } // from try @ 00dc008c with catch @ 00dc008c
                       catch() { ... } // from try @ 00dc0754 with catch @ 00dc008c */
  Rect::Rect((Rect *)(this + 0x538),(Rect *)Rect::ZERO);
  pSVar1 = (Size *)(this + 0x80);
  Size::Size((Size *)(this + 0x548),pSVar1);
  Size::Size((Size *)(this + 0x550),pSVar1);
  Size::Size((Size *)(this + 0x558),pSVar1);
  *(undefined4 *)(this + 0x560) = 0x1000000;
  *(undefined2 *)(this + 0x564) = 0x101;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x568),"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x580),"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x598),"");
  *(undefined4 *)(this + 0x5b8) = 0;
                    /* try { // try from 00dc0110 to 00ec011f has its CatchHandler @ 00dc0868 */
  *(undefined8 *)(this + 0x5b0) = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x5c0),"");
                    /* try { // try from 00dc0124 to 00ec0133 has its CatchHandler @ 00dc0848 */
  (**(code **)(*(long *)this + 0x588))(this,1);
  return;
}

