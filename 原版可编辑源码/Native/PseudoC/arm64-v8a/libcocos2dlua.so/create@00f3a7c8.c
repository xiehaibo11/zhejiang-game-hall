
/* cocos2d::RenderTexture::create(int, int, cocos2d::Texture2D::PixelFormat) */

RenderTexture *
cocos2d::RenderTexture::create(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  RenderTexture *this;
  ulong uVar1;
  
  this = operator_new(0x6c0,(nothrow_t *)&std::nothrow);
  if (this != (RenderTexture *)0x0) {
    RenderTexture(this);
    uVar1 = initWithWidthAndHeight(this,param_1,param_2,param_3,0);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (RenderTexture *)0x0;
    }
    else {
                    /* try { // try from 00f3a824 to 0103a933 has its CatchHandler @ 00f3a824
                       catch() { ... } // from try @ 00f3a824 with catch @ 00f3a824
                       catch() { ... } // from try @ 00f3aaf8 with catch @ 00f3a824 */
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

