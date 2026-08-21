
/* cocos2d::Mesh::getVertexSizeInBytes() const */

void __thiscall cocos2d::Mesh::getVertexSizeInBytes(Mesh *this)

{
  VertexBuffer *this_00;
  
  this_00 = (VertexBuffer *)MeshIndexData::getVertexBuffer(*(MeshIndexData **)(this + 0x128));
  VertexBuffer::getSizePerVertex(this_00);
  return;
}

