
/* non-virtual thunk to cocos2d::TransitionMoveInB::~TransitionMoveInB() */

void __thiscall cocos2d::TransitionMoveInB::~TransitionMoveInB(TransitionMoveInB *this)

{
                    /* try { // try from 00f59ea4 to 01059eaf has its CatchHandler @ 00f59ce8 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f59ea0 with catch @ 00f59eac
                        */
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

