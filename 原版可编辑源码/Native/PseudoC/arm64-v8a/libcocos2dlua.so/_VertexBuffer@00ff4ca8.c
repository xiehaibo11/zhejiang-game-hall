
/* cocos2d::VertexBuffer::~VertexBuffer() */

void __thiscall cocos2d::VertexBuffer::~VertexBuffer(VertexBuffer *this)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  
  *(undefined ***)this = &PTR__VertexBuffer_01724668;
  glDeleteBuffers(*(undefined4 *)(this + 0x38),*(undefined8 *)(this + 0x30));
  if (*(void **)(this + 0x30) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x30));
    if (*(void **)(this + 0x40) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x40));
    }
    lVar3 = *(long *)(this + 0x48);
    if (lVar3 != 0) {
      lVar2 = *(long *)(lVar3 + -8);
      if (lVar2 != 0) {
        lVar2 = lVar2 * 0x18;
        do {
          pvVar1 = *(void **)(lVar3 + lVar2 + -0x18);
          if (pvVar1 != (void *)0x0) {
            *(void **)(lVar3 + lVar2 + -0x10) = pvVar1;
            operator_delete(pvVar1);
          }
          lVar2 = lVar2 + -0x18;
        } while (lVar2 != 0);
      }
      operator_delete__((long *)(lVar3 + -8));
    }
    *(undefined8 *)(this + 0x30) = 0;
  }
  lVar3 = Director::getInstance();
  EventDispatcher::removeEventListener
            (*(EventDispatcher **)(lVar3 + 0xb0),*(EventListener **)(this + 0x28));
  Ref::~Ref((Ref *)this);
  return;
}

