
/* cocos2d::ui::Slider::create(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   cocos2d::ui::Widget::TextureResType) */

Slider * cocos2d::ui::Slider::create(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  Slider *this;
  ulong uVar1;
  
  this = operator_new(0x670,(nothrow_t *)&std::nothrow);
  if (this != (Slider *)0x0) {
    Slider(this);
    uVar1 = (**(code **)(*(long *)this + 0x500))(this);
    if ((uVar1 & 1) == 0) {
                    /* try { // try from 00dcbaf4 to 00ecbaff has its CatchHandler @ 00dcc9c8 */
      (**(code **)(*(long *)this + 8))(this);
      this = (Slider *)0x0;
    }
    else {
      loadBarTexture(this,param_1,param_3);
      loadSlidBallTextureNormal(this,param_2,param_3);
                    /* try { // try from 00dcbae8 to 00ecbaf3 has its CatchHandler @ 00dcc9d8 */
      Ref::autorelease((Ref *)this);
    }
  }
                    /* try { // try from 00dcbb14 to 00ecbb2f has its CatchHandler @ 00dccbf4 */
  return this;
}

