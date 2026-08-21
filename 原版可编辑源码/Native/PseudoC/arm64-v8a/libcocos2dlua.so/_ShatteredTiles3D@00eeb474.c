
/* cocos2d::ShatteredTiles3D::~ShatteredTiles3D() */

void __thiscall cocos2d::ShatteredTiles3D::~ShatteredTiles3D(ShatteredTiles3D *this)

{
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

