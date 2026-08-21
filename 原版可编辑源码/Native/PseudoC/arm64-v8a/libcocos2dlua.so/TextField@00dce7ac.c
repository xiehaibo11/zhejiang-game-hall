
/* cocos2d::ui::TextField::TextField() */

void __thiscall cocos2d::ui::TextField::TextField(TextField *this)

{
  Widget::Widget((Widget *)this);
  this[0x550] = (TextField)0x1;
  *(undefined8 *)(this + 0x540) = 0;
  this[0x500] = (TextField)0x0;
  *(undefined8 *)(this + 0x508) = 0;
  *(undefined8 *)(this + 0x518) = 0;
  *(undefined8 *)(this + 0x510) = 0;
  *(undefined8 *)(this + 0x4f8) = 0;
  *(undefined8 *)(this + 0x4f0) = 0;
  *(undefined ***)this = &PTR__TextField_016e1640;
  *(undefined ***)(this + 0x318) = &PTR__TextField_016e1ce0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x558),"Thonburi");
  *(undefined8 *)(this + 0x570) = 10;
  return;
}

