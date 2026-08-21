
/* cocos2d::Shaky3D::~Shaky3D() */

void __thiscall cocos2d::Shaky3D::~Shaky3D(Shaky3D *this)

{
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

