
/* cocos2d::VertexAttribBinding::bind() */

void __thiscall cocos2d::VertexAttribBinding::bind(VertexAttribBinding *this)

{
  undefined4 uVar1;
  long *plVar2;
  
  if (*(uint *)(this + 0x24) == 0) {
    uVar1 = VertexBuffer::getVBO
                      (*(VertexBuffer **)(*(long *)(*(long *)(this + 0x28) + 0x30) + 0x30),0);
    glBindBuffer(0x8892,uVar1);
    uVar1 = IndexBuffer::getVBO(*(IndexBuffer **)(*(long *)(this + 0x28) + 0x28),0);
                    /* try { // try from 00ff46b8 to 010f482b has its CatchHandler @ 00ff45fc */
    glBindBuffer(0x8893,uVar1);
    GL::enableVertexAttribs(*(uint *)(this + 0x60));
    for (plVar2 = *(long **)(this + 0x48); plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      VertexAttribValue::apply((VertexAttribValue *)(plVar2 + 5));
    }
    return;
  }
                    /* try { // try from 00ff4684 to 010f46b7 has its CatchHandler @ 00ff4810 */
  GL::bindVAO(*(uint *)(this + 0x24));
  return;
}

