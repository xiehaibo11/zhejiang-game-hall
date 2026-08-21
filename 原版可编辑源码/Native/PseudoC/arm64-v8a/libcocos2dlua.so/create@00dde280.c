
/* cocos2d::ui::VBox::create() */

Layout * cocos2d::ui::VBox::create(void)

{
  Layout *this;
  ulong uVar1;
  
  this = operator_new(0x7c0,(nothrow_t *)&std::nothrow);
  if (this != (Layout *)0x0) {
    Layout::Layout(this);
                    /* try { // try from 00dde2ac to 00ede2c7 has its CatchHandler @ 00ddec1c */
    *(undefined ***)this = &PTR__VBox_016e34d0;
    *(undefined ***)(this + 0x318) = &PTR__VBox_016e3bb8;
                    /* try { // try from 00dde2cc to 00ede2db has its CatchHandler @ 00ddec20 */
    *(undefined ***)(this + 0x4f0) = &PTR__VBox_016e3be0;
    uVar1 = init((VBox *)this);
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

