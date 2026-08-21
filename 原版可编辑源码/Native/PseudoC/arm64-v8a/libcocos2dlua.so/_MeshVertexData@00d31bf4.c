
/* cocos2d::MeshVertexData::~MeshVertexData() */

void __thiscall cocos2d::MeshVertexData::~MeshVertexData(MeshVertexData *this)

{
  ~MeshVertexData(this);
  operator_delete(this);
  return;
}

