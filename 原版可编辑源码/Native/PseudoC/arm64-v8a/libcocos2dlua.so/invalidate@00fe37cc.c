
/* cocos2d::RenderState::StateBlock::invalidate(long) */

void cocos2d::RenderState::StateBlock::invalidate(long param_1)

{
  *(long *)(_defaultState + 0x60) = param_1;
                    /* catch() { ... } // from try @ 00fe3820 with catch @ 00fe37dc */
  restore(0);
  return;
}

