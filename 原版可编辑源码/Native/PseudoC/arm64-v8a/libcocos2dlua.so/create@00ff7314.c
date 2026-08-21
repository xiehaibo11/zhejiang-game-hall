
/* cocos2d::experimental::RenderTargetRenderBuffer::create(unsigned int, unsigned int) */

Ref * cocos2d::experimental::RenderTargetRenderBuffer::create(uint param_1,uint param_2)

{
  Ref *this;
  
  this = operator_new(0x40,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    Ref::Ref(this);
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined ***)this = &PTR__RenderTargetRenderBuffer_01724870;
    *(undefined8 *)(this + 0x30) = 0x8056;
    *(undefined4 *)(this + 0x24) = 0;
    init((RenderTargetRenderBuffer *)this,param_1,param_2);
    Ref::autorelease(this);
  }
  return this;
}

