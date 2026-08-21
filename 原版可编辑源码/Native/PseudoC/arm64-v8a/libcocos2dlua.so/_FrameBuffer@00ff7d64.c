
/* cocos2d::experimental::FrameBuffer::~FrameBuffer() */

void __thiscall cocos2d::experimental::FrameBuffer::~FrameBuffer(FrameBuffer *this)

{
  long lVar1;
  __tree_node_base *p_Var2;
  __tree_node_base *p_Var3;
  __tree_node_base *p_Var4;
  
  *(undefined ***)this = &PTR__FrameBuffer_017248d0;
  if (*(Ref **)(this + 0x50) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x50));
    *(undefined8 *)(this + 0x50) = 0;
  }
  if (*(Ref **)(this + 0x58) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x58));
    *(undefined8 *)(this + 0x58) = 0;
  }
  glDeleteFramebuffers(1,this + 0x24);
  *(undefined4 *)(this + 0x24) = 0;
  if (DAT_01792ad8 != (__tree_node_base *)0x0) {
    p_Var4 = (__tree_node_base *)&DAT_01792ad8;
    p_Var2 = DAT_01792ad8;
    do {
      if (*(FrameBuffer **)(p_Var2 + 0x20) >= this) {
        p_Var4 = p_Var2;
      }
      p_Var2 = *(__tree_node_base **)(p_Var2 + (ulong)(*(FrameBuffer **)(p_Var2 + 0x20) < this) * 8)
      ;
    } while (p_Var2 != (__tree_node_base *)0x0);
    if ((p_Var4 != (__tree_node_base *)&DAT_01792ad8) && (*(FrameBuffer **)(p_Var4 + 0x20) <= this))
    {
      p_Var2 = *(__tree_node_base **)(p_Var4 + 8);
      if (*(__tree_node_base **)(p_Var4 + 8) == (__tree_node_base *)0x0) {
        p_Var2 = p_Var4 + 0x10;
        p_Var3 = *(__tree_node_base **)p_Var2;
        if (*(__tree_node_base **)p_Var3 != p_Var4) {
          do {
            lVar1 = *(long *)p_Var2;
            p_Var2 = (__tree_node_base *)(lVar1 + 0x10);
            p_Var3 = *(__tree_node_base **)p_Var2;
          } while (*(long *)p_Var3 != lVar1);
        }
      }
      else {
        do {
          p_Var3 = p_Var2;
          p_Var2 = *(__tree_node_base **)p_Var3;
        } while (*(__tree_node_base **)p_Var3 != (__tree_node_base *)0x0);
      }
      if (_frameBuffers == p_Var4) {
        _frameBuffers = p_Var3;
      }
      DAT_01792ae0 = DAT_01792ae0 + -1;
      std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>(DAT_01792ad8,p_Var4);
      operator_delete(p_Var4);
    }
  }
  lVar1 = Director::getInstance();
  EventDispatcher::removeEventListener
            (*(EventDispatcher **)(lVar1 + 0xb0),*(EventListener **)(this + 0x68));
  if (this[0x60] != (FrameBuffer)0x0) {
    _defaultFBO = 0;
  }
  Ref::~Ref((Ref *)this);
  return;
}

