
/* cocos2d::Waves3D::~Waves3D() */

void __thiscall cocos2d::Waves3D::~Waves3D(Waves3D *this)

{
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

