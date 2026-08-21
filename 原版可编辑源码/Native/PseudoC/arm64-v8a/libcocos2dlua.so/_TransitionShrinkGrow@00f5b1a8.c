
/* cocos2d::TransitionShrinkGrow::~TransitionShrinkGrow() */

void __thiscall cocos2d::TransitionShrinkGrow::~TransitionShrinkGrow(TransitionShrinkGrow *this)

{
  *(undefined ***)this = &PTR__TransitionFlipX_01712c10;
  if (*(Ref **)(this + 0x370) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x370));
  }
  if (*(Ref **)(this + 0x378) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x378));
  }
                    /* try { // try from 00f5b1e8 to 0105b28b has its CatchHandler @ 00f5b1e8
                       catch() { ... } // from try @ 00f5b1e8 with catch @ 00f5b1e8
                       catch() { ... } // from try @ 00f5b5bc with catch @ 00f5b1e8 */
  Scene::~Scene((Scene *)this);
  return;
}

