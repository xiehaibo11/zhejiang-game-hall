
/* cocos2d::VertexAttribBinding::unbind() */

void __thiscall cocos2d::VertexAttribBinding::unbind(VertexAttribBinding *this)

{
  if (*(int *)(this + 0x24) != 0) {
    GL::bindVAO(0);
    return;
  }
  glBindBuffer(0x8892,0);
  glBindBuffer(0x8893,0);
  return;
}

