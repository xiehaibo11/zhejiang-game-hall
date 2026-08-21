
/* cocos2d::RenderState::initialize() */

void cocos2d::RenderState::initialize(void)

{
                    /* catch() { ... } // from try @ 00fe208c with catch @ 00fe2100 */
  if (StateBlock::_defaultState == (Ref *)0x0) {
    StateBlock::_defaultState = (Ref *)StateBlock::create();
    if (StateBlock::_defaultState != (Ref *)0x0) {
                    /* catch() { ... } // from try @ 00fe2160 with catch @ 00fe211c */
      Ref::retain(StateBlock::_defaultState);
      return;
    }
  }
  return;
}

