
/* non-virtual thunk to cocos2d::Place::~Place() */

void __thiscall cocos2d::Place::~Place(Place *this)

{
  Action::~Action((Action *)(this + -0x28));
                    /* catch() { ... } // from try @ 00edb740 with catch @ 00edba88 */
  operator_delete((Action *)(this + -0x28));
  return;
}

