
/* cocos2d::ui::PageView::create() */

ListView * cocos2d::ui::PageView::create(void)

{
  ListView *this;
  ulong uVar1;
  
  this = operator_new(0x9e0,(nothrow_t *)&std::nothrow);
  if (this != (ListView *)0x0) {
    ListView::ListView(this);
    *(undefined4 *)(this + 0x968) = 0x40a00000;
                    /* try { // try from 00db8528 to 00eb852f has its CatchHandler @ 00db8808 */
                    /* try { // try from 00db8530 to 00eb868b has its CatchHandler @ 00db84d4 */
    *(undefined4 *)(this + 0x9c0) = 0x3a83126f;
    *(undefined8 *)(this + 0x960) = 0xffffffffffffffff;
    *(undefined8 *)(this + 0x9c8) = 0xffffffffffffffff;
    *(undefined ***)this = &PTR__PageView_016da3a0;
    *(undefined8 *)(this + 0x950) = 0;
    *(undefined8 *)(this + 0x9b0) = 0;
    *(undefined8 *)(this + 0x970) = 0;
    *(undefined8 *)(this + 0x980) = 0;
    *(undefined8 *)(this + 0x978) = 0;
    *(undefined ***)(this + 0x318) = &PTR__PageView_016dabb8;
    *(undefined ***)(this + 0x4f0) = &PTR__PageView_016dabe0;
    *(undefined8 *)(this + 0x958) = 0x3dcccccd3f000000;
    this[0x9d0] = (ListView)0x0;
    uVar1 = init((PageView *)this);
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

