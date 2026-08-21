
/* cocos2d::RenderState::finalize() */

void cocos2d::RenderState::finalize(void)

{
  if (StateBlock::_defaultState != (Ref *)0x0) {
    Ref::release(StateBlock::_defaultState);
    StateBlock::_defaultState = (Ref *)0x0;
  }
  return;
}

