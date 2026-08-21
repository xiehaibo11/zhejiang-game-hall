
/* cocos2d::extension::ScrollView::create() */

ScrollView * cocos2d::extension::ScrollView::create(void)

{
  ScrollView *this;
  ulong uVar1;
  
                    /* try { // try from 00e14aa4 to 00f14aaf has its CatchHandler @ 00e14df8 */
  this = operator_new(0x470,(nothrow_t *)&std::nothrow);
  if (this != (ScrollView *)0x0) {
                    /* try { // try from 00e14ac4 to 00f14acf has its CatchHandler @ 00e14e00 */
    ScrollView(this);
    uVar1 = (**(code **)(*(long *)this + 0x500))(this);
                    /* try { // try from 00e14adc to 00f14ae7 has its CatchHandler @ 00e14de8 */
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (ScrollView *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
                    /* try { // try from 00e14ae8 to 00f14d6f has its CatchHandler @ 00e149f8 */
    }
  }
  return this;
}

