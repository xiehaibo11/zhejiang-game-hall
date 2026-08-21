
/* cocos2d::ui::ListView::createInstance() */

ListView * cocos2d::ui::ListView::createInstance(void)

{
  ListView *this;
  ulong uVar1;
  
                    /* try { // try from 00db50a8 to 00eb50af has its CatchHandler @ 00db5190 */
                    /* try { // try from 00db50b0 to 00eb51ef has its CatchHandler @ 00db4e98 */
  this = operator_new(0x950,(nothrow_t *)&std::nothrow);
  if (this != (ListView *)0x0) {
    ListView(this);
    uVar1 = (**(code **)(*(long *)this + 0x500))(this);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (ListView *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

