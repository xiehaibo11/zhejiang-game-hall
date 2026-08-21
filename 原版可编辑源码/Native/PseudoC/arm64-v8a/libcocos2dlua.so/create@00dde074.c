
/* cocos2d::ui::HBox::create(cocos2d::Size const&) */

Layout * cocos2d::ui::HBox::create(Size *param_1)

{
  Layout *this;
  ulong uVar1;
  
                    /* try { // try from 00dde074 to 00ede08f has its CatchHandler @ 00ddec64 */
  this = operator_new(0x7c0,(nothrow_t *)&std::nothrow);
                    /* try { // try from 00dde094 to 00ede0a3 has its CatchHandler @ 00ddec5c */
  if (this != (Layout *)0x0) {
    Layout::Layout(this);
    *(undefined ***)this = &PTR__HBox_016e2d68;
    *(undefined ***)(this + 0x318) = &PTR__HBox_016e3450;
    *(undefined ***)(this + 0x4f0) = &PTR__HBox_016e3478;
    uVar1 = initWithSize((HBox *)this,param_1);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Layout *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

