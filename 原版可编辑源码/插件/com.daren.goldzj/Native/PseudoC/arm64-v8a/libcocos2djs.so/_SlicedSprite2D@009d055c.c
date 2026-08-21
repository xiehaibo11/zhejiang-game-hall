
/* cocos2d::renderer::SlicedSprite2D::~SlicedSprite2D() */

void __thiscall cocos2d::renderer::SlicedSprite2D::~SlicedSprite2D(SlicedSprite2D *this)

{
  AssemblerSprite::~AssemblerSprite((AssemblerSprite *)this);
  operator_delete(this);
  return;
}

