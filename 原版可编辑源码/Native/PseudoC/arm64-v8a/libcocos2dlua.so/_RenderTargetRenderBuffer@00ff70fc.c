
/* cocos2d::experimental::RenderTargetRenderBuffer::~RenderTargetRenderBuffer() */

void __thiscall
cocos2d::experimental::RenderTargetRenderBuffer::~RenderTargetRenderBuffer
          (RenderTargetRenderBuffer *this)

{
  char cVar1;
  long lVar2;
  RenderTargetRenderBuffer *pRVar3;
  
  *(undefined ***)this = &PTR__RenderTargetRenderBuffer_01724870;
  pRVar3 = this + 0x34;
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

