
/* cocos2d::TransitionMoveInR::~TransitionMoveInR() */

void __thiscall cocos2d::TransitionMoveInR::~TransitionMoveInR(TransitionMoveInR *this)

{
                    /* try { // try from 00f59944 to 0105994f has its CatchHandler @ 00f59c40 */
  *(undefined ***)this = &PTR__TransitionFlipX_01712c10;
  if (*(Ref **)(this + 0x370) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x370));
  }
  if (*(Ref **)(this + 0x378) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x378));
  }
  Scene::~Scene((Scene *)this);
  operator_delete(this);
  return;
}

