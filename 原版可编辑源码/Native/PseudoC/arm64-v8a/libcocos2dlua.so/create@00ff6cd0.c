
/* cocos2d::experimental::RenderTarget::create(unsigned int, unsigned int,
   cocos2d::Texture2D::PixelFormat) */

Ref * cocos2d::experimental::RenderTarget::create
                (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  Ref *this;
  ulong uVar1;
  
  this = operator_new(0x40,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    Ref::Ref(this);
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined ***)this = &PTR__RenderTarget_01724840;
    *(undefined4 *)(this + 0x24) = 1;
    uVar1 = init((RenderTarget *)this,param_1,param_2,param_3);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Ref *)0x0;
    }
    else {
      Ref::autorelease(this);
    }
  }
                    /* try { // try from 00ff6d70 to 010f6db3 has its CatchHandler @ 00ff6d70
                       catch() { ... } // from try @ 00ff6d70 with catch @ 00ff6d70
                       catch() { ... } // from try @ 00ff6db8 with catch @ 00ff6d70 */
  return this;
}

