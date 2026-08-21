
/* cocos2d::renderer::SimpleSprite3D::~SimpleSprite3D() */

void __thiscall cocos2d::renderer::SimpleSprite3D::~SimpleSprite3D(SimpleSprite3D *this)

{
  AssemblerSprite::~AssemblerSprite((AssemblerSprite *)this);
  operator_delete(this);
  return;
}

