
/* cocos2d::ui::RelativeBox::create(cocos2d::Size const&) */

Layout * cocos2d::ui::RelativeBox::create(Size *param_1)

{
  Layout *this;
  ulong uVar1;
  
  this = operator_new(0x7c0,(nothrow_t *)&std::nothrow);
  if (this != (Layout *)0x0) {
    Layout::Layout(this);
    *(undefined ***)this = &PTR__RelativeBox_016e3c38;
    *(undefined ***)(this + 0x318) = &PTR__RelativeBox_016e4320;
    *(undefined ***)(this + 0x4f0) = &PTR__RelativeBox_016e4348;
    uVar1 = initWithSize((RelativeBox *)this,param_1);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Layout *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
                    /* try { // try from 00dde664 to 00ede67f has its CatchHandler @ 00ddec58 */
  return this;
}

