
/* non-virtual thunk to cocos2d::TransitionMoveInT::~TransitionMoveInT() */

void __thiscall cocos2d::TransitionMoveInT::~TransitionMoveInT(TransitionMoveInT *this)

{
                    /* catch() { ... } // from try @ 00f59774 with catch @ 00f59bdc */
  *(undefined ***)(this + -0x388) = &PTR__TransitionFlipX_01712c10;
  if (*(Ref **)(this + -0x18) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + -0x18));
  }
  if (*(Ref **)(this + -0x10) != (Ref *)0x0) {
                    /* catch() { ... } // from try @ 00f596c0 with catch @ 00f59bf4 */
    Ref::release(*(Ref **)(this + -0x10));
  }
  Scene::~Scene((Scene *)(this + -0x388));
  return;
}

