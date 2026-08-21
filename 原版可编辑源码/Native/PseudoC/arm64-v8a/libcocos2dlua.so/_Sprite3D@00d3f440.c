
/* cocos2d::Sprite3D::~Sprite3D() */

void __thiscall cocos2d::Sprite3D::~Sprite3D(Sprite3D *this)

{
  ~Sprite3D(this);
  operator_delete(this);
  return;
}

