
/* cocos2d::ui::VBox::create(cocos2d::Size const&) */

Layout * cocos2d::ui::VBox::create(Size *param_1)

{
  Layout *this;
  ulong uVar1;
  
  this = operator_new(0x7c0,(nothrow_t *)&std::nothrow);
  if (this != (Layout *)0x0) {
    Layout::Layout(this);
    *(undefined ***)this = &PTR__VBox_016e34d0;
    *(undefined ***)(this + 0x318) = &PTR__VBox_016e3bb8;
    *(undefined ***)(this + 0x4f0) = &PTR__VBox_016e3be0;
    uVar1 = initWithSize((VBox *)this,param_1);
    if ((uVar1 & 1) == 0) {
                    /* try { // try from 00dde3a0 to 00ede3bb has its CatchHandler @ 00ddec44 */
      (**(code **)(*(long *)this + 8))(this);
      this = (Layout *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

