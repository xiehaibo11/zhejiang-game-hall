
/* cocos2d::CardinalSplineBy::~CardinalSplineBy() */

void __thiscall cocos2d::CardinalSplineBy::~CardinalSplineBy(CardinalSplineBy *this)

{
                    /* try { // try from 00ece7ac to 00fce7ff has its CatchHandler @ 00ece7ac
                       catch() { ... } // from try @ 00ece7ac with catch @ 00ece7ac
                       catch() { ... } // from try @ 00ece80c with catch @ 00ece7ac */
  *(undefined ***)this = &PTR__CardinalSplineTo_016f57d8;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f5840;
  if (*(Ref **)(this + 0x58) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x58));
    *(undefined8 *)(this + 0x58) = 0;
  }
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

