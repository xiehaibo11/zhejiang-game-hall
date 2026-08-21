
/* cocos2d::Grid3D::~Grid3D() */

void __thiscall cocos2d::Grid3D::~Grid3D(Grid3D *this)

{
  ~Grid3D(this);
  operator_delete(this);
  return;
}

