
/* cocos2d::VertexAttribBinding::bind(int) */

void __thiscall cocos2d::VertexAttribBinding::bind(VertexAttribBinding *this,int param_1)

{
  undefined4 uVar1;
  long *plVar2;
  
  uVar1 = VertexBuffer::getVBO
                    (*(VertexBuffer **)(*(long *)(*(long *)(this + 0x28) + 0x30) + 0x30),param_1);
  glBindBuffer(0x8892,uVar1);
  uVar1 = IndexBuffer::getVBO(*(IndexBuffer **)(*(long *)(this + 0x28) + 0x28),param_1);
  glBindBuffer(0x8893,uVar1);
  GL::enableVertexAttribs(*(uint *)(this + 0x60));
  for (plVar2 = *(long **)(this + 0x48); plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
    VertexAttribValue::apply((VertexAttribValue *)(plVar2 + 5));
  }
  return;
}

