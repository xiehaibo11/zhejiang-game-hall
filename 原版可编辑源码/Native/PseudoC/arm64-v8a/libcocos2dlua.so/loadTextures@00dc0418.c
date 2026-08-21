
/* cocos2d::ui::Button::loadTextures(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, cocos2d::ui::Widget::TextureResType) */

void __thiscall
cocos2d::ui::Button::loadTextures
          (Button *this,undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_5)

{
  loadTextureNormal(this,param_1,param_5);
  loadTexturePressed(this,param_2,param_5);
                    /* try { // try from 00dc0458 to 00ec0463 has its CatchHandler @ 00dc0804 */
  loadTextureDisabled(this,param_3,param_5);
  return;
}

