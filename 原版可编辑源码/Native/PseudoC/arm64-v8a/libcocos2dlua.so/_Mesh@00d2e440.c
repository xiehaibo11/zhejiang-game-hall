
/* cocos2d::Mesh::~Mesh() */

void __thiscall cocos2d::Mesh::~Mesh(Mesh *this)

{
  ~Mesh(this);
  operator_delete(this);
  return;
}

