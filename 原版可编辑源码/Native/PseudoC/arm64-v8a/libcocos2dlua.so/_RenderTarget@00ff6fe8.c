
/* cocos2d::experimental::RenderTarget::~RenderTarget() */

void __thiscall cocos2d::experimental::RenderTarget::~RenderTarget(RenderTarget *this)

{
  long lVar1;
  
  *(undefined ***)this = &PTR__RenderTarget_01724840;
  if (*(Ref **)(this + 0x30) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x30));
    *(undefined8 *)(this + 0x30) = 0;
  }
  lVar1 = Director::getInstance();
  EventDispatcher::removeEventListener
            (*(EventDispatcher **)(lVar1 + 0xb0),*(EventListener **)(this + 0x38));
  Ref::~Ref((Ref *)this);
  return;
}

