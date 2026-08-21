
/* cocos2d::RenderTexture::create(int, int, cocos2d::Texture2D::PixelFormat, unsigned int) */

RenderTexture *
cocos2d::RenderTexture::create
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  RenderTexture *this;
  ulong uVar1;
  
  this = operator_new(0x6c0,(nothrow_t *)&std::nothrow);
  if (this != (RenderTexture *)0x0) {
    RenderTexture(this);
    uVar1 = initWithWidthAndHeight(this,param_1,param_2,param_3,param_4);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (RenderTexture *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

