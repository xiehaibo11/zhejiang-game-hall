
/* cocos2d::Bone3D::~Bone3D() */

void __thiscall cocos2d::Bone3D::~Bone3D(Bone3D *this)

{
  ~Bone3D(this);
  operator_delete(this);
  return;
}

