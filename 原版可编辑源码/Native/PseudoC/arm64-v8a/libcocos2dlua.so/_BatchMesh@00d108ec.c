
/* cocos2d::BatchMesh::~BatchMesh() */

void __thiscall cocos2d::BatchMesh::~BatchMesh(BatchMesh *this)

{
  ~BatchMesh(this);
  operator_delete(this);
  return;
}

