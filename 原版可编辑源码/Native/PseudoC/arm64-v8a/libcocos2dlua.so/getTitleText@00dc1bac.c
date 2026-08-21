
/* cocos2d::ui::Button::getTitleText() const */

void cocos2d::ui::Button::getTitleText(void)

{
  long in_x0;
  basic_string *pbVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  
  if (*(long **)(in_x0 + 0x508) != (long *)0x0) {
    pbVar1 = (basic_string *)(**(code **)(**(long **)(in_x0 + 0x508) + 0x590))();
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(in_x8,pbVar1);
    return;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(in_x8,"");
  return;
}

