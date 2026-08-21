
/* cocos2d::renderer::BaseRenderer::~BaseRenderer() */

void __thiscall cocos2d::renderer::BaseRenderer::~BaseRenderer(BaseRenderer *this)

{
  ~BaseRenderer(this);
  operator_delete(this);
  return;
}

