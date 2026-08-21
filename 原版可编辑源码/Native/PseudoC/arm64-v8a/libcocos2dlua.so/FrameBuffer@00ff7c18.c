
/* cocos2d::experimental::FrameBuffer::FrameBuffer() */

void __thiscall cocos2d::experimental::FrameBuffer::FrameBuffer(FrameBuffer *this)

{
  __tree_node_base *p_Var1;
  __tree_node_base *p_Var2;
  __tree_node_base *p_Var3;
  
  Ref::Ref((Ref *)this);
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  this[0x2c] = (FrameBuffer)0x1;
  *(undefined ***)this = &PTR__FrameBuffer_017248d0;
  Color4F::Color4F((Color4F *)(this + 0x30),0.0,0.0,0.0,1.0);
  this[0x44] = (FrameBuffer)0x0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x40) = 0x3f800000;
  this[0x60] = (FrameBuffer)0x0;
  p_Var2 = (__tree_node_base *)&DAT_01792ad8;
  p_Var3 = p_Var2;
  if (DAT_01792ad8 != (__tree_node_base *)0x0) {
    p_Var1 = DAT_01792ad8;
    p_Var2 = (__tree_node_base *)&DAT_01792ad8;
LAB_00ff7c9c:
    do {
      p_Var3 = p_Var1;
      if (*(FrameBuffer **)(p_Var3 + 0x20) <= this) {
        if (*(FrameBuffer **)(p_Var3 + 0x20) < this) {
          p_Var2 = p_Var3 + 8;
          p_Var1 = *(__tree_node_base **)p_Var2;
          if (*(__tree_node_base **)p_Var2 != (__tree_node_base *)0x0) goto LAB_00ff7c9c;
        }
        if (*(long *)p_Var2 != 0) {
          return;
        }
        goto LAB_00ff7cf8;
      }
      p_Var1 = *(__tree_node_base **)p_Var3;
      p_Var2 = p_Var3;
    } while (*(__tree_node_base **)p_Var3 != (__tree_node_base *)0x0);
    if (*(long *)p_Var3 != 0) {
      return;
    }
  }
LAB_00ff7cf8:
  p_Var1 = operator_new(0x28);
  *(FrameBuffer **)(p_Var1 + 0x20) = this;
  *(undefined8 *)p_Var1 = 0;
  *(undefined8 *)(p_Var1 + 8) = 0;
  *(__tree_node_base **)(p_Var1 + 0x10) = p_Var3;
  *(__tree_node_base **)p_Var2 = p_Var1;
  if ((long *)*_frameBuffers != (long *)0x0) {
    p_Var1 = *(__tree_node_base **)p_Var2;
    _frameBuffers = (long *)*_frameBuffers;
  }
  std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
            (DAT_01792ad8,p_Var1);
  DAT_01792ae0 = DAT_01792ae0 + 1;
  return;
}

