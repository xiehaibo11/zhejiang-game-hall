
/* cocos2d::ui::ImageView::create() */

Widget * cocos2d::ui::ImageView::create(void)

{
  Widget *this;
  ulong uVar1;
  
                    /* try { // try from 00dc6f2c to 00ec6f3b has its CatchHandler @ 00dc6ffc */
  this = operator_new(0x540,(nothrow_t *)&std::nothrow);
  if (this != (Widget *)0x0) {
    Widget::Widget(this);
                    /* try { // try from 00dc6f58 to 00ec6f67 has its CatchHandler @ 00dc6fd0 */
    *(undefined2 *)(this + 0x4f8) = 0x100;
                    /* try { // try from 00dc6f68 to 00ec6f93 has its CatchHandler @ 00dc6eac */
    *(undefined ***)this = &PTR__ImageView_016de470;
    *(undefined ***)(this + 0x318) = &PTR__ImageView_016deb18;
    *(undefined ***)(this + 0x4f0) = &PTR__ImageView_016deb40;
    Rect::Rect((Rect *)(this + 0x4fc),(Rect *)Rect::ZERO);
    *(undefined8 *)(this + 0x510) = 0;
                    /* try { // try from 00dc6f94 to 00ec6fa3 has its CatchHandler @ 00dc6fe0 */
    *(undefined4 *)(this + 0x518) = 0;
    Size::Size((Size *)(this + 0x51c),(Size *)(this + 0x80));
                    /* try { // try from 00dc6fa4 to 00ec6fff has its CatchHandler @ 00dc6eac */
    this[0x524] = (Widget)0x1;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + 0x528),"");
    uVar1 = (**(code **)(*(long *)this + 0x500))(this);
    if ((uVar1 & 1) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dc6f94 with catch @ 00dc6fe0
                        */
      (**(code **)(*(long *)this + 8))(this);
      this = (Widget *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dc6f58 with catch @ 00dc6fd0
                        */
    }
  }
  return this;
}

