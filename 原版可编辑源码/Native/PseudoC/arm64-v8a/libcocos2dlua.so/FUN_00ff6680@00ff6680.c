
void FUN_00ff6680(int param_1,int param_2)

{
  if ((param_1 == 1) && (param_2 == 0)) {
    glDisable(0xbe2);
    cocos2d::RenderState::StateBlock::setBlend
              (cocos2d::RenderState::StateBlock::_defaultState,false);
    return;
  }
  glEnable(0xbe2);
  glBlendFunc(param_1,param_2);
  cocos2d::RenderState::StateBlock::setBlend(cocos2d::RenderState::StateBlock::_defaultState,true);
  cocos2d::RenderState::StateBlock::setBlendSrc
            (cocos2d::RenderState::StateBlock::_defaultState,param_1);
  cocos2d::RenderState::StateBlock::setBlendDst
            (cocos2d::RenderState::StateBlock::_defaultState,param_2);
  return;
}

