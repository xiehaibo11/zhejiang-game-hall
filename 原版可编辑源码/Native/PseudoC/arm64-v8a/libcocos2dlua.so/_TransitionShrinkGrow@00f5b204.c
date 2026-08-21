
/* non-virtual thunk to cocos2d::TransitionShrinkGrow::~TransitionShrinkGrow() */

void __thiscall cocos2d::TransitionShrinkGrow::~TransitionShrinkGrow(TransitionShrinkGrow *this)

{
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

