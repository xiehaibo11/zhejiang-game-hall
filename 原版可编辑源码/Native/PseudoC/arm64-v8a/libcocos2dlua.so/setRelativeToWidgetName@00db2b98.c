
/* cocos2d::ui::RelativeLayoutParameter::setRelativeToWidgetName(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
cocos2d::ui::RelativeLayoutParameter::setRelativeToWidgetName
          (RelativeLayoutParameter *this,basic_string *param_1)

{
  ulong uVar1;
  basic_string *pbVar2;
  
                    /* try { // try from 00db2b9c to 00eb2b9f has its CatchHandler @ 00db3000 */
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x40) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x40),(char *)pbVar2,uVar1);
  }
  return;
}

