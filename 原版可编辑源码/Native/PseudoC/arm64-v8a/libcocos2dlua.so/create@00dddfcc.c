
/* cocos2d::ui::HBox::create() */

Layout * cocos2d::ui::HBox::create(void)

{
  Layout *this;
  ulong uVar1;
  
  this = operator_new(0x7c0,(nothrow_t *)&std::nothrow);
  if (this != (Layout *)0x0) {
    Layout::Layout(this);
                    /* try { // try from 00dde000 to 00ede00f has its CatchHandler @ 00ddec24 */
    *(undefined ***)this = &PTR__HBox_016e2d68;
    *(undefined ***)(this + 0x318) = &PTR__HBox_016e3450;
    *(undefined ***)(this + 0x4f0) = &PTR__HBox_016e3478;
    uVar1 = init((HBox *)this);
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

