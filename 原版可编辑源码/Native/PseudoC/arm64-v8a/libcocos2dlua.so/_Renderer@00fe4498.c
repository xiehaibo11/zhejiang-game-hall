
/* cocos2d::Renderer::~Renderer() */

void __thiscall cocos2d::Renderer::~Renderer(Renderer *this)

{
  Configuration *this_00;
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  Renderer *pRVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  
  pRVar4 = this + 0x40;
  lVar7 = *(long *)pRVar4;
  lVar5 = *(long *)(this + 0x48);
  if (lVar5 != lVar7) {
    do {
      lVar5 = lVar5 + -0x80;
      FUN_00fe6918(this + 0x50,lVar5);
    } while (lVar7 != lVar5);
  }
  *(long *)(this + 0x48) = lVar7;
  Ref::release(*(Ref **)(this + 0x1b00b8));
  glDeleteBuffers(2,this + 0x1b007c);
  free(*(void **)(this + 0x1b0088));
  this_00 = (Configuration *)Configuration::getInstance();
  uVar1 = Configuration::supportsShareableVAO(this_00);
  if ((uVar1 & 1) != 0) {
    (*glDeleteVertexArraysOESEXT)(1,this + 0x1b0078);
    GL::bindVAO(0);
  }
  lVar5 = Director::getInstance();
  EventDispatcher::removeEventListener
            (*(EventDispatcher **)(lVar5 + 0xb0),*(EventListener **)(this + 0x1b00c0));
  pvVar2 = *(void **)(this + 0x60);
  if (pvVar2 != (void *)0x0) {
                    /* try { // try from 00fe4560 to 010e46d3 has its CatchHandler @ 00fe4560
                       catch() { ... } // from try @ 00fe4560 with catch @ 00fe4560
                       catch() { ... } // from try @ 00fe46ec with catch @ 00fe4560 */
    *(void **)(this + 0x68) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)pRVar4;
  if (pvVar2 != (void *)0x0) {
    pvVar6 = *(void **)(this + 0x48);
    pvVar3 = pvVar2;
    if (pvVar6 != pvVar2) {
      do {
        pvVar6 = (void *)((long)pvVar6 + -0x80);
        FUN_00fe6918(this + 0x50,pvVar6);
      } while (pvVar2 != pvVar6);
      pvVar3 = *(void **)pRVar4;
    }
    *(void **)(this + 0x48) = pvVar2;
    operator_delete(pvVar3);
  }
  std::__ndk1::stack<int,std::__ndk1::deque<int,std::__ndk1::allocator<int>>>::~stack
            ((stack<int,std::__ndk1::deque<int,std::__ndk1::allocator<int>>> *)(this + 0x10));
  return;
}

