
/* cocos2d::EventCustom::EventCustom(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::EventCustom::EventCustom(EventCustom *this,basic_string *param_1)

{
                    /* try { // try from 00f9ca18 to 0109ca1b has its CatchHandler @ 00f9ca80 */
  Event::Event((Event *)this,6);
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined ***)this = &PTR__EventCustom_01698250;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + 0x40),param_1);
  return;
}

