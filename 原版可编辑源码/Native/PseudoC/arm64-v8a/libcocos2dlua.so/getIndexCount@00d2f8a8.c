
/* cocos2d::Mesh::getIndexCount() const */

long __thiscall cocos2d::Mesh::getIndexCount(Mesh *this)

{
  int iVar1;
  
  iVar1 = IndexBuffer::getIndexNumber(*(IndexBuffer **)(*(long *)(this + 0x128) + 0x28),0);
  return (long)iVar1;
}

