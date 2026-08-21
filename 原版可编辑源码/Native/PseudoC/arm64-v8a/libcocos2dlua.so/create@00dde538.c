
/* cocos2d::ui::RelativeBox::create() */

Layout * cocos2d::ui::RelativeBox::create(void)

{
  Layout *this;
  ulong uVar1;
  
  this = operator_new(0x7c0,(nothrow_t *)&std::nothrow);
  if (this != (Layout *)0x0) {
    Layout::Layout(this);
    *(undefined ***)this = &PTR__RelativeBox_016e3c38;
    *(undefined ***)(this + 0x318) = &PTR__RelativeBox_016e4320;
    *(undefined ***)(this + 0x4f0) = &PTR__RelativeBox_016e4348;
    uVar1 = init((RelativeBox *)this);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Layout *)0x0;
    }
    else {
                    /* try { // try from 00dde598 to 00ede5b3 has its CatchHandler @ 00ddec48 */
      Ref::autorelease((Ref *)this);
    }
  }
                    /* try { // try from 00dde5b8 to 00ede5c7 has its CatchHandler @ 00ddec40 */
  return this;
}

