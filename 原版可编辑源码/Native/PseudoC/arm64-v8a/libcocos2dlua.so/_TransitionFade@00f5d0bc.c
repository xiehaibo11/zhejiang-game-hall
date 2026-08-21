
/* cocos2d::TransitionFade::~TransitionFade() */

void __thiscall cocos2d::TransitionFade::~TransitionFade(TransitionFade *this)

{
                    /* try { // try from 00f5d0c8 to 0105d0ef has its CatchHandler @ 00f5d58c */
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

