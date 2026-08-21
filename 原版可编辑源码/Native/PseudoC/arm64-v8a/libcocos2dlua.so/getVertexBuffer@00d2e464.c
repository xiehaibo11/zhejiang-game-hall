
/* cocos2d::Mesh::getVertexBuffer() const */

void __thiscall cocos2d::Mesh::getVertexBuffer(Mesh *this)

{
  VertexBuffer *this_00;
  
  this_00 = (VertexBuffer *)MeshIndexData::getVertexBuffer(*(MeshIndexData **)(this + 0x128));
  VertexBuffer::getVBO(this_00,0);
  return;
}

