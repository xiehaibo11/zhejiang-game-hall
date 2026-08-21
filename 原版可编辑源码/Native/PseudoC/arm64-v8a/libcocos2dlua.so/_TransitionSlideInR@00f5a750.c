
/* non-virtual thunk to cocos2d::TransitionSlideInR::~TransitionSlideInR() */

void __thiscall cocos2d::TransitionSlideInR::~TransitionSlideInR(TransitionSlideInR *this)

{
                    /* try { // try from 00f5a75c to 0105a767 has its CatchHandler @ 00f5a87c */
                    /* try { // try from 00f5a768 to 0105a80f has its CatchHandler @ 00f5a6ac */
  *(undefined ***)(this + -0x388) = &PTR__TransitionFlipX_01712c10;
  if (*(Ref **)(this + -0x18) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + -0x18));
  }
  if (*(Ref **)(this + -0x10) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + -0x10));
  }
  Scene::~Scene((Scene *)(this + -0x388));
  return;
}

