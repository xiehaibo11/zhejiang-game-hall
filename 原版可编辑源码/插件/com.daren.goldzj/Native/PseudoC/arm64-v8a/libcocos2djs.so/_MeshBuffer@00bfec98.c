
/* cocos2d::middleware::MeshBuffer::~MeshBuffer() */

void __thiscall cocos2d::middleware::MeshBuffer::~MeshBuffer(MeshBuffer *this)

{
  ~MeshBuffer(this);
  operator_delete(this);
  return;
}

