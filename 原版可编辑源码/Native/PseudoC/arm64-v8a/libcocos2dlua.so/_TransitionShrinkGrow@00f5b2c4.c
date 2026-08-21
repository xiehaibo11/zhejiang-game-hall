
/* non-virtual thunk to cocos2d::TransitionShrinkGrow::~TransitionShrinkGrow() */

void __thiscall cocos2d::TransitionShrinkGrow::~TransitionShrinkGrow(TransitionShrinkGrow *this)

{
  Scene *this_00;
  
  this_00 = (Scene *)(this + -0x388);
  *(undefined ***)this_00 = &PTR__TransitionFlipX_01712c10;
  if (*(Ref **)(this + -0x18) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + -0x18));
  }
  if (*(Ref **)(this + -0x10) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + -0x10));
  }
  Scene::~Scene(this_00);
  operator_delete(this_00);
  return;
}

