
/* non-virtual thunk to cocos2d::ActionInstant::~ActionInstant() */

void __thiscall cocos2d::ActionInstant::~ActionInstant(ActionInstant *this)

{
                    /* try { // try from 00edb818 to 00fdb827 has its CatchHandler @ 00edba24 */
  Action::~Action((Action *)(this + -0x28));
  return;
}

