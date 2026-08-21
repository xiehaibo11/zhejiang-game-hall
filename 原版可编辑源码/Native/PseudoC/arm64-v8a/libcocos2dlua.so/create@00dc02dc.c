
/* cocos2d::ui::Button::create(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, cocos2d::ui::Widget::TextureResType) */

Button * cocos2d::ui::Button::create
                   (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  Button *this;
  ulong uVar1;
  
  this = operator_new(0x5e0,(nothrow_t *)&std::nothrow);
  if (this != (Button *)0x0) {
    Button(this);
                    /* try { // try from 00dc032c to 00ec0337 has its CatchHandler @ 00dc07c4 */
    uVar1 = (**(code **)(*(long *)this + 0x688))(this,param_1,param_2,param_3,param_4);
                    /* try { // try from 00dc0340 to 00ec0367 has its CatchHandler @ 00dc07c0 */
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Button *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

