
/* non-virtual thunk to cocos2d::ProgressFromTo::~ProgressFromTo() */

void __thiscall cocos2d::ProgressFromTo::~ProgressFromTo(ProgressFromTo *this)

{
                    /* try { // try from 00ee8644 to 00fe871f has its CatchHandler @ 00ee8500 */
  Action::~Action((Action *)(this + -0x28));
  operator_delete((Action *)(this + -0x28));
  return;
}

