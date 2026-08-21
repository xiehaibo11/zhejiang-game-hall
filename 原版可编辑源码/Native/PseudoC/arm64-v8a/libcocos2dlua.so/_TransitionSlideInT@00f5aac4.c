
/* non-virtual thunk to cocos2d::TransitionSlideInT::~TransitionSlideInT() */

void __thiscall cocos2d::TransitionSlideInT::~TransitionSlideInT(TransitionSlideInT *this)

{
  *(undefined ***)(this + -0x388) = &PTR__TransitionFlipX_01712c10;
  if (*(Ref **)(this + -0x18) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + -0x18));
  }
  if (*(Ref **)(this + -0x10) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + -0x10));
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f5aa04 with catch @ 00f5ab00
                        */
  Scene::~Scene((Scene *)(this + -0x388));
  return;
}

