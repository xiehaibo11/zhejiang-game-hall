
/* cocos2d::ui::Layout::removeBackGroundImage() */

void __thiscall cocos2d::ui::Layout::removeBackGroundImage(Layout *this)

{
  if (*(long *)(this + 0x538) != 0) {
    (**(code **)(*(long *)this + 0x550))(this,*(long *)(this + 0x538),1);
    *(undefined8 *)(this + 0x538) = 0;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x540),"",0);
    Size::operator=((Size *)(this + 0x570),(Size *)&Size::ZERO);
  }
  return;
}

