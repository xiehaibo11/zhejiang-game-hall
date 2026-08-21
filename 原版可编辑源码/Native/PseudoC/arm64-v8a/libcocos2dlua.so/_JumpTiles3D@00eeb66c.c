
/* cocos2d::JumpTiles3D::~JumpTiles3D() */

void __thiscall cocos2d::JumpTiles3D::~JumpTiles3D(JumpTiles3D *this)

{
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

