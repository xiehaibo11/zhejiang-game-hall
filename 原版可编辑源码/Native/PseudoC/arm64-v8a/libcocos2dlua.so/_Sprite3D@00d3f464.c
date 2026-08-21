
/* non-virtual thunk to cocos2d::Sprite3D::~Sprite3D() */

void __thiscall cocos2d::Sprite3D::~Sprite3D(Sprite3D *this)

{
  ~Sprite3D(this + -0x2f8);
  operator_delete(this + -0x2f8);
  return;
}

