
/* cocos2d::TransitionSplitCols::~TransitionSplitCols() */

void __thiscall cocos2d::TransitionSplitCols::~TransitionSplitCols(TransitionSplitCols *this)

{
  TransitionSplitRows::~TransitionSplitRows((TransitionSplitRows *)this);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f5e240 with catch @ 00f5e25c
                        */
  operator_delete(this);
  return;
}

