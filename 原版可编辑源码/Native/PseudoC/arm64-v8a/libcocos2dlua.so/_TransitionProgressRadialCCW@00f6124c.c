
/* cocos2d::TransitionProgressRadialCCW::~TransitionProgressRadialCCW() */

void __thiscall
cocos2d::TransitionProgressRadialCCW::~TransitionProgressRadialCCW
          (TransitionProgressRadialCCW *this)

{
                    /* try { // try from 00f6124c to 010613bb has its CatchHandler @ 00f6124c
                       catch() { ... } // from try @ 00f6124c with catch @ 00f6124c
                       catch() { ... } // from try @ 00f613c4 with catch @ 00f6124c */
  TransitionFlipX::~TransitionFlipX((TransitionFlipX *)this);
  operator_delete(this);
  return;
}

