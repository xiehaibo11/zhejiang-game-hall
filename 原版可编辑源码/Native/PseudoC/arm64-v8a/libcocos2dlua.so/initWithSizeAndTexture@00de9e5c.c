
/* cocos2d::ui::EditBox::initWithSizeAndTexture(cocos2d::Size const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   cocos2d::ui::Widget::TextureResType) */

bool __thiscall
cocos2d::ui::EditBox::initWithSizeAndTexture
          (EditBox *this,undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
          ,undefined4 param_6)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  
                    /* try { // try from 00de9e70 to 00ee9e7f has its CatchHandler @ 00dea36c */
  uVar2 = Widget::init((Widget *)this);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    plVar3 = (long *)__createSystemEditBox(this);
    *(long **)(this + 0x5b8) = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,param_1);
    (**(code **)(**(long **)(this + 0x5b8) + 0x38))(*(long **)(this + 0x5b8),0);
    loadTextureNormal(this,param_2,param_6);
    loadTexturePressed(this,param_3,param_6);
    loadTextureDisabled(this,param_4,param_6);
    (**(code **)(*(long *)this + 0x160))(this,param_1);
    (**(code **)(*(long *)this + 0x588))(this,1);
  }
  return bVar1;
}

