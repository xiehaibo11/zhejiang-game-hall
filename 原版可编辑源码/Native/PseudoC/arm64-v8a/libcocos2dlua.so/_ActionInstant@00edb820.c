
/* non-virtual thunk to cocos2d::ActionInstant::~ActionInstant() */

void __thiscall cocos2d::ActionInstant::~ActionInstant(ActionInstant *this)

{
                    /* try { // try from 00edb828 to 00fdb833 has its CatchHandler @ 00edba20 */
  Action::~Action((Action *)(this + -0x28));
  operator_delete((Action *)(this + -0x28));
  return;
}

