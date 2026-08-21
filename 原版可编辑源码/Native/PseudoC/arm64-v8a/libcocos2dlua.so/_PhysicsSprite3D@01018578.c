
/* cocos2d::PhysicsSprite3D::~PhysicsSprite3D() */

void __thiscall cocos2d::PhysicsSprite3D::~PhysicsSprite3D(PhysicsSprite3D *this)

{
  Sprite3D::~Sprite3D((Sprite3D *)this);
  operator_delete(this);
  return;
}

