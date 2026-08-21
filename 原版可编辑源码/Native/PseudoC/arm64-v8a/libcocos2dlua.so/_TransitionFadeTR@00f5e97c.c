
/* non-virtual thunk to cocos2d::TransitionFadeTR::~TransitionFadeTR() */

void __thiscall cocos2d::TransitionFadeTR::~TransitionFadeTR(TransitionFadeTR *this)

{
                    /* try { // try from 00f5e98c to 0105e98f has its CatchHandler @ 00f5ee44 */
  TransitionFadeBL::~TransitionFadeBL((TransitionFadeBL *)(this + -0x388));
                    /* try { // try from 00f5e998 to 0105e99f has its CatchHandler @ 00f5ee40 */
                    /* try { // try from 00f5e9a0 to 0105e9ab has its CatchHandler @ 00f5ee38 */
  operator_delete((TransitionFadeBL *)(this + -0x388));
  return;
}

