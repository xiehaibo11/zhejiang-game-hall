
/* cocos2d::Primitive::draw() */

void __thiscall cocos2d::Primitive::draw(Primitive *this)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (*(VertexData **)(this + 0x28) != (VertexData *)0x0) {
    VertexData::use(*(VertexData **)(this + 0x28));
    if (*(IndexBuffer **)(this + 0x30) == (IndexBuffer *)0x0) {
      glDrawArrays(*(undefined4 *)(this + 0x40),*(undefined4 *)(this + 0x38),
                   *(undefined4 *)(this + 0x3c));
    }
    else {
      iVar1 = IndexBuffer::getType(*(IndexBuffer **)(this + 0x30));
      uVar4 = 0x1403;
      if (iVar1 != 0) {
        uVar4 = 0x1405;
      }
      uVar2 = IndexBuffer::getVBO(*(IndexBuffer **)(this + 0x30),0);
      glBindBuffer(0x8893,uVar2);
      iVar1 = *(int *)(this + 0x38);
      iVar3 = IndexBuffer::getSizePerIndex(*(IndexBuffer **)(this + 0x30));
      glDrawElements(*(undefined4 *)(this + 0x40),*(undefined4 *)(this + 0x3c),uVar4,
                     (long)iVar3 * (long)iVar1);
    }
    glBindBuffer(0x8893,0);
    glBindBuffer(0x8892,0);
    return;
  }
  return;
}

