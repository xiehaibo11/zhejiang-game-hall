
/* cocos2d::Animation3D::~Animation3D() */

void __thiscall cocos2d::Animation3D::~Animation3D(Animation3D *this)

{
  ~Animation3D(this);
  operator_delete(this);
  return;
}

