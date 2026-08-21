
/* non-virtual thunk to cocos2d::PhysicsSprite3D::~PhysicsSprite3D() */

void __thiscall cocos2d::PhysicsSprite3D::~PhysicsSprite3D(PhysicsSprite3D *this)

{
  Sprite3D::~Sprite3D((Sprite3D *)(this + -0x2f8));
  operator_delete((Sprite3D *)(this + -0x2f8));
  return;
}

