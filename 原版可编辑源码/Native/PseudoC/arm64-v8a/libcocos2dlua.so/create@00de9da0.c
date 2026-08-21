
/* cocos2d::ui::EditBox::create(cocos2d::Size const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, cocos2d::ui::Widget::TextureResType) */

EditBox * cocos2d::ui::EditBox::create
                    (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined4 param_5)

{
  EditBox *this;
  ulong uVar1;
  
                    /* try { // try from 00de9dac to 00ee9e4f has its CatchHandler @ 00de9dac
                       catch() { ... } // from try @ 00de9dac with catch @ 00de9dac
                       catch() { ... } // from try @ 00dea314 with catch @ 00de9dac */
  this = operator_new(0x5d0,(nothrow_t *)&std::nothrow);
  if (this != (EditBox *)0x0) {
    EditBox(this);
    uVar1 = initWithSizeAndTexture(this,param_1,param_2,param_3,param_4,param_5);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (EditBox *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

