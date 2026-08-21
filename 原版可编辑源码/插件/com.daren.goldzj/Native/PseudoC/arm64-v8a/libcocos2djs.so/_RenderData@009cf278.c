
/* cocos2d::renderer::RenderData::~RenderData() */

void __thiscall cocos2d::renderer::RenderData::~RenderData(RenderData *this)

{
  ~RenderData(this);
  operator_delete(this);
  return;
}

