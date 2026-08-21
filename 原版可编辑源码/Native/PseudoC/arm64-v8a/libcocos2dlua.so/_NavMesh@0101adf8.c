
/* cocos2d::NavMesh::~NavMesh() */

void __thiscall cocos2d::NavMesh::~NavMesh(NavMesh *this)

{
  ~NavMesh(this);
  operator_delete(this);
  return;
}

