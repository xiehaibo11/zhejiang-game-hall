
/* cocos2d::Mesh::getMeshVertexAttribCount() const */

long __thiscall cocos2d::Mesh::getMeshVertexAttribCount(Mesh *this)

{
  return *(long *)(*(long *)(*(long *)(this + 0x128) + 0x30) + 0x58) -
         *(long *)(*(long *)(*(long *)(this + 0x128) + 0x30) + 0x50) >> 4;
}

