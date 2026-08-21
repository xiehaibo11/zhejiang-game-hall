
/* cocos2d::ui::Button::init(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, cocos2d::ui::Widget::TextureResType) */

bool __thiscall
cocos2d::ui::Button::init
          (Button *this,undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_5)

{
  bool bVar1;
  ulong uVar2;
  
                    /* try { // try from 00dc03a8 to 00ec03b3 has its CatchHandler @ 00dc07bc */
                    /* try { // try from 00dc03bc to 00ec03df has its CatchHandler @ 00dc07b8 */
  uVar2 = Widget::init((Widget *)this);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    loadTextureNormal(this,param_1,param_5);
    loadTexturePressed(this,param_2,param_5);
    loadTextureDisabled(this,param_3,param_5);
  }
                    /* try { // try from 00dc0414 to 00ec0437 has its CatchHandler @ 00dc0808 */
  return bVar1;
}

