
/* cocos2d::ui::Text::create() */

Widget * cocos2d::ui::Text::create(void)

{
  Widget *this;
  ulong uVar1;
  undefined8 uVar2;
  
  this = operator_new(0x540,(nothrow_t *)&std::nothrow);
  if (this != (Widget *)0x0) {
    Widget::Widget(this);
    uVar2 = NEON_fmov(0x3f800000,4);
    this[0x4f8] = (Widget)0x0;
    *(undefined ***)this = &PTR__Text_016deba8;
    *(undefined ***)(this + 0x318) = &PTR__Text_016df260;
    *(undefined ***)(this + 0x4f0) = &PTR__Text_016df288;
    *(undefined8 *)(this + 0x4fc) = uVar2;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + 0x508),"Thonburi");
    *(undefined8 *)(this + 0x528) = 0;
    this[0x530] = (Widget)0x1;
    *(undefined8 *)(this + 0x520) = 0x3f00000041200000;
    *(undefined4 *)(this + 0x534) = 0;
    uVar1 = (**(code **)(*(long *)this + 0x500))(this);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Widget *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

