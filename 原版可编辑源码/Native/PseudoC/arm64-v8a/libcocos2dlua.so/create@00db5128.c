
/* cocos2d::ui::ListView::create() */

ListView * cocos2d::ui::ListView::create(void)

{
  ListView *this;
  ulong uVar1;
  
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
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00db50a8 with catch @ 00db5190
                        */
  return this;
}

