
/* cocos2d::BatchSprite3D::~BatchSprite3D() */

void __thiscall cocos2d::BatchSprite3D::~BatchSprite3D(BatchSprite3D *this)

{
  ~BatchSprite3D(this);
  operator_delete(this);
  return;
}

