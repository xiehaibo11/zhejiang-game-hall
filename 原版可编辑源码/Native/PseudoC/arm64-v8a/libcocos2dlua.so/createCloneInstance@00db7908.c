
/* cocos2d::ui::ListView::createCloneInstance() */

ListView * cocos2d::ui::ListView::createCloneInstance(void)

{
  ListView *this;
  ulong uVar1;
  
  this = operator_new(0x950,(nothrow_t *)&std::nothrow);
  if (this != (ListView *)0x0) {
    ListView(this);
                    /* try { // try from 00db7940 to 00eb79c7 has its CatchHandler @ 00db7940
                       catch() { ... } // from try @ 00db7940 with catch @ 00db7940
                       catch() { ... } // from try @ 00db7a04 with catch @ 00db7940 */
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

