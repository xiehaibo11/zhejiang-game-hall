
/* cocos2d::RenderTexture::create(int, int) */

RenderTexture * cocos2d::RenderTexture::create(int param_1,int param_2)

{
  RenderTexture *this;
  ulong uVar1;
  
  this = operator_new(0x6c0,(nothrow_t *)&std::nothrow);
  if (this != (RenderTexture *)0x0) {
                    /* catch() { ... } // from try @ 00f3ad38 with catch @ 00f3ad0c */
    RenderTexture(this);
    uVar1 = initWithWidthAndHeight(this,param_1,param_2,2,0);
    if ((uVar1 & 1) == 0) {
                    /* try { // try from 00f3ad38 to 0103ad7f has its CatchHandler @ 00f3ad0c */
      (**(code **)(*(long *)this + 8))(this);
      this = (RenderTexture *)0x0;
    }
    else {
                    /* try { // try from 00f3ad30 to 0103ad37 has its CatchHandler @ 00f3ad64 */
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

