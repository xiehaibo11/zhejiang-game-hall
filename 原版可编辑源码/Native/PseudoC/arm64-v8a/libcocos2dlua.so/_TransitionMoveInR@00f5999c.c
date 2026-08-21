
/* non-virtual thunk to cocos2d::TransitionMoveInR::~TransitionMoveInR() */

void __thiscall cocos2d::TransitionMoveInR::~TransitionMoveInR(TransitionMoveInR *this)

{
  Scene *this_00;
  
                    /* try { // try from 00f599ac to 010599af has its CatchHandler @ 00f59c4c */
  this_00 = (Scene *)(this + -0x388);
  *(undefined ***)this_00 = &PTR__TransitionFlipX_01712c10;
  if (*(Ref **)(this + -0x18) != (Ref *)0x0) {
                    /* try { // try from 00f599c4 to 010599c7 has its CatchHandler @ 00f59c3c */
    Ref::release(*(Ref **)(this + -0x18));
  }
  if (*(Ref **)(this + -0x10) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + -0x10));
  }
  Scene::~Scene(this_00);
  operator_delete(this_00);
  return;
}

