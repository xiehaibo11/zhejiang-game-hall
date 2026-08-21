
/* cocos2d::TiledGrid3D::create(cocos2d::Size const&, cocos2d::Rect const&) */

Ref * cocos2d::TiledGrid3D::create(Size *param_1,Rect *param_2)

{
  Ref *this;
  ulong uVar1;
  
                    /* try { // try from 00f08844 to 0100884f has its CatchHandler @ 00f08914 */
                    /* try { // try from 00f08850 to 01008877 has its CatchHandler @ 00f087b0 */
  this = operator_new(0x90,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    Ref::Ref(this);
                    /* try { // try from 00f08878 to 0100887f has its CatchHandler @ 00f08910 */
    *(undefined ***)this = &PTR__GridBase_016fd210;
    Size::Size((Size *)(this + 0x28));
                    /* try { // try from 00f08880 to 0100889f has its CatchHandler @ 00f087b0 */
    *(undefined8 *)(this + 0x38) = 0;
    Rect::Rect((Rect *)(this + 0x5c));
                    /* try { // try from 00f088a0 to 010088a7 has its CatchHandler @ 00f08910 */
                    /* try { // try from 00f088a8 to 010088c7 has its CatchHandler @ 00f087b0 */
    *(undefined ***)this = &PTR__TiledGrid3D_016fd2a0;
    *(undefined8 *)(this + 0x78) = 0;
    *(undefined8 *)(this + 0x70) = 0;
    *(undefined8 *)(this + 0x88) = 0;
    *(undefined8 *)(this + 0x80) = 0;
    uVar1 = GridBase::initWithSize((GridBase *)this,param_1,param_2);
    if ((uVar1 & 1) == 0) {
                    /* try { // try from 00f088c8 to 010088d3 has its CatchHandler @ 00f08910 */
      (**(code **)(*(long *)this + 8))(this);
                    /* try { // try from 00f088d4 to 01008917 has its CatchHandler @ 00f087b0 */
      this = (Ref *)0x0;
    }
    else {
      Ref::autorelease(this);
    }
  }
  return this;
}

