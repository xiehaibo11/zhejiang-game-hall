
/* cocos2d::ui::CheckBox::create(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   cocos2d::ui::Widget::TextureResType) */

AbstractCheckButton *
cocos2d::ui::CheckBox::create
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined4 param_6)

{
  AbstractCheckButton *this;
  ulong uVar1;
  
  this = operator_new(0x610,(nothrow_t *)&std::nothrow);
  if (this != (AbstractCheckButton *)0x0) {
    AbstractCheckButton::AbstractCheckButton(this);
    *(undefined8 *)(this + 0x600) = 0;
    *(undefined8 *)(this + 0x5c0) = 0;
    *(undefined8 *)(this + 0x5d0) = 0;
    *(undefined ***)this = &PTR__CheckBox_016dcf30;
    *(undefined ***)(this + 0x318) = &PTR__CheckBox_016dd608;
    *(undefined8 *)(this + 0x5c8) = 0;
    uVar1 = AbstractCheckButton::init(this,param_1,param_2,param_3,param_4,param_5,param_6);
    if ((uVar1 & 1) == 0) {
                    /* try { // try from 00dc4ab8 to 00ec4b03 has its CatchHandler @ 00dc4ab8
                       catch() { ... } // from try @ 00dc4ab8 with catch @ 00dc4ab8
                       catch() { ... } // from try @ 00dc4f70 with catch @ 00dc4ab8
                       catch() { ... } // from try @ 00dc50ec with catch @ 00dc4ab8
                       catch() { ... } // from try @ 00dc5198 with catch @ 00dc4ab8 */
      (**(code **)(*(long *)this + 8))(this);
      this = (AbstractCheckButton *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

