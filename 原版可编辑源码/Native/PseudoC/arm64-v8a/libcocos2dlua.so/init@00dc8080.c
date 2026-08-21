
/* cocos2d::ui::Text::init(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, float) */

bool __thiscall
cocos2d::ui::Text::init(Text *this,basic_string *param_1,basic_string *param_2,float param_3)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = Widget::init((Widget *)this);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    setFontName(this,param_2);
    setFontSize(this,param_3);
    setString(this,param_1);
  }
  return bVar1;
}

