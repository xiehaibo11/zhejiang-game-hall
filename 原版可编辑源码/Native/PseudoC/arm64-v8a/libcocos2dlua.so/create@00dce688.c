
/* cocos2d::ui::TextField::create() */

Widget * cocos2d::ui::TextField::create(void)

{
  Widget *this;
  ulong uVar1;
  
  this = operator_new(0x580,(nothrow_t *)&std::nothrow);
  if (this != (Widget *)0x0) {
    Widget::Widget(this);
    this[0x550] = (Widget)0x1;
    *(undefined8 *)(this + 0x540) = 0;
    this[0x500] = (Widget)0x0;
    *(undefined8 *)(this + 0x508) = 0;
    *(undefined8 *)(this + 0x518) = 0;
    *(undefined8 *)(this + 0x510) = 0;
    *(undefined8 *)(this + 0x4f8) = 0;
    *(undefined8 *)(this + 0x4f0) = 0;
    *(undefined ***)this = &PTR__TextField_016e1640;
    *(undefined ***)(this + 0x318) = &PTR__TextField_016e1ce0;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + 0x558),"Thonburi");
    *(undefined8 *)(this + 0x570) = 10;
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

