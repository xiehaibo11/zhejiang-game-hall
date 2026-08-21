
/* cocos2d::ui::TabControl::create() */

TabControl * cocos2d::ui::TabControl::create(void)

{
  TabControl *this;
  ulong uVar1;
  
                    /* try { // try from 00df276c to 00ef2773 has its CatchHandler @ 00df28e8 */
  this = operator_new(0x570,(nothrow_t *)&std::nothrow);
                    /* try { // try from 00df2774 to 00ef28eb has its CatchHandler @ 00df2720 */
  if (this != (TabControl *)0x0) {
    TabControl(this);
    uVar1 = (**(code **)(*(long *)this + 0x500))(this);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (TabControl *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

