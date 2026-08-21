
/* non-virtual thunk to cocos2d::TransitionSlideInB::~TransitionSlideInB() */

void __thiscall cocos2d::TransitionSlideInB::~TransitionSlideInB(TransitionSlideInB *this)

{
  *(undefined ***)(this + -0x388) = &PTR__TransitionFlipX_01712c10;
                    /* catch() { ... } // from try @ 00f5ae08 with catch @ 00f5ae58 */
  if (*(Ref **)(this + -0x18) != (Ref *)0x0) {
                    /* catch() { ... } // from try @ 00f5ad70 with catch @ 00f5ae5c */
    Ref::release(*(Ref **)(this + -0x18));
  }
  if (*(Ref **)(this + -0x10) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + -0x10));
  }
  Scene::~Scene((Scene *)(this + -0x388));
  return;
}

