
/* non-virtual thunk to cocos2d::CardinalSplineBy::~CardinalSplineBy() */

void __thiscall cocos2d::CardinalSplineBy::~CardinalSplineBy(CardinalSplineBy *this)

{
                    /* try { // try from 00ece80c to 00fce867 has its CatchHandler @ 00ece7ac */
                    /* catch() { ... } // from try @ 00ece800 with catch @ 00ece824 */
  *(undefined ***)(this + -0x28) = &PTR__CardinalSplineTo_016f57d8;
  *(undefined ***)this = &PTR_clone_016f5840;
  if (*(Ref **)(this + 0x30) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x30));
    *(undefined8 *)(this + 0x30) = 0;
  }
  Action::~Action((Action *)(this + -0x28));
  return;
}

