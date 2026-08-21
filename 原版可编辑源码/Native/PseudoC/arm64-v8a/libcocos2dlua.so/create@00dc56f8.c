
/* cocos2d::ui::RadioButton::create(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   cocos2d::ui::Widget::TextureResType) */

AbstractCheckButton *
cocos2d::ui::RadioButton::create
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined4 param_6)

{
  AbstractCheckButton *this;
  ulong uVar1;
  
                    /* try { // try from 00dc5720 to 00ec5727 has its CatchHandler @ 00dc5a88 */
                    /* try { // try from 00dc5728 to 00ec574b has its CatchHandler @ 00dc5308 */
  this = operator_new(0x600,(nothrow_t *)&std::nothrow);
  if (this != (AbstractCheckButton *)0x0) {
    AbstractCheckButton::AbstractCheckButton(this);
                    /* try { // try from 00dc574c to 00ec578b has its CatchHandler @ 00dc5abc */
    *(undefined8 *)(this + 0x5e0) = 0;
    *(undefined8 *)(this + 0x5f0) = 0;
    *(undefined ***)this = &PTR__RadioButton_016dd648;
    *(undefined ***)(this + 0x318) = &PTR__RadioButton_016ddd20;
    uVar1 = AbstractCheckButton::init(this,param_1,param_2,param_3,param_4,param_5,param_6);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (AbstractCheckButton *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
                    /* try { // try from 00dc57b4 to 00ec57c3 has its CatchHandler @ 00dc5a84 */
                    /* try { // try from 00dc57c4 to 00ec5803 has its CatchHandler @ 00dc5a8c */
  return this;
}

