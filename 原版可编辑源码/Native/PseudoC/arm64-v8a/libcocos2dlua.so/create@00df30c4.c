
/* cocos2d::ui::TabHeader::create(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, cocos2d::ui::Widget::TextureResType) */

AbstractCheckButton *
cocos2d::ui::TabHeader::create
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  AbstractCheckButton *this;
  ulong uVar1;
  
  this = operator_new(0x620,(nothrow_t *)&std::nothrow);
  if (this != (AbstractCheckButton *)0x0) {
    AbstractCheckButton::AbstractCheckButton(this);
    *(undefined8 *)(this + 0x5c0) = 0;
    *(undefined8 *)(this + 0x5d0) = 0;
    *(undefined8 *)(this + 0x600) = 0;
    *(undefined4 *)(this + 0x5c8) = 0x41400000;
    *(undefined ***)this = &PTR__TabHeader_016e6c50;
                    /* try { // try from 00df3140 to 00ef3143 has its CatchHandler @ 00df31ec */
    *(undefined ***)(this + 0x318) = &PTR__TabHeader_016e7328;
    *(undefined4 *)(this + 0x610) = 0;
                    /* try { // try from 00df3150 to 00ef315b has its CatchHandler @ 00df31f0 */
                    /* try { // try from 00df315c to 00ef31b3 has its CatchHandler @ 00df30b4 */
    uVar1 = AbstractCheckButton::init(this,param_2,param_3,param_4,param_5,param_6,param_7);
    if ((uVar1 & 1) == 0) {
                    /* try { // try from 00df31b4 to 00ef31bb has its CatchHandler @ 00df3234 */
                    /* try { // try from 00df31bc to 00ef321f has its CatchHandler @ 00df30b4 */
      (**(code **)(*(long *)this + 8))(this);
      this = (AbstractCheckButton *)0x0;
    }
    else {
      (**(code **)(**(long **)(this + 0x500) + 0x170))(*(long **)(this + 0x500),0);
      (**(code **)(**(long **)(this + 0x5c0) + 0x588))(*(long **)(this + 0x5c0),param_1);
      *(undefined8 *)(this + 0x78) = 0x3f000000;
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

