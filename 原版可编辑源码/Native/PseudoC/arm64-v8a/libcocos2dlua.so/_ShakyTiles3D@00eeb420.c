
/* cocos2d::ShakyTiles3D::~ShakyTiles3D() */

void __thiscall cocos2d::ShakyTiles3D::~ShakyTiles3D(ShakyTiles3D *this)

{
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

