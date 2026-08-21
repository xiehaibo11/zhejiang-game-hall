
/* cocos2d::ui::Button::getTitleFontName() const */

void cocos2d::ui::Button::getTitleFontName(void)

{
  int iVar1;
  long in_x0;
  long *plVar2;
  basic_string *pbVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  code *pcVar4;
  
  plVar2 = *(long **)(in_x0 + 0x508);
  if (plVar2 == (long *)0x0) {
LAB_00dc2218:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(in_x8,"");
    return;
  }
  iVar1 = (int)plVar2[0x61];
  if (iVar1 == 0) {
                    /* try { // try from 00dc2230 to 00ec224f has its CatchHandler @ 00dc23d4 */
    pcVar4 = *(code **)(*plVar2 + 0x538);
  }
  else {
    if (iVar1 == 1) {
      pbVar3 = (basic_string *)(plVar2 + 0x69);
      goto LAB_00dc2248;
    }
    if (iVar1 != 3) goto LAB_00dc2218;
    pcVar4 = *(code **)(*plVar2 + 0x568);
  }
  pbVar3 = (basic_string *)(*pcVar4)();
LAB_00dc2248:
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(in_x8,pbVar3);
  return;
}

