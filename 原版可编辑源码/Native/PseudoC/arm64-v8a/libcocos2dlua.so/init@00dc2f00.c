
/* cocos2d::ui::AbstractCheckButton::init(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, cocos2d::ui::Widget::TextureResType) */

bool __thiscall
cocos2d::ui::AbstractCheckButton::init
          (AbstractCheckButton *this,undefined8 param_1,undefined8 param_2,undefined8 param_3,
          undefined8 param_4,undefined8 param_5,undefined4 param_7)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = Widget::init((Widget *)this);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    (**(code **)(*(long *)this + 0x680))(this,0);
    loadTextures(this,param_1,param_2,param_3,param_4,param_5,param_7);
  }
  return bVar1;
}

