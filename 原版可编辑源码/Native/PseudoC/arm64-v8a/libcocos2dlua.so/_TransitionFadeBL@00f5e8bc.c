
/* cocos2d::TransitionFadeBL::~TransitionFadeBL() */

void __thiscall cocos2d::TransitionFadeBL::~TransitionFadeBL(TransitionFadeBL *this)

{
                    /* try { // try from 00f5e8d8 to 0105e8df has its CatchHandler @ 00f5eebc */
  *(undefined ***)this = &PTR__TransitionFadeBL_0171af20;
  *(undefined ***)(this + 0x388) = &PTR__TransitionFadeTR_0171b488;
  if (*(Ref **)(this + 0x390) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x390));
  }
  *(undefined ***)this = &PTR__TransitionFlipX_01712c10;
  if (*(Ref **)(this + 0x370) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x370));
  }
  if (*(Ref **)(this + 0x378) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x378));
  }
  Scene::~Scene((Scene *)this);
  return;
}

