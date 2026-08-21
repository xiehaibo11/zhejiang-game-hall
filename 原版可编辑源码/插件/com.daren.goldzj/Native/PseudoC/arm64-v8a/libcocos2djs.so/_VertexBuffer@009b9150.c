
/* cocos2d::renderer::VertexBuffer::~VertexBuffer() */

void __thiscall cocos2d::renderer::VertexBuffer::~VertexBuffer(VertexBuffer *this)

{
  ~VertexBuffer(this);
  operator_delete(this);
  return;
}

