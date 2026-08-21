
/* cocos2d::FlipX3D::~FlipX3D() */

void __thiscall cocos2d::FlipX3D::~FlipX3D(FlipX3D *this)

{
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

