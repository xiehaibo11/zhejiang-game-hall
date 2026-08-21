
/* non-virtual thunk to cocos2d::TransitionSlideInR::~TransitionSlideInR() */

void __thiscall cocos2d::TransitionSlideInR::~TransitionSlideInR(TransitionSlideInR *this)

{
  Scene *this_00;
  
                    /* try { // try from 00f5a810 to 0105a817 has its CatchHandler @ 00f5a880 */
                    /* try { // try from 00f5a818 to 0105a8bf has its CatchHandler @ 00f5a6ac */
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

