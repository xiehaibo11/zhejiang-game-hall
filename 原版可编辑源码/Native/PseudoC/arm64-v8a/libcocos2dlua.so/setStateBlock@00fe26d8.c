
/* cocos2d::RenderState::setStateBlock(cocos2d::RenderState::StateBlock*) */

void __thiscall cocos2d::RenderState::setStateBlock(RenderState *this,StateBlock *param_1)

{
  if (param_1 != (StateBlock *)0x0) {
    Ref::retain((Ref *)param_1);
  }
  if (*(Ref **)(this + 0x30) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x30));
  }
  *(StateBlock **)(this + 0x30) = param_1;
  return;
}

