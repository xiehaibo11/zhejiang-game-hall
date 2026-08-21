
/* cocos2d::ui::TabHeader::getTitleFontName() const */

void cocos2d::ui::TabHeader::getTitleFontName(void)

{
  long in_x0;
  basic_string *pbVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  code *pcVar2;
  
  if (*(int *)(in_x0 + 0x610) == 0) {
    pcVar2 = *(code **)(**(long **)(in_x0 + 0x5c0) + 0x568);
  }
  else {
    if (*(int *)(in_x0 + 0x610) != 1) {
      pbVar1 = (basic_string *)(*(long **)(in_x0 + 0x5c0) + 0x69);
      goto LAB_00df397c;
    }
    pcVar2 = *(code **)(**(long **)(in_x0 + 0x5c0) + 0x538);
  }
  pbVar1 = (basic_string *)(*pcVar2)();
LAB_00df397c:
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(in_x8,pbVar1);
  return;
}

