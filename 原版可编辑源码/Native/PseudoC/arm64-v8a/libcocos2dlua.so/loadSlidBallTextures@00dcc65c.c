
/* cocos2d::ui::Slider::loadSlidBallTextures(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, cocos2d::ui::Widget::TextureResType) */

void __thiscall
cocos2d::ui::Slider::loadSlidBallTextures
          (Slider *this,undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_5)

{
  loadSlidBallTextureNormal(this,param_1,param_5);
  loadSlidBallTexturePressed(this,param_2,param_5);
  loadSlidBallTextureDisabled(this,param_3,param_5);
  return;
}

