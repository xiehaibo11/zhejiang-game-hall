
/* cocos2d::RenderState::StateBlock::~StateBlock() */

void __thiscall cocos2d::RenderState::StateBlock::~StateBlock(StateBlock *this)

{
  Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

