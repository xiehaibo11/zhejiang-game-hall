
/* cocos2d::VertexData::~VertexData() */

void __thiscall cocos2d::VertexData::~VertexData(VertexData *this)

{
  ~VertexData(this);
  operator_delete(this);
  return;
}

