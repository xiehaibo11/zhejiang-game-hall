
/* cocos2d::ui::ImageView::create(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, cocos2d::ui::Widget::TextureResType) */

Widget * cocos2d::ui::ImageView::create(undefined8 param_1,undefined4 param_2)

{
  Widget *this;
  ulong uVar1;
  
  this = operator_new(0x540,(nothrow_t *)&std::nothrow);
  if (this != (Widget *)0x0) {
    Widget::Widget(this);
    *(undefined2 *)(this + 0x4f8) = 0x100;
    *(undefined ***)this = &PTR__ImageView_016de470;
    *(undefined ***)(this + 0x318) = &PTR__ImageView_016deb18;
    *(undefined ***)(this + 0x4f0) = &PTR__ImageView_016deb40;
    Rect::Rect((Rect *)(this + 0x4fc),(Rect *)Rect::ZERO);
    *(undefined8 *)(this + 0x510) = 0;
    *(undefined4 *)(this + 0x518) = 0;
    Size::Size((Size *)(this + 0x51c),(Size *)(this + 0x80));
    this[0x524] = (Widget)0x1;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + 0x528),"");
    uVar1 = (**(code **)(*(long *)this + 0x690))(this,param_1,param_2);
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

