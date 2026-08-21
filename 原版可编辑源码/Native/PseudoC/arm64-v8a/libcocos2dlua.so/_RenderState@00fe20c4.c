
/* cocos2d::RenderState::~RenderState() */

void __thiscall cocos2d::RenderState::~RenderState(RenderState *this)

{
  ~RenderState(this);
  operator_delete(this);
  return;
}

