
/* cocos2d::Bundle3D::~Bundle3D() */

void __thiscall cocos2d::Bundle3D::~Bundle3D(Bundle3D *this)

{
  ~Bundle3D(this);
  operator_delete(this);
  return;
}

