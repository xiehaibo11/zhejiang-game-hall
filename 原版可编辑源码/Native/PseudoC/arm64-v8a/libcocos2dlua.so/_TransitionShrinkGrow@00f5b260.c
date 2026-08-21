
/* cocos2d::TransitionShrinkGrow::~TransitionShrinkGrow() */

void __thiscall cocos2d::TransitionShrinkGrow::~TransitionShrinkGrow(TransitionShrinkGrow *this)

{
  *(undefined ***)this = &PTR__TransitionFlipX_01712c10;
  if (*(Ref **)(this + 0x370) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x370));
  }
                    /* try { // try from 00f5b28c to 0105b297 has its CatchHandler @ 00f5b608 */
  if (*(Ref **)(this + 0x378) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x378));
  }
  Scene::~Scene((Scene *)this);
                    /* try { // try from 00f5b2a0 to 0105b2a7 has its CatchHandler @ 00f5b604 */
                    /* try { // try from 00f5b2a8 to 0105b2b3 has its CatchHandler @ 00f5b60c */
  operator_delete(this);
  return;
}

