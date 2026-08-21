
/* cocos2d::IndexBuffer::~IndexBuffer() */

void __thiscall cocos2d::IndexBuffer::~IndexBuffer(IndexBuffer *this)

{
  ~IndexBuffer(this);
  operator_delete(this);
  return;
}

