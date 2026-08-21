
/* cocos2d::VertexBuffer::getSize(int) const */

int __thiscall cocos2d::VertexBuffer::getSize(VertexBuffer *this,int param_1)

{
  return *(int *)(*(long *)(this + 0x40) + (long)param_1 * 4) * *(int *)(this + 0x3c);
}

