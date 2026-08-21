
/* cocos2d::experimental::RenderTargetDepthStencil::~RenderTargetDepthStencil() */

void __thiscall
cocos2d::experimental::RenderTargetDepthStencil::~RenderTargetDepthStencil
          (RenderTargetDepthStencil *this)

{
  char cVar1;
  long lVar2;
  RenderTargetDepthStencil *pRVar3;
  
  *(undefined ***)this = &PTR__RenderTargetDepthStencil_017248a0;
  pRVar3 = this + 0x30;
  cVar1 = glIsRenderbuffer(*(undefined4 *)pRVar3);
  if (cVar1 != '\0') {
    glDeleteRenderbuffers(1,pRVar3);
    *(undefined4 *)pRVar3 = 0;
  }
  lVar2 = Director::getInstance();
  EventDispatcher::removeEventListener
            (*(EventDispatcher **)(lVar2 + 0xb0),*(EventListener **)(this + 0x38));
  Ref::~Ref((Ref *)this);
  return;
}

