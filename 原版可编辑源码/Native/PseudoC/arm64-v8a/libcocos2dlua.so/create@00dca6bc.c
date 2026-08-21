
/* cocos2d::ui::LoadingBar::create(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, cocos2d::ui::Widget::TextureResType, float) */

LoadingBar * cocos2d::ui::LoadingBar::create(float param_1_00,undefined8 param_1,undefined4 param_3)

{
  LoadingBar *this;
  ulong uVar1;
  
                    /* try { // try from 00dca6d8 to 00eca6e7 has its CatchHandler @ 00dca744 */
                    /* try { // try from 00dca6e8 to 00eca797 has its CatchHandler @ 00dca4b4 */
  this = operator_new(0x560,(nothrow_t *)&std::nothrow);
  if (this != (LoadingBar *)0x0) {
    LoadingBar(this);
    uVar1 = (**(code **)(*(long *)this + 0x500))(this);
    if ((uVar1 & 1) == 0) {
                    /* catch() { ... } // from try @ 00dca6d8 with catch @ 00dca744 */
      (**(code **)(*(long *)this + 8))(this);
      this = (LoadingBar *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
      loadTexture(this,param_1,param_3);
      setPercent(this,param_1_00);
    }
  }
                    /* catch() { ... } // from try @ 00dca5f0 with catch @ 00dca758 */
  return this;
}

