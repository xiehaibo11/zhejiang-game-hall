
/* cocos2d::renderer::SimpleSprite2D::~SimpleSprite2D() */

void __thiscall cocos2d::renderer::SimpleSprite2D::~SimpleSprite2D(SimpleSprite2D *this)

{
  AssemblerSprite::~AssemblerSprite((AssemblerSprite *)this);
  operator_delete(this);
  return;
}

