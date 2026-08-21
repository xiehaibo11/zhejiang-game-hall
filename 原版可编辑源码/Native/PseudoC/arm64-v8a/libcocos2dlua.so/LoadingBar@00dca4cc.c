
/* cocos2d::ui::LoadingBar::LoadingBar() */

void __thiscall cocos2d::ui::LoadingBar::LoadingBar(LoadingBar *this)

{
  Widget::Widget((Widget *)this);
  *(undefined4 *)(this + 0x4f0) = 0;
  *(undefined ***)this = &PTR__LoadingBar_016e0090;
  *(undefined ***)(this + 0x318) = &PTR__LoadingBar_016e0720;
  *(undefined8 *)(this + 0x4f4) = 0x42c80000;
  *(undefined8 *)(this + 0x500) = 0;
  *(undefined4 *)(this + 0x508) = 0;
  Size::Size((Size *)(this + 0x50c),(Size *)&Size::ZERO);
  Rect::Rect((Rect *)(this + 0x514),(Rect *)Rect::ZERO);
  *(undefined2 *)(this + 0x524) = 0x100;
  Rect::Rect((Rect *)(this + 0x528),(Rect *)Rect::ZERO);
  this[0x538] = (LoadingBar)0x1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x540),"");
  return;
}

