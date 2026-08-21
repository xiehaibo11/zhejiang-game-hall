
/* cocos2d::VertexBuffer::~VertexBuffer() */

void __thiscall cocos2d::VertexBuffer::~VertexBuffer(VertexBuffer *this)

{
  ~VertexBuffer(this);
  operator_delete(this);
  return;
}

