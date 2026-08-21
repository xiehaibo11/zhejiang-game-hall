
/* cocos2d::renderer::IndexBuffer::~IndexBuffer() */

void __thiscall cocos2d::renderer::IndexBuffer::~IndexBuffer(IndexBuffer *this)

{
  ~IndexBuffer(this);
  operator_delete(this);
  return;
}

